<?php
/**
 * @file
 * dlms_usage_statistics.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dlms_usage_statistics_user_default_permissions() {
  $permissions = array();

  // Exported permission: create book_usage_statistics content
  $permissions['create book_usage_statistics content'] = array(
    'name' => 'create book_usage_statistics content',
    'roles' => array(
      0 => 'administrator',
      1 => 'librarian',
    ),
    'module' => 'node',
  );

  // Exported permission: create readers_statistics content
  $permissions['create readers_statistics content'] = array(
    'name' => 'create readers_statistics content',
    'roles' => array(
      0 => 'administrator',
      1 => 'librarian',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any book_usage_statistics content
  $permissions['delete any book_usage_statistics content'] = array(
    'name' => 'delete any book_usage_statistics content',
    'roles' => array(
      0 => 'administrator',
      1 => 'librarian',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any readers_statistics content
  $permissions['delete any readers_statistics content'] = array(
    'name' => 'delete any readers_statistics content',
    'roles' => array(
      0 => 'administrator',
      1 => 'librarian',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own book_usage_statistics content
  $permissions['delete own book_usage_statistics content'] = array(
    'name' => 'delete own book_usage_statistics content',
    'roles' => array(
      0 => 'administrator',
      1 => 'librarian',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own readers_statistics content
  $permissions['delete own readers_statistics content'] = array(
    'name' => 'delete own readers_statistics content',
    'roles' => array(
      0 => 'administrator',
      1 => 'librarian',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any book_usage_statistics content
  $permissions['edit any book_usage_statistics content'] = array(
    'name' => 'edit any book_usage_statistics content',
    'roles' => array(
      0 => 'administrator',
      1 => 'librarian',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any readers_statistics content
  $permissions['edit any readers_statistics content'] = array(
    'name' => 'edit any readers_statistics content',
    'roles' => array(
      0 => 'administrator',
      1 => 'librarian',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own book_usage_statistics content
  $permissions['edit own book_usage_statistics content'] = array(
    'name' => 'edit own book_usage_statistics content',
    'roles' => array(
      0 => 'administrator',
      1 => 'librarian',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own readers_statistics content
  $permissions['edit own readers_statistics content'] = array(
    'name' => 'edit own readers_statistics content',
    'roles' => array(
      0 => 'administrator',
      1 => 'librarian',
    ),
    'module' => 'node',
  );

  return $permissions;
}
