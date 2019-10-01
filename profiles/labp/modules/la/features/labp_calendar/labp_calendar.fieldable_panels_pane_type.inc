<?php
/**
 * @file
 * labp_calendar.fieldable_panels_pane_type.inc
 */

/**
 * Implements hook_default_fieldable_panels_pane_type().
 */
function labp_calendar_default_fieldable_panels_pane_type() {
  $export = array();

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'la_calendar';
  $fieldable_panels_pane_type->title = 'LA Calendar';
  $fieldable_panels_pane_type->description = 'A widget that integrates with LA City\'s ITA Calendar system';
  $export['la_calendar'] = $fieldable_panels_pane_type;

  return $export;
}
