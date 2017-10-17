<?php
/**
 * @file
 * eng_programs.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function eng_programs_taxonomy_default_vocabularies() {
  return array(
    'interdisciplinary_programs' => array(
      'name' => 'Interdisciplinary programs',
      'machine_name' => 'interdisciplinary_programs',
      'description' => 'Interdisciplinary programs',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 2,
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
