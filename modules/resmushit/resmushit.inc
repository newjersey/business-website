<?php

/**
 * @file
 * Additional functions.
 */

/**
 * @return array
 * Define the new image style effect.
 */
function resmushit_image_effect_info() {
  return array(
    'reSmush.it' => array(
      'label' => t(RESMUSHIT_EFFECT_NAME),
      'help' => t('Optimize images using reSmush.it.'),
      'effect callback' => 'resmushit_effect',
    )
  );
}

/**
 * @param \stdClass $image
 * @return bool
 * Execute image optimalization through reSmush.it.
 */
function resmushit_effect(&$image, $data) {

  // https://api.drupal.org/api/examples/image_example%21image_example.module/function/image_example_colorize_effect/7.x-1.x
  // Image manipulation should be done to the $image->resource, which will be automatically saved as a new image once all effects have been applied.
  // If your effect makes changes to the $image->resource that relate to any information stored in the $image->info array (width, height, etc.) you should update that information as well.
  // Note that the size of the file here is may be influenced by any preceding image styles (e.g., resizing).

  $currentstyle = FALSE;
  $item = menu_get_item();
  // We find the currently generated image style in $item['map'], there is one single array, and that contains the style name.
  foreach($item['map'] as $val) {
    if (is_array($val)) {
      $currentstyle = $val['name'];
      break;
    }
  }
  if (!isset($currentstyle)) {
    watchdog('reSmush.it', 'Could not determine the currently generated image style name.', NULL, WATCHDOG_ERROR);
    return;
  }

  $currentstylepath = image_style_path($currentstyle, $image->source);

  $GLOBALS['resmushit_todo'] = $currentstylepath;
}

/**
 * @param $stylepath
 * @return bool
 */
function resmushit_optimize($stylepath) {

  $debug = FALSE;
  if (variable_get('resmushit_debug', 0) == 1) {
    $debug = TRUE;
  }

  // This is then what reSmush.it will get as its source image.
  $image_contents =  file_get_contents($stylepath);

  if ($debug) {
    watchdog('reSmush.it', 'Using drupal_http_request().', array(), WATCHDOG_INFO);
  }
  $boundary = 'A0sFSD';
  $filename = basename($stylepath);
  $mimetype = "application/octet-stream";
  $fileencoded = "--$boundary\r\n";
  $fileencoded .= "Content-Disposition: form-data; name=\"files\"; filename=\"$filename\"\r\n";
  $fileencoded .= "Content-Transfer-Encoding: binary\r\n";
  $fileencoded .= "Content-Type: $mimetype\r\n\r\n";
  $fileencoded .= $image_contents . "\r\n";
  $fileencoded .="--$boundary--";
  $options = array(
    'headers' => array("Content-Type" => "multipart/form-data; boundary=$boundary"),
    'method' => 'POST',
    'timeout' => variable_get('resmushit_timeout', RESMUSHIT_TIMEOUT),
    'data' => $fileencoded,
  );
  $gotten = drupal_http_request(RESMUSHIT_API_URL, $options);

  if ($gotten->code <> 200) {
    // Important to test for an error immediately here. If no response from WP or other error, end immediately.
    watchdog('reSmush.it', 'Could not optimize image %dst -- the reSmush.it response code was: %gottencode.', array('%dst' => $stylepath, '%gottencode' => $gotten->code), WATCHDOG_ERROR);
    resmushit_log($stylepath, 'API request error: ' . $gotten->code, '', '', '');
    return FALSE;
  }

  $jsondecoded = json_decode($gotten->data);

  if (!isset($jsondecoded->error)) {
    $result = drupal_http_request($jsondecoded->dest);
    if (!isset($result->error)) {
      file_unmanaged_save_data($result->data, $stylepath, FILE_EXISTS_REPLACE);
    }
    else {
      watchdog('reSmush.it', 'Could not retrieve the optimized image %dst -- the response code was: %gottencode1.', array('%dst' => $stylepath, '%gottencode1' => $result->error), WATCHDOG_ERROR);
      resmushit_log($stylepath, 'Error retrieving from reSmush.it: ' . $result->error, '', '', '');
      return FALSE;
    }
  }
  else {
    watchdog('reSmush.it', 'Could not optimize image %dst -- the reSmush.it response code was: %gottencode1: %gottencode2.', array('%dst' => $stylepath, '%gottencode1' => $jsondecoded->error, '%gottencode2' => $jsondecoded->error_long), WATCHDOG_ERROR);
    resmushit_log($stylepath, $jsondecoded->error . ' : ' . $jsondecoded->error_long, '', '', '');
    return FALSE;
  }

  if ($debug) {
    watchdog('reSmush.it', 'Successfully optimized image %dst. Size reduction %before bytes -> %after bytes (%percent%).', array('%dst' => $stylepath, '%before' => number_format($jsondecoded->src_size), '%after' => number_format($jsondecoded->dest_size), '%percent' => $jsondecoded->percent), WATCHDOG_INFO);
  }

  // Increase the counter of successful optimalizations.
  $total_successes = variable_get('resmushit_total_successes', 0);
  $total_successes++;
  variable_set('resmushit_total_successes', $total_successes);

  resmushit_log($stylepath, 'SUCCESS', number_format($jsondecoded->src_size) . ' bytes', number_format($jsondecoded->dest_size) . ' bytes', $jsondecoded->percent . '%');

  return TRUE;
}

