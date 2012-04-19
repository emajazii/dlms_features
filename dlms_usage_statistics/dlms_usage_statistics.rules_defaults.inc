<?php
/**
 * @file
 * dlms_usage_statistics.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function dlms_usage_statistics_default_rules_configuration() {
  $items = array();
  $items['rules_book_usage_stat_save_redirect'] = entity_import('rules_config', '{ "rules_book_usage_stat_save_redirect" : {
      "LABEL" : "Book usage stat save redirect",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "statistics" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert", "node_update" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "book_usage_statistics" : "book_usage_statistics" } }
          }
        }
      ],
      "DO" : [ { "redirect" : { "url" : "[site:url]\\/book-usage-statistics" } } ]
    }
  }');
  $items['rules_library_usage_stat_save_redirect_'] = entity_import('rules_config', '{ "rules_library_usage_stat_save_redirect_" : {
      "LABEL" : "Library usage stat save redirect ",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "statistics" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert", "node_update" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "readers_statistics" : "readers_statistics" } }
          }
        }
      ],
      "DO" : [ { "redirect" : { "url" : "[site:url]\\/readers-statistics" } } ]
    }
  }');
  return $items;
}
