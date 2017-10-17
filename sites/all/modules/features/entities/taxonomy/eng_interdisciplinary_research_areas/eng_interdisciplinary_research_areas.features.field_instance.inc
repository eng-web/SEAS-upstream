<?php
/**
 * @file
 * eng_interdisciplinary_research_areas.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function eng_interdisciplinary_research_areas_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'taxonomy_term-engineering_interdisciplinary_research-field_hero_img'.
  $field_instances['taxonomy_term-engineering_interdisciplinary_research-field_hero_img'] = array(
    'bundle' => 'engineering_interdisciplinary_research',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'featured_image',
        ),
        'type' => 'image',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_hero_img',
    'label' => 'Featured image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '850kb',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-engineering_interdisciplinary_research-field_interdisciplinary_units'.
  $field_instances['taxonomy_term-engineering_interdisciplinary_research-field_interdisciplinary_units'] = array(
    'bundle' => 'engineering_interdisciplinary_research',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_interdisciplinary_units',
    'label' => 'Interdisciplinary affiliations',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-engineering_interdisciplinary_research-field_research_related_faculty'.
  $field_instances['taxonomy_term-engineering_interdisciplinary_research-field_research_related_faculty'] = array(
    'bundle' => 'engineering_interdisciplinary_research',
    'default_value' => array(
      0 => array(
        'vname' => 'taxonomy_faculty_affiliations|fac_research_affiliations',
        'vargs' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'viewfield',
        'settings' => array(),
        'type' => 'viewfield_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_research_related_faculty',
    'label' => 'Related faculty',
    'required' => 0,
    'settings' => array(
      'allowed_views' => array(
        'admin_views_comment' => 0,
        'admin_views_node' => 0,
        'admin_views_user' => 0,
        'advisory_council_export' => 0,
        'body_to_paragraph' => 0,
        'centers' => 0,
        'content_type_faculty_affiliations' => 0,
        'content_type_faculty_news' => 0,
        'core_search' => 0,
        'department_center_impact_related_advisory_council_members' => 0,
        'departments' => 0,
        'departments_list_block' => 0,
        'eac' => 0,
        'eng_department_and_center_related_jobs' => 0,
        'eng_event_api' => 0,
        'eng_events_related_departments_centers_and_impact' => 0,
        'eng_jobs' => 0,
        'eng_tweet_feed' => 0,
        'faculty_xml_export' => 0,
        'feeds_defaults_feed_items' => 0,
        'feeds_log' => 0,
        'four_key_areas_block' => 0,
        'json_export' => 0,
        'news_bulk_update' => 0,
        'news_paragraphs' => 0,
        'research' => 0,
        'research_directory' => 0,
        'rules_scheduler' => 0,
        'scald_atoms' => 0,
        'scald_library' => 0,
        'search' => 0,
        'staff_xml_export' => 0,
        'steve_administration_nodes' => 0,
        'taxonomy_center_affiliations' => 0,
        'taxonomy_department_affiliations' => 0,
        'taxonomy_faculty_affiliations' => 'taxonomy_faculty_affiliations',
        'taxonomy_news_affiliations' => 0,
        'taxonomy_topic_affiliations' => 0,
        'timeline_event_api' => 0,
        'workbench_current_user' => 0,
        'workbench_edited' => 0,
        'workbench_recent_content' => 0,
      ),
      'force_default' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'viewfield',
      'settings' => array(),
      'type' => 'viewfield_select',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Featured image');
  t('Interdisciplinary affiliations');
  t('Related faculty');

  return $field_instances;
}
