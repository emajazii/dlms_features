<?php
/**
 * @file
 * dlms.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function dlms_default_rules_configuration() {
  $items = array();
  $items['rules_add_another_item'] = entity_import('rules_config', '{ "rules_add_another_item" : {
      "LABEL" : "add another item",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "display link to add another item" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "NOT node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "borrow_return" : "borrow_return" } }
          }
        }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "\\u003Ca href=\\u0022[site:url]node\\/add\\/[node:content-type]\\u0022\\u003Eclick here \\u003C\\/a\\u003E to create another [node:content-type]" } }
      ]
    }
  }');
  $items['rules_login_redirect'] = entity_import('rules_config', '{ "rules_login_redirect" : {
      "LABEL" : "login redirect",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_login" ],
      "DO" : [ { "redirect" : { "url" : "\\u003Cfront\\u003E" } } ]
    }
  }');
  return $items;
}
