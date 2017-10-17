<?php
/**
 * @file
 * eng_councils.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function eng_councils_taxonomy_default_vocabularies() {
  return array(
    'council' => array(
      'name' => 'Councils',
      'machine_name' => 'council',
      'description' => 'Councils',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -3,
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
