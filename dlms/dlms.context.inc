<?php
/**
 * @file
 * dlms.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function dlms_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = 'on all pages of the site';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'dlms-dlms_user_message' => array(
          'module' => 'dlms',
          'delta' => 'dlms_user_message',
          'region' => 'user_first',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'user_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('on all pages of the site');
  $export['sitewide'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user_borrowed_books';
  $context->description = '';
  $context->tag = 'books';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'all',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-borrowed_books-block_1' => array(
          'module' => 'views',
          'delta' => 'borrowed_books-block_1',
          'region' => 'sidebar_first',
          'weight' => '-22',
        ),
        'views-overdue_books-block_3' => array(
          'module' => 'views',
          'delta' => 'overdue_books-block_3',
          'region' => 'sidebar_first',
          'weight' => '-21',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'user_page',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('books');
  $export['user_borrowed_books'] = $context;

  return $export;
}
