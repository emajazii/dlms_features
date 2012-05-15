<?php
/**
 * @file
 * dlms_papers.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dlms_papers_user_default_permissions() {
  $permissions = array();

  // Exported permission: create paper content
  $permissions['create paper content'] = array(
    'name' => 'create paper content',
    'roles' => array(
      0 => 'administrator',
      1 => 'librarian',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any paper content
  $permissions['delete any paper content'] = array(
    'name' => 'delete any paper content',
    'roles' => array(
      0 => 'administrator',
      1 => 'librarian',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own paper content
  $permissions['delete own paper content'] = array(
    'name' => 'delete own paper content',
    'roles' => array(
      0 => 'administrator',
      1 => 'librarian',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any paper content
  $permissions['edit any paper content'] = array(
    'name' => 'edit any paper content',
    'roles' => array(
      0 => 'administrator',
      1 => 'librarian',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own paper content
  $permissions['edit own paper content'] = array(
    'name' => 'edit own paper content',
    'roles' => array(
      0 => 'administrator',
      1 => 'librarian',
    ),
    'module' => 'node',
  );

  return $permissions;
}
