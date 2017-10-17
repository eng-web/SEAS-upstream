<?php
/**
 * @file
 * eng_tag.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function eng_tag_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'School of Engineering and Applied Science',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'f39b8107-b925-46cd-adf5-19feceb1fac4',
    'vocabulary_machine_name' => 'tags',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'tags/school-engineering-and-applied-science',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
