<?php
/**
 * @file
 * dlms_books.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function dlms_books_default_rules_configuration() {
  $items = array();
  $items['rules_increase_the_qty_available_of_a_returned_book_by_one'] = entity_import('rules_config', '{ "rules_increase_the_qty_available_of_a_returned_book_by_one" : {
      "LABEL" : "increase the qty available of a returned book by one",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_update" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "borrow_return" : "borrow_return" } }
          }
        },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_book_title" } },
        { "entity_has_field" : {
            "entity" : [ "node:field-book-title" ],
            "field" : "field_book_available"
          }
        },
        { "data_is" : { "data" : [ "node:field-book-status" ], "value" : "returned" } }
      ],
      "DO" : [
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "node:field-book-title:field-book-available" ],
              "op" : "+",
              "input_2" : "1"
            },
            "PROVIDE" : { "result" : { "result" : "Calculation result" } }
          }
        },
        { "data_set" : {
            "data" : [ "node:field-book-title:field-book-available" ],
            "value" : [ "result" ]
          }
        },
        { "data_set" : { "data" : [ "node:field-return-date" ], "value" : "now" } },
        { "node_unpublish" : { "node" : [ "node" ] } }
      ]
    }
  }');
  $items['rules_initialize_book_quantity_available'] = entity_import('rules_config', '{ "rules_initialize_book_quantity_available" : {
      "LABEL" : "Initialize book quantity available",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "book" : "book" } } } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "node:field-book-available" ],
            "value" : [ "node:field-book-quantity" ]
          }
        },
        { "drupal_message" : { "message" : "We have [node:field-book-available] [node:title] available" } }
      ]
    }
  }');
  $items['rules_reduce_the_qty_available_of_a_borrowed_book_by_one'] = entity_import('rules_config', '{ "rules_reduce_the_qty_available_of_a_borrowed_book_by_one" : {
      "LABEL" : "reduce the qty available of a borrowed book by one",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "borrow_return" : "borrow_return" } }
          }
        },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_book_title" } },
        { "entity_has_field" : {
            "entity" : [ "node:field-book-title" ],
            "field" : "field_book_available"
          }
        }
      ],
      "DO" : [
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "node:field-book-title:field-book-available" ],
              "op" : "-",
              "input_2" : "1"
            },
            "PROVIDE" : { "result" : { "result" : "Calculation result" } }
          }
        },
        { "data_set" : {
            "data" : [ "node:field-book-title:field-book-available" ],
            "value" : [ "result" ]
          }
        }
      ]
    }
  }');
  return $items;
}
