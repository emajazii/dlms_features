<?php
/**
 * @file
 * dlms_newspaper.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function dlms_newspaper_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_newspaper';
  $strongarm->value = '1';
  $export['ant_newspaper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_newspaper';
  $strongarm->value = '[node:field_newspaper_title] [node:field_newspaper_publication_date]';
  $export['ant_pattern_newspaper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_newspaper';
  $strongarm->value = 0;
  $export['comment_anonymous_newspaper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_newspaper';
  $strongarm->value = 1;
  $export['comment_default_mode_newspaper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_newspaper';
  $strongarm->value = '50';
  $export['comment_default_per_page_newspaper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_newspaper';
  $strongarm->value = 1;
  $export['comment_form_location_newspaper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_newspaper';
  $strongarm->value = '0';
  $export['comment_newspaper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_newspaper';
  $strongarm->value = '1';
  $export['comment_preview_newspaper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_newspaper';
  $strongarm->value = 1;
  $export['comment_subject_field_newspaper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_newspaper';
  $strongarm->value = array();
  $export['menu_options_newspaper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_newspaper';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_newspaper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nfs_author_information_newspaper';
  $strongarm->value = '1';
  $export['nfs_author_information_newspaper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nfs_cancel_newspaper';
  $strongarm->value = array(
    0 => 'nfs_cancel_status',
  );
  $export['nfs_cancel_newspaper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nfs_comments_newspaper';
  $strongarm->value = '1';
  $export['nfs_comments_newspaper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nfs_hide_node_title_newspaper';
  $strongarm->value = '1';
  $export['nfs_hide_node_title_newspaper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nfs_inputformat_newspaper';
  $strongarm->value = '1';
  $export['nfs_inputformat_newspaper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nfs_path_newspaper';
  $strongarm->value = '1';
  $export['nfs_path_newspaper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nfs_publishingoptions_newspaper';
  $strongarm->value = '1';
  $export['nfs_publishingoptions_newspaper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nfs_revisionlog_newspaper';
  $strongarm->value = '2';
  $export['nfs_revisionlog_newspaper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nfs_submit_newspaper';
  $strongarm->value = 'Submit';
  $export['nfs_submit_newspaper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformsettings_newspaper';
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
    'nfs_hide_node_title' => '1',
    'nfs_title_create' => 'Create !node_type',
    'nfs_title_edit' => '!node_title',
  );
  $export['nodeformsettings_newspaper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_newspaper';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_newspaper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_newspaper';
  $strongarm->value = '0';
  $export['node_preview_newspaper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_newspaper';
  $strongarm->value = 0;
  $export['node_submitted_newspaper'] = $strongarm;

  return $export;
}
