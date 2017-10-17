<?php
/**
 * @file
 * eng_tv_displays_and_posters.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function eng_tv_displays_and_posters_taxonomy_default_vocabularies() {
  return array(
    'televisions' => array(
      'name' => 'Televisions',
      'machine_name' => 'televisions',
      'description' => 'Television displays',
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
