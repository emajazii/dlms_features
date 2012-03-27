<?php
/**
 * @file
 * dlms.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function dlms_user_default_roles() {
  $roles = array();

  // Exported role: administrator
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '2',
  );

  // Exported role: librarian
  $roles['librarian'] = array(
    'name' => 'librarian',
    'weight' => '3',
  );

  return $roles;
}
