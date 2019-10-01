<?php
/**
 * @file
 * labp_calendar.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function labp_calendar_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'fieldable_panels_pane-la_calendar-field_departments'.
  $field_instances['fieldable_panels_pane-la_calendar-field_departments'] = array(
    'bundle' => 'la_calendar',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'One or more departments, comma separated',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_departments',
    'label' => 'Departments',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -2,
    ),
  );

  // Exported field_instance:
  // 'fieldable_panels_pane-la_calendar-field_display_type'.
  $field_instances['fieldable_panels_pane-la_calendar-field_display_type'] = array(
    'bundle' => 'la_calendar',
    'default_value' => array(
      0 => array(
        'value' => 'event-list',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_display_type',
    'label' => 'Display Type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => -3,
    ),
  );

  // Exported field_instance:
  // 'fieldable_panels_pane-la_calendar-field_unique_id'.
  $field_instances['fieldable_panels_pane-la_calendar-field_unique_id'] = array(
    'bundle' => 'la_calendar',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This should be a unique identifier for the container that hosts the widget. This ensures the widget can be placed more than once on a page. This should be a name used for the code that follows the following conventions: use of dashes instead of spaces, all lowercase letters, short, unique to a page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_unique_id',
    'label' => 'Unique ID',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Departments');
  t('Display Type');
  t('One or more departments, comma separated');
  t('This should be a unique identifier for the container that hosts the widget. This ensures the widget can be placed more than once on a page. This should be a name used for the code that follows the following conventions: use of dashes instead of spaces, all lowercase letters, short, unique to a page.');
  t('Unique ID');

  return $field_instances;
}
