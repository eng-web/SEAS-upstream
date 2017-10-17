<?php
/**
 * @file
 * eng_committees.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function eng_committees_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Program of Freshman Seminars',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '1e845ffa-b17a-41ec-af1c-60e2ffe1e18e',
    'vocabulary_machine_name' => 'committees',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'affiliate-committees/program-freshman-seminars',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Committee for Statistical Studies',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9bdb4f85-1cc9-478b-bd2b-705b3d11e1fe',
    'vocabulary_machine_name' => 'committees',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'affiliate-committees/committee-statistical-studies',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Princeton Writing Program',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e480b46b-f96c-4b59-a5e6-e9d2216c0924',
    'vocabulary_machine_name' => 'committees',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'affiliate-committees/princeton-writing-program',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
