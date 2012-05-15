<?php
/**
 * @file
 * dlms_books.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function dlms_books_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_borrow_return';
  $strongarm->value = '1';
  $export['ant_borrow_return'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_borrow_return';
  $strongarm->value = '[node:field-book-title] borrowed by [node:field-borrower-name]';
  $export['ant_pattern_borrow_return'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_book';
  $strongarm->value = 0;
  $export['comment_anonymous_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_borrow_return';
  $strongarm->value = 0;
  $export['comment_anonymous_borrow_return'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_book';
  $strongarm->value = '0';
  $export['comment_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_borrow_return';
  $strongarm->value = '0';
  $export['comment_borrow_return'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_book';
  $strongarm->value = 1;
  $export['comment_default_mode_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_borrow_return';
  $strongarm->value = 1;
  $export['comment_default_mode_borrow_return'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_book';
  $strongarm->value = '50';
  $export['comment_default_per_page_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_borrow_return';
  $strongarm->value = '50';
  $export['comment_default_per_page_borrow_return'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_book';
  $strongarm->value = 1;
  $export['comment_form_location_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_borrow_return';
  $strongarm->value = 1;
  $export['comment_form_location_borrow_return'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_book';
  $strongarm->value = '1';
  $export['comment_preview_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_borrow_return';
  $strongarm->value = '1';
  $export['comment_preview_borrow_return'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_book';
  $strongarm->value = 1;
  $export['comment_subject_field_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_borrow_return';
  $strongarm->value = 1;
  $export['comment_subject_field_borrow_return'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_book';
  $strongarm->value = array();
  $export['menu_options_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_borrow_return';
  $strongarm->value = array();
  $export['menu_options_borrow_return'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_book';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_borrow_return';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_borrow_return'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nfs_author_information_book';
  $strongarm->value = '1';
  $export['nfs_author_information_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nfs_author_information_borrow_return';
  $strongarm->value = '1';
  $export['nfs_author_information_borrow_return'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nfs_cancel_book';
  $strongarm->value = array(
    0 => 'nfs_cancel_status',
  );
  $export['nfs_cancel_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nfs_cancel_borrow_return';
  $strongarm->value = array(
    0 => 'nfs_cancel_status',
  );
  $export['nfs_cancel_borrow_return'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nfs_comments_book';
  $strongarm->value = '1';
  $export['nfs_comments_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nfs_comments_borrow_return';
  $strongarm->value = '1';
  $export['nfs_comments_borrow_return'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nfs_inputformat_book';
  $strongarm->value = '1';
  $export['nfs_inputformat_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nfs_inputformat_borrow_return';
  $strongarm->value = '1';
  $export['nfs_inputformat_borrow_return'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nfs_publishingoptions_book';
  $strongarm->value = '1';
  $export['nfs_publishingoptions_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nfs_publishingoptions_borrow_return';
  $strongarm->value = '1';
  $export['nfs_publishingoptions_borrow_return'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nfs_revisionlog_book';
  $strongarm->value = '2';
  $export['nfs_revisionlog_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nfs_revisionlog_borrow_return';
  $strongarm->value = '2';
  $export['nfs_revisionlog_borrow_return'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nfs_submit_book';
  $strongarm->value = 'Submit';
  $export['nfs_submit_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nfs_title_edit_borrow_return';
  $strongarm->value = '!node_title';
  $export['nfs_title_edit_borrow_return'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformsettings_book';
  $strongarm->value = array(
    'nfs_inputformat' => '1',
    'nfs_revisionlog' => '2',
    'nfs_author_information' => '1',
    'nfs_path' => '1',
    'nfs_publishingoptions' => '1',
    'nfs_comments' => '1',
    'nfs_cancel' => array(
      'nfs_cancel_status' => '1',
      'nfs_cancel_behaviour' => '0',
    ),
    'nfs_submit' => 'Submit',
    'nfs_hide_node_title' => '0',
    'nfs_title_create' => 'Create !node_type',
    'nfs_title_edit' => '!node_title',
  );
  $export['nodeformsettings_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformsettings_borrow_return';
  $strongarm->value = array(
    'nfs_inputformat' => '1',
    'nfs_revisionlog' => '2',
    'nfs_author_information' => '1',
    'nfs_path' => '1',
    'nfs_publishingoptions' => '1',
    'nfs_comments' => '1',
    'nfs_cancel' => array(
      'nfs_cancel_status' => '1',
      'nfs_cancel_behaviour' => '0',
    ),
    'nfs_submit' => 'Save',
    'nfs_hide_node_title' => '0',
    'nfs_title_create' => 'Create !node_type',
    'nfs_title_edit' => '!node_title',
  );
  $export['nodeformsettings_borrow_return'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_book';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_borrow_return';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_borrow_return'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_book';
  $strongarm->value = '0';
  $export['node_preview_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_borrow_return';
  $strongarm->value = '0';
  $export['node_preview_borrow_return'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_book';
  $strongarm->value = 0;
  $export['node_submitted_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_borrow_return';
  $strongarm->value = 0;
  $export['node_submitted_borrow_return'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_book_pattern';
  $strongarm->value = '';
  $export['pathauto_node_book_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_book';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_borrow_return';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_borrow_return'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'var_book';
  $strongarm->value = 'book';
  $export['var_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'var_borrow_return';
  $strongarm->value = 'borrow_return';
  $export['var_borrow_return'] = $strongarm;

  return $export;
}
