<?php
/**
 * @file
 * eng_student_status.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function eng_student_status_taxonomy_default_vocabularies() {
  return array(
    'student_status' => array(
      'name' => 'Student status',
      'machine_name' => 'student_status',
      'description' => 'Student status tags',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
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
