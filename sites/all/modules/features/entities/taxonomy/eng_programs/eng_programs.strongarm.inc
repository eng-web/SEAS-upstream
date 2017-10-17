<?php
/**
 * @file
 * eng_programs.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function eng_programs_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_interdisciplinary_programs_pattern';
  $strongarm->value = 'affiliate-programs/[term:name]';
  $export['pathauto_taxonomy_term_interdisciplinary_programs_pattern'] = $strongarm;

  return $export;
}
