<?php
/**
 * @file
 * eng_committees.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function eng_committees_taxonomy_default_vocabularies() {
  return array(
    'committees' => array(
      'name' => 'Committees',
      'machine_name' => 'committees',
      'description' => 'Committees',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -4,
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
