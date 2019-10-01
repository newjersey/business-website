<?php
/**
 * @file
 * sbp_wysiwyg.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function sbp_wysiwyg_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightning_wysiwyg_entity_embed_icon_fid';
  $strongarm->value = '1';
  $export['lightning_wysiwyg_entity_embed_icon_fid'] = $strongarm;

  return $export;
}
