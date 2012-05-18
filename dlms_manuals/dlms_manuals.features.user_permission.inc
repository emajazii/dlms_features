<?php
/**
 * @file
 * dlms_manuals.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dlms_manuals_user_default_permissions() {
  $permissions = array();

  // Exported permission: create manual content.
  $permissions['create manual content'] = array(
    'name' => 'create manual content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any manual content.
  $permissions['delete any manual content'] = array(
    'name' => 'delete any manual content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own manual content.
  $permissions['delete own manual content'] = array(
    'name' => 'delete own manual content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any manual content.
  $permissions['edit any manual content'] = array(
    'name' => 'edit any manual content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own manual content.
  $permissions['edit own manual content'] = array(
    'name' => 'edit own manual content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
