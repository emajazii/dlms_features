<?php
/**
 * @file
 * dlms_newspaper.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function dlms_newspaper_taxonomy_default_vocabularies() {
  return array(
    'newspaper' => array(
      'name' => 'Newspaper',
      'machine_name' => 'newspaper',
      'description' => 'listing of newspapers',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
