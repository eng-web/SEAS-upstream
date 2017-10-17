<?php
/**
 * @file
 * eng_event_departmental_feed.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function eng_event_departmental_feed_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'cs_events-jsonpath_parser_12-default_value';
  $feeds_tamper->importer = 'cs_events';
  $feeds_tamper->source = 'jsonpath_parser:12';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'Keller Center for Innovation in Engineering Education',
    'only_if_empty' => 0,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set value or default value';
  $export['cs_events-jsonpath_parser_12-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'ee_events-jsonpath_parser_10-rewrite';
  $feeds_tamper->importer = 'ee_events';
  $feeds_tamper->source = 'jsonpath_parser:10';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'ele-[jsonpath_parser:10]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['ee_events-jsonpath_parser_10-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'ee_events-jsonpath_parser_12-default_value';
  $feeds_tamper->importer = 'ee_events';
  $feeds_tamper->source = 'jsonpath_parser:12';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'Electrical Engineering',
    'only_if_empty' => 0,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set value or default value';
  $export['ee_events-jsonpath_parser_12-default_value'] = $feeds_tamper;

  return $export;
}
