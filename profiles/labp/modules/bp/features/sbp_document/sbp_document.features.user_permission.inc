<?php
/**
 * @file
 * sbp_document.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function sbp_document_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'delete any document files'.
  $permissions['delete any document files'] = array(
    'name' => 'delete any document files',
    'roles' => array(
      'Editor' => 'Editor',
      'administrator' => 'administrator',
      'reviewer' => 'reviewer',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own document files'.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(
      'Editor' => 'Editor',
      'administrator' => 'administrator',
      'curator' => 'curator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete terms in document_business_need'.
  $permissions['delete terms in document_business_need'] = array(
    'name' => 'delete terms in document_business_need',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in document_business_stage'.
  $permissions['delete terms in document_business_stage'] = array(
    'name' => 'delete terms in document_business_stage',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in document_type'.
  $permissions['delete terms in document_type'] = array(
    'name' => 'delete terms in document_type',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'download any document files'.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(
      'Editor' => 'Editor',
      'administrator' => 'administrator',
      'curator' => 'curator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own document files'.
  $permissions['download own document files'] = array(
    'name' => 'download own document files',
    'roles' => array(
      'Editor' => 'Editor',
      'administrator' => 'administrator',
      'curator' => 'curator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any document files'.
  $permissions['edit any document files'] = array(
    'name' => 'edit any document files',
    'roles' => array(
      'Editor' => 'Editor',
      'administrator' => 'administrator',
      'curator' => 'curator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own document files'.
  $permissions['edit own document files'] = array(
    'name' => 'edit own document files',
    'roles' => array(
      'Editor' => 'Editor',
      'administrator' => 'administrator',
      'curator' => 'curator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit terms in document_business_need'.
  $permissions['edit terms in document_business_need'] = array(
    'name' => 'edit terms in document_business_need',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in document_business_stage'.
  $permissions['edit terms in document_business_stage'] = array(
    'name' => 'edit terms in document_business_stage',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in document_type'.
  $permissions['edit terms in document_type'] = array(
    'name' => 'edit terms in document_type',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
