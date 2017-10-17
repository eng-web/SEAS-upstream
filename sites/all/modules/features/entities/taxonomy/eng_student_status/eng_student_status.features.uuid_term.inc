<?php
/**
 * @file
 * eng_student_status.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function eng_student_status_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Undergraduate',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b73740be-9f6a-4ea5-bba5-2cdc01c38e45',
    'vocabulary_machine_name' => 'student_status',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'students/undergraduate',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Postdoc',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b9a812f9-27de-4341-a308-91da3b1cde29',
    'vocabulary_machine_name' => 'student_status',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'students/postdoc',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Graduate',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c01d45ea-e93c-4ace-a034-d553356b02ec',
    'vocabulary_machine_name' => 'student_status',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'students/graduate',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
