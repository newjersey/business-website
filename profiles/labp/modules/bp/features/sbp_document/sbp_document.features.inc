<?php
/**
 * @file
 * sbp_document.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sbp_document_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
