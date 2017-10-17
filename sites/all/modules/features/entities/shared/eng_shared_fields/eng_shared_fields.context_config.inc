<?php
/**
 * @file
 * eng_shared_fields.context_config.inc
 */

/**
 * Implements hook_default_scald_context_config().
 */
function eng_shared_fields_default_scald_context_config() {
  $export = array();

  $context_config = new stdClass();
  $context_config->disabled = FALSE; /* Edit this to true to make a default context_config disabled initially */
  $context_config->api_version = 1;
  $context_config->context = 'wysiwyg_preview';
  $context_config->transcoder = array(
    'image' => array(
      '*' => 'style-medium',
    ),
    'video' => array(
      '*' => 'passthrough',
    ),
  );
  $context_config->player = array(
    'image' => array(
      '*' => 'default',
      'settings' => array(),
    ),
    'video' => array(
      '*' => 'default',
    ),
  );
  $context_config->data = array(
    'width' => '',
    'height' => '',
  );
  $export['wysiwyg_preview'] = $context_config;

  return $export;
}
