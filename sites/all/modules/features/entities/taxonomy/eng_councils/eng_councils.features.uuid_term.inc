<?php
/**
 * @file
 * eng_councils.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function eng_councils_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Princeton Entrepreneurship Council',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '2a82e96d-1037-4995-b1a5-abeb60381928',
    'vocabulary_machine_name' => 'council',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'affiliate-councils/princeton-entrepreneurship-council',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Council on Science and Technology',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '2f328c05-6fe7-4691-b246-843ba60868ad',
    'vocabulary_machine_name' => 'council',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'affiliate-councils/council-science-and-technology',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Council of the Humanities',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '54226716-f591-4a07-8e38-cad0d88da902',
    'vocabulary_machine_name' => 'council',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'affiliate-councils/council-humanities',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
