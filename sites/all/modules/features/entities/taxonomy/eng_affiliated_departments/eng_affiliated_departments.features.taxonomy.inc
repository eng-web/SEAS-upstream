<?php
/**
 * @file
 * eng_affiliated_departments.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function eng_affiliated_departments_taxonomy_default_vocabularies() {
  return array(
    'affiliated_department' => array(
      'name' => 'Affiliated departments',
      'machine_name' => 'affiliated_department',
      'description' => 'Affiliated departments',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -6,
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
