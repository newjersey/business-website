<?php
/**
 * @file
 * sbp_wysiwyg.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function sbp_wysiwyg_defaultconfig_features() {
  return array(
    'sbp_wysiwyg' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function sbp_wysiwyg_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightning_wysiwyg_entity_embed_icon_fid';
  $strongarm->value = '1';
  $export['lightning_wysiwyg_entity_embed_icon_fid'] = $strongarm;

  return $export;
}
