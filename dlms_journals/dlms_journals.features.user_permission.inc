<?php
/**
 * @file
 * dlms_journals.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dlms_journals_user_default_permissions() {
  $permissions = array();

  // Exported permission: create journal content.
  $permissions['create journal content'] = array(
    'name' => 'create journal content',
    'roles' => array(
      0 => 'administrator',
      1 => 'librarian',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any journal content.
  $permissions['delete any journal content'] = array(
    'name' => 'delete any journal content',
    'roles' => array(
      0 => 'administrator',
      1 => 'librarian',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own journal content.
  $permissions['delete own journal content'] = array(
    'name' => 'delete own journal content',
    'roles' => array(
      0 => 'administrator',
      1 => 'librarian',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any journal content.
  $permissions['edit any journal content'] = array(
    'name' => 'edit any journal content',
    'roles' => array(
      0 => 'administrator',
      1 => 'librarian',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own journal content.
  $permissions['edit own journal content'] = array(
    'name' => 'edit own journal content',
    'roles' => array(
      0 => 'administrator',
      1 => 'librarian',
    ),
    'module' => 'node',
  );

  return $permissions;
}
