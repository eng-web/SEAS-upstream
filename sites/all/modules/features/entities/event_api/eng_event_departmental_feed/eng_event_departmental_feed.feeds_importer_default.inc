<?php
/**
 * @file
 * eng_event_departmental_feed.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function eng_event_departmental_feed_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'cs_events';
  $feeds_importer->config = array(
    'name' => 'KC Events',
    'description' => 'Keller Center event importer',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 1,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
        'request_timeout' => '',
        'auto_scheme' => 'https://kellercenter.princeton.edu/api/events',
        'accept_invalid_cert' => 0,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsJSONPathParser',
      'config' => array(
        'context' => '$.data.*',
        'sources' => array(
          'jsonpath_parser:10' => 'id',
          'jsonpath_parser:1' => 'attributes.title',
          'jsonpath_parser:2' => 'attributes.description',
          'jsonpath_parser:3' => 'attributes.eventdate',
          'jsonpath_parser:4' => 'attributes.location',
          'jsonpath_parser:5' => '',
          'jsonpath_parser:6' => '',
          'jsonpath_parser:8' => 'attributes.eventURL',
          'jsonpath_parser:9' => '',
          'jsonpath_parser:12' => '',
        ),
        'debug' => array(
          'options' => array(
            'context' => 0,
            'jsonpath_parser:10' => 0,
            'jsonpath_parser:1' => 0,
            'jsonpath_parser:2' => 0,
            'jsonpath_parser:3' => 0,
            'jsonpath_parser:4' => 0,
            'jsonpath_parser:5' => 0,
            'jsonpath_parser:6' => 0,
            'jsonpath_parser:8' => 0,
            'jsonpath_parser:9' => 0,
            'jsonpath_parser:12' => 0,
          ),
        ),
        'allow_override' => 0,
        'convert_four_byte' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '844',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'jsonpath_parser:10',
            'target' => 'guid',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'jsonpath_parser:1',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'jsonpath_parser:2',
            'target' => 'body',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'jsonpath_parser:3',
            'target' => 'field_event_time:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'jsonpath_parser:4',
            'target' => 'field_event_location:title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'jsonpath_parser:5',
            'target' => 'field_event_type',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'jsonpath_parser:6',
            'target' => 'field_event_speaker',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'jsonpath_parser:8',
            'target' => 'field_event_website:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'jsonpath_parser:9',
            'target' => 'field_event_website:title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'jsonpath_parser:12',
            'target' => 'field_event_center:label',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'eng_events',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '3600',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['cs_events'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'ee_events';
  $feeds_importer->config = array(
    'name' => 'EE events',
    'description' => 'EE Event JSON importer',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 1,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
        'request_timeout' => '',
        'auto_scheme' => 'http://ee.princeton.edu/events/feed.json',
        'accept_invalid_cert' => 0,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsJSONPathParser',
      'config' => array(
        'context' => '$.node.*',
        'sources' => array(
          'jsonpath_parser:10' => 'guid',
          'jsonpath_parser:1' => 'title',
          'jsonpath_parser:2' => 'abstract',
          'jsonpath_parser:3' => 'start-date',
          'jsonpath_parser:4' => 'location',
          'jsonpath_parser:5' => 'type',
          'jsonpath_parser:6' => 'speaker',
          'jsonpath_parser:8' => 'path',
          'jsonpath_parser:9' => '',
          'jsonpath_parser:12' => '',
        ),
        'debug' => array(
          'options' => array(
            'context' => 0,
            'jsonpath_parser:10' => 0,
            'jsonpath_parser:1' => 0,
            'jsonpath_parser:2' => 0,
            'jsonpath_parser:3' => 0,
            'jsonpath_parser:4' => 0,
            'jsonpath_parser:5' => 0,
            'jsonpath_parser:6' => 0,
            'jsonpath_parser:8' => 0,
            'jsonpath_parser:9' => 0,
            'jsonpath_parser:12' => 0,
          ),
        ),
        'allow_override' => 0,
        'convert_four_byte' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '4',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'jsonpath_parser:10',
            'target' => 'guid',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'jsonpath_parser:1',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'jsonpath_parser:2',
            'target' => 'body',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'jsonpath_parser:3',
            'target' => 'field_event_time:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'jsonpath_parser:4',
            'target' => 'field_event_location:title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'jsonpath_parser:5',
            'target' => 'field_event_type',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'jsonpath_parser:6',
            'target' => 'field_event_speaker',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'jsonpath_parser:8',
            'target' => 'field_event_website:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'jsonpath_parser:9',
            'target' => 'field_event_website:title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'jsonpath_parser:12',
            'target' => 'field_event_department:label',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'eng_events',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '3600',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['ee_events'] = $feeds_importer;

  return $export;
}