/**
 * @return string
 * Information relevant to the reSmush.it module activity on this site.
 */
function resmushit_dashboard() {
  $result = '';

  $result .= t('<p><h2>reSmush.it module dashboard</h2>');

  $result .= '<p>' . t('' . l(t('reSmush.it'), 'https://www.resmush.it/', array( 'external' => TRUE, 'attributes' => array('target' => '_blank') )) . ' is a free image optimalization API that seamlessly replaced the excellent but now defunct Yahoo Smush.it web service. It compresses the size of your images, making them and therefore your website significantly faster to load.');

  $result .= t('<p><h3>Image styles</h3>');
  $result .= '<p>' . t('Effect reSmush.it is currently used by the following image styles on this site:');
  $image_styles = image_styles();
  $configured_image_styles = array();
  foreach ($image_styles as $style) {
    foreach ($style['effects'] as $arr) {
      if ($arr['label'] == RESMUSHIT_EFFECT_NAME) {
        $configured_image_styles[$style['name']] = $style['label'];
        break;
      }
    }
  }
  $list_image_styles = array();
  foreach ($configured_image_styles as $key => $val) {
    $list_image_styles[] = l($val, '/admin/config/media/image-styles/edit/' . $key);
  }
  if (empty($list_image_styles)) {
    $list_image_styles[] = 'None yet. Configure them at ' . l(t('admin/config/media/image-styles'), '/admin/config/media/image-styles') . '.';
  }
  $result .= theme_item_list(array(
    'items' => $list_image_styles,
    'title' => '', //'List of image styles using the reSmush.it effect',
    'type' => 'ul',
    'attributes' => array(),
  ));

  $result .= t('<p><h3>Successes</h3>');
  $result .= '<p>' . t('Total number of successful optimalizations on this site: ' . variable_get('resmushit_total_successes', 0)) . ' (out of ' . variable_get('resmushit_all_optimalizations', 0) . ').';

  $recent_optimalizations = variable_get('resmushit_recent_optimalizations', array());
  $result .= '<p><h3>' . t('Recent %logsize operations:', array('%logsize' => sizeof($recent_optimalizations))) . '</h3>';
  $recent_optimalizations = array_reverse($recent_optimalizations);
  if (!empty($recent_optimalizations)) {
    $result .= '<table>';
    $result .= '<tr>';
    $result .= '<th>#</th>';
    $result .= '<th>Time</th>';
    $result .= '<th>Image</th>';
    $result .= '<th>Result</th>';
    $result .= '<th>Original size</th>';
    $result .= '<th>Optimized size</th>';
    $result .= '<th>Reduction in size</th>';
    $result .= '</tr>';
    foreach ($recent_optimalizations as $keyrow => $row) {
      $result .= '<tr>';
      $result .= '<td>' . ($keyrow+1) . '.</td>';
      foreach ($row as $col) {
        $result .= '<td>';
        $result .= $col;
        $result .= '</td>';
      }
      $result .= '</tr>';
    }
    $result .= '</table>';
  }

  return $result;
}

/**
 * @param $imagesource
 * @param $error
 * @param $sizebefore
 * @param $sizeafter
 * @param $gain
 * Keep a log of last few optimalizations.
 */
function resmushit_log($imagesource, $error, $sizebefore, $sizeafter, $gain) {
  $recent_optimalizations = resmushit_trimmed_log();
  $this_operation = array(
    date("Y-m-d H:i:s", REQUEST_TIME),
    $imagesource,
    $error,
    $sizebefore,
    $sizeafter,
    $gain,
  );
  $recent_optimalizations[] = $this_operation;
  variable_set('resmushit_recent_optimalizations', $recent_optimalizations);
  $all_optimalizations = variable_get('resmushit_all_optimalizations', 0) + 1;
  variable_set('resmushit_all_optimalizations', $all_optimalizations);
}

/**
 * @return null
 * Return the log trimmed to the correct length.
 */
function resmushit_trimmed_log() {
  $recent_optimalizations = variable_get('resmushit_recent_optimalizations', array());
  if (sizeof($recent_optimalizations) >= variable_get('resmushit_log_size', RESMUSHIT_LOG_SIZE)) {
    array_shift($recent_optimalizations);
  }
  return $recent_optimalizations;
}

/**
 * Implementing hook_exit().
 */
function resmushit_exit() {
  if (isset($GLOBALS['resmushit_todo'])) {
    resmushit_optimize($GLOBALS['resmushit_todo']);
  }
}
