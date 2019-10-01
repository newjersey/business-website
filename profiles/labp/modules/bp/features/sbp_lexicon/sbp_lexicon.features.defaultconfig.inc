<?php
/**
 * @file
 * sbp_lexicon.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function sbp_lexicon_defaultconfig_features() {
  return array(
    'sbp_lexicon' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function sbp_lexicon_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lexicon_introduction_8';
  $strongarm->value = array(
    'value' => '',
    'format' => 'filtered_html',
  );
  $export['lexicon_introduction_8'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lexicon_path_8';
  $strongarm->value = 'resource-locator/terms-definitions';
  $export['lexicon_path_8'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lexicon_title_8';
  $strongarm->value = 'Terms & Definitions';
  $export['lexicon_title_8'] = $strongarm;

  return $export;
}
