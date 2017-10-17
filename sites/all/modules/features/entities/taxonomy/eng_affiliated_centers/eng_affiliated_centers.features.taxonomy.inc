<?php
/**
 * @file
 * eng_affiliated_centers.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function eng_affiliated_centers_taxonomy_default_vocabularies() {
  return array(
    'affiliated_center' => array(
      'name' => 'Affiliated centers',
      'machine_name' => 'affiliated_center',
      'description' => 'Affiliated centers',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -5,
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
