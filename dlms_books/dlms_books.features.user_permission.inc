<?php
/**
 * @file
 * dlms_books.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dlms_books_user_default_permissions() {
  $permissions = array();

  // Exported permission: create book content
  $permissions['create book content'] = array(
    'name' => 'create book content',
    'roles' => array(
      0 => 'administrator',
      1 => 'librarian',
    ),
    'module' => 'node',
  );

  // Exported permission: create borrow_return content
  $permissions['create borrow_return content'] = array(
    'name' => 'create borrow_return content',
    'roles' => array(
      0 => 'administrator',
      1 => 'librarian',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any book content
  $permissions['delete any book content'] = array(
    'name' => 'delete any book content',
    'roles' => array(
      0 => 'administrator',
      1 => 'librarian',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any borrow_return content
  $permissions['delete any borrow_return content'] = array(
    'name' => 'delete any borrow_return content',
    'roles' => array(
      0 => 'administrator',
      1 => 'librarian',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own book content
  $permissions['delete own book content'] = array(
    'name' => 'delete own book content',
    'roles' => array(
      0 => 'administrator',
      1 => 'librarian',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own borrow_return content
  $permissions['delete own borrow_return content'] = array(
    'name' => 'delete own borrow_return content',
    'roles' => array(
      0 => 'administrator',
      1 => 'librarian',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any book content
  $permissions['edit any book content'] = array(
    'name' => 'edit any book content',
    'roles' => array(
      0 => 'administrator',
      1 => 'librarian',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any borrow_return content
  $permissions['edit any borrow_return content'] = array(
    'name' => 'edit any borrow_return content',
    'roles' => array(
      0 => 'administrator',
      1 => 'librarian',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own book content
  $permissions['edit own book content'] = array(
    'name' => 'edit own book content',
    'roles' => array(
      0 => 'administrator',
      1 => 'librarian',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own borrow_return content
  $permissions['edit own borrow_return content'] = array(
    'name' => 'edit own borrow_return content',
    'roles' => array(
      0 => 'administrator',
      1 => 'librarian',
    ),
    'module' => 'node',
  );

  return $permissions;
}
