<?php
/**
 * @file
 * eng_student_status.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function eng_student_status_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_student_status_pattern';
  $strongarm->value = 'students/[term:name]';
  $export['pathauto_taxonomy_term_student_status_pattern'] = $strongarm;

  return $export;
}
