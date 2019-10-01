<?php
/**
 * @file
 * labp_calendar.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function labp_calendar_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create fieldable la_calendar'.
  $permissions['create fieldable la_calendar'] = array(
    'name' => 'create fieldable la_calendar',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable la_calendar'.
  $permissions['delete fieldable la_calendar'] = array(
    'name' => 'delete fieldable la_calendar',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable la_calendar'.
  $permissions['edit fieldable la_calendar'] = array(
    'name' => 'edit fieldable la_calendar',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  return $permissions;
}
