<?php
/**
 * @file
 * eng_interdisciplinary_research_areas.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function eng_interdisciplinary_research_areas_taxonomy_default_vocabularies() {
  return array(
    'engineering_interdisciplinary_research' => array(
      'name' => 'Interdisciplinary research',
      'machine_name' => 'engineering_interdisciplinary_research',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 3,
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
