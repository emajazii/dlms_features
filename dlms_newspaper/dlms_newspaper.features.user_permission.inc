<?php
/**
 * @file
 * dlms_newspaper.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dlms_newspaper_user_default_permissions() {
  $permissions = array();

  // Exported permission: create newspaper content.
  $permissions['create newspaper content'] = array(
    'name' => 'create newspaper content',
    'roles' => array(
      0 => 'administrator',
      1 => 'librarian',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any newspaper content.
  $permissions['delete any newspaper content'] = array(
    'name' => 'delete any newspaper content',
    'roles' => array(
      0 => 'administrator',
      1 => 'librarian',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own newspaper content.
  $permissions['delete own newspaper content'] = array(
    'name' => 'delete own newspaper content',
    'roles' => array(
      0 => 'administrator',
      1 => 'librarian',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any newspaper content.
  $permissions['edit any newspaper content'] = array(
    'name' => 'edit any newspaper content',
    'roles' => array(
      0 => 'administrator',
      1 => 'librarian',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own newspaper content.
  $permissions['edit own newspaper content'] = array(
    'name' => 'edit own newspaper content',
    'roles' => array(
      0 => 'administrator',
      1 => 'librarian',
    ),
    'module' => 'node',
  );

  return $permissions;
}
