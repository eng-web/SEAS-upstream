<?php
/**
 * @file
 * eng_councils.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function eng_councils_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_council_pattern';
  $strongarm->value = 'affiliate-councils/[term:name]';
  $export['pathauto_taxonomy_term_council_pattern'] = $strongarm;

  return $export;
}
