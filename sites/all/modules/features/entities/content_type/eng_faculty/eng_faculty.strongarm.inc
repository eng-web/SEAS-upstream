<?php
/**
 * @file
 * eng_faculty.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function eng_faculty_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_faculty';
  $strongarm->value = '1';
  $export['auto_entitylabel_node_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_faculty';
  $strongarm->value = '[node:name-field-name:formatter-full]';
  $export['auto_entitylabel_pattern_node_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_faculty';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_node_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_faculty';
  $strongarm->value = 0;
  $export['comment_anonymous_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_faculty';
  $strongarm->value = 1;
  $export['comment_default_mode_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_faculty';
  $strongarm->value = '50';
  $export['comment_default_per_page_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_faculty';
  $strongarm->value = '0';
  $export['comment_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_faculty';
  $strongarm->value = 1;
  $export['comment_form_location_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_faculty';
  $strongarm->value = '1';
  $export['comment_preview_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_faculty';
  $strongarm->value = 1;
  $export['comment_subject_field_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__faculty';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '4',
        ),
        'redirect' => array(
          'weight' => '5',
        ),
        'metatags' => array(
          'weight' => '10',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_faculty';
  $strongarm->value = '0';
  $export['language_content_type_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_faculty';
  $strongarm->value = array();
  $export['menu_options_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_faculty';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformscols_field_placements_news_default';
  $strongarm->value = array(
    'additional_settings' => array(
      'region' => 'main',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => 'Vertical tabs',
      'hidden' => 0,
    ),
    'actions' => array(
      'region' => 'main',
      'weight' => '8',
      'has_required' => FALSE,
      'title' => 'Publish',
      'hidden' => 0,
    ),
    'field_old_category' => array(
      'region' => 'main',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'Old category',
      'hidden' => 1,
    ),
    'field_related_people_view' => array(
      'region' => 'main',
      'weight' => '12',
      'has_required' => FALSE,
      'title' => 'Related people view',
      'hidden' => 0,
    ),
    'field_related_centers_view' => array(
      'region' => 'main',
      'weight' => '13',
      'has_required' => FALSE,
      'title' => 'Related centers view',
      'hidden' => 0,
    ),
    'field_related_dept_view' => array(
      'region' => 'main',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => 'Related departments view',
      'hidden' => 0,
    ),
    'field_related_topics_view' => array(
      'region' => 'main',
      'weight' => '11',
      'has_required' => FALSE,
      'title' => 'Related topics view',
      'hidden' => 0,
    ),
    'group_affiliations' => array(
      'region' => 'main',
      'weight' => '10',
      'has_required' => FALSE,
      'title' => 'Affiliations (Field group)',
      'hidden' => 0,
    ),
    'group_content' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => FALSE,
      'title' => 'Story (Field group)',
      'hidden' => 0,
    ),
    'group_meta' => array(
      'region' => 'main',
      'weight' => '9',
      'has_required' => FALSE,
      'title' => 'Story meta (Field group)',
      'hidden' => 0,
    ),
    'group_hero_image_info' => array(
      'region' => 'main',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Hero image (Field group)',
      'hidden' => 0,
    ),
    'group_summary_content' => array(
      'region' => 'main',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => 'Summary and Content (Field group)',
      'hidden' => 0,
    ),
    'group_tags' => array(
      'region' => 'main',
      'weight' => '7',
      'has_required' => FALSE,
      'title' => 'Tags (Field group)',
      'hidden' => 0,
    ),
    'group_title_author_date' => array(
      'region' => 'main',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => 'Title, author, and date (Field group)',
      'hidden' => 0,
    ),
  );
  $export['nodeformscols_field_placements_news_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_faculty';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_faculty';
  $strongarm->value = '0';
  $export['node_preview_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_faculty';
  $strongarm->value = 0;
  $export['node_submitted_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_faculty_pattern';
  $strongarm->value = 'faculty/[node:name-field-name:formatter-full]';
  $export['pathauto_node_faculty_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_faculty';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '0.8',
  );
  $export['xmlsitemap_settings_node_faculty'] = $strongarm;

  return $export;
}
