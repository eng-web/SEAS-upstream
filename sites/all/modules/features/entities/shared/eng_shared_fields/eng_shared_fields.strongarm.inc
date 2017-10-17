<?php
/**
 * @file
 * eng_shared_fields.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function eng_shared_fields_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_scald_authors_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_scald_authors_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_scald_tags_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_scald_tags_pattern'] = $strongarm;

  return $export;
}
