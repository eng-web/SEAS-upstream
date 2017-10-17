<?php
/**
 * @file
 * eng_news_tag.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function eng_news_tag_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_engineering_news_type_pattern';
  $strongarm->value = 'news/[term:name]';
  $export['pathauto_taxonomy_term_engineering_news_type_pattern'] = $strongarm;

  return $export;
}
