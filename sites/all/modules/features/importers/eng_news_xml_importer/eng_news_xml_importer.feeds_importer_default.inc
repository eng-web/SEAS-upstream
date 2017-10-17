<?php
/**
 * @file
 * eng_news_xml_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function eng_news_xml_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'news';
  $feeds_importer->config = array(
    'name' => 'News',
    'description' => 'News importer',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsExXml',
      'config' => array(
        'use_tidy' => FALSE,
        'sources' => array(
          'id' => array(
            'name' => 'id',
            'value' => 'id',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '0',
          ),
          'title' => array(
            'name' => 'title',
            'value' => 'title',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '1',
          ),
          'author' => array(
            'name' => 'author',
            'value' => 'author',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '2',
          ),
          'published' => array(
            'name' => 'published',
            'value' => 'published',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '3',
          ),
          'image' => array(
            'name' => 'image',
            'value' => 'link[@rel="enclosure"]',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '4',
          ),
          'caption' => array(
            'name' => 'caption',
            'value' => 'link[@title=" "]',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '5',
          ),
          'summary' => array(
            'name' => 'summary',
            'value' => 'summary[@type="html"]',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '6',
          ),
          'content' => array(
            'name' => 'content',
            'value' => 'content[@type="html"]',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '7',
          ),
        ),
        'context' => array(
          'value' => '//entry',
        ),
        'display_errors' => 0,
        'source_encoding' => array(
          0 => 'auto',
        ),
        'debug_mode' => 0,
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
            'source' => 'id',
            'target' => 'nid',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'author',
            'target' => 'field_author:label',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'published',
            'target' => 'field_publish_date:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'image',
            'target' => 'field_featured_image_desktop',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'caption',
            'target' => 'field_featured_image_caption',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'summary',
            'target' => 'body:summary',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'content',
            'target' => 'body',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'published',
            'target' => 'created',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'delete',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'news',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['news'] = $feeds_importer;

  return $export;
}
