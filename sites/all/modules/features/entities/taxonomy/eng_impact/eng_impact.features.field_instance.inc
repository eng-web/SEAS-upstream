<?php
/**
 * @file
 * eng_impact.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function eng_impact_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'taxonomy_term-engineering_impact-field_eng_center'.
  $field_instances['taxonomy_term-engineering_impact-field_eng_center'] = array(
    'bundle' => 'engineering_impact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'token' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_eng_center',
    'label' => 'Centers',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-engineering_impact-field_eng_department'.
  $field_instances['taxonomy_term-engineering_impact-field_eng_department'] = array(
    'bundle' => 'engineering_impact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'token' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_eng_department',
    'label' => 'Departments',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-engineering_impact-field_faculty_research_spec'.
  $field_instances['taxonomy_term-engineering_impact-field_faculty_research_spec'] = array(
    'bundle' => 'engineering_impact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'token' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_faculty_research_spec',
    'label' => 'Related faculty research specialties',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete_tags',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'taxonomy_term-engineering_impact-field_hero_img'.
  $field_instances['taxonomy_term-engineering_impact-field_hero_img'] = array(
    'bundle' => 'engineering_impact',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_hero_img',
    'label' => 'Hero image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '700ikb',
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
  // 'taxonomy_term-engineering_impact-field_impact_center_view'.
  $field_instances['taxonomy_term-engineering_impact-field_impact_center_view'] = array(
    'bundle' => 'engineering_impact',
    'default_value' => array(
      0 => array(
        'vname' => 'taxonomy_topic_affiliations|impact_related_ctr',
        'vargs' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'viewfield',
        'settings' => array(),
        'type' => 'viewfield_default',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_impact_center_view',
    'label' => 'Center',
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
        'taxonomy_faculty_affiliations' => 0,
        'taxonomy_news_affiliations' => 0,
        'taxonomy_topic_affiliations' => 'taxonomy_topic_affiliations',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-engineering_impact-field_impact_department_view'.
  $field_instances['taxonomy_term-engineering_impact-field_impact_department_view'] = array(
    'bundle' => 'engineering_impact',
    'default_value' => array(
      0 => array(
        'vname' => 'taxonomy_topic_affiliations|impact_related_dept',
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
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_impact_department_view',
    'label' => 'Department',
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
        'taxonomy_faculty_affiliations' => 0,
        'taxonomy_news_affiliations' => 0,
        'taxonomy_topic_affiliations' => 'taxonomy_topic_affiliations',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-engineering_impact-field_related_events_view'.
  $field_instances['taxonomy_term-engineering_impact-field_related_events_view'] = array(
    'bundle' => 'engineering_impact',
    'default_value' => array(
      0 => array(
        'vname' => 'eng_events_related_departments_centers_and_impact|impact_related_events',
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
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'token' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_related_events_view',
    'label' => 'Associated Events',
    'required' => 0,
    'settings' => array(
      'allowed_views' => array(
        'admin_views_comment' => 0,
        'admin_views_node' => 0,
        'admin_views_user' => 0,
        'advisory_council_export' => 0,
        'centers' => 0,
        'content_type_faculty_affiliations' => 0,
        'content_type_faculty_news' => 0,
        'department_center_impact_related_advisory_council_members' => 0,
        'departments' => 0,
        'departments_list_block' => 0,
        'eac' => 0,
        'eng_department_and_center_related_jobs' => 0,
        'eng_event_api' => 0,
        'eng_events_related_departments_centers_and_impact' => 'eng_events_related_departments_centers_and_impact',
        'eng_jobs' => 0,
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
        'taxonomy_faculty_affiliations' => 0,
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
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-engineering_impact-field_related_news_view'.
  $field_instances['taxonomy_term-engineering_impact-field_related_news_view'] = array(
    'bundle' => 'engineering_impact',
    'default_value' => array(
      0 => array(
        'vname' => 'taxonomy_news_affiliations|impact_related_news',
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
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'token' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_related_news_view',
    'label' => 'Related news view',
    'required' => 0,
    'settings' => array(
      'allowed_views' => array(
        'admin_views_comment' => 0,
        'admin_views_node' => 0,
        'admin_views_user' => 0,
        'advisory_council_export' => 0,
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
        'impact_news_events_and_people' => 0,
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
        'taxonomy_faculty_affiliations' => 0,
        'taxonomy_news_affiliations' => 'taxonomy_news_affiliations',
        'taxonomy_topic_affiliations' => 0,
        'test_search' => 0,
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
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-engineering_impact-field_topic_faculty_view'.
  $field_instances['taxonomy_term-engineering_impact-field_topic_faculty_view'] = array(
    'bundle' => 'engineering_impact',
    'default_value' => array(
      0 => array(
        'vname' => 'taxonomy_faculty_affiliations|fac_impact_affiliations',
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
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'token' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_topic_faculty_view',
    'label' => 'Faculty view',
    'required' => 0,
    'settings' => array(
      'allowed_views' => array(
        'admin_views_comment' => 0,
        'admin_views_node' => 0,
        'admin_views_user' => 0,
        'advisory_council_export' => 0,
        'centers' => 0,
        'content_type_faculty_affiliations' => 0,
        'content_type_faculty_news' => 0,
        'departments' => 0,
        'departments_list_block' => 0,
        'eac' => 0,
        'faculty_xml_export' => 0,
        'feeds_defaults_feed_items' => 0,
        'feeds_log' => 0,
        'field_collection_view' => 0,
        'four_key_areas_block' => 0,
        'news' => 0,
        'news_bulk_update' => 0,
        'research' => 0,
        'research_directory' => 0,
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
      ),
      'force_default' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'viewfield',
      'settings' => array(),
      'type' => 'viewfield_select',
      'weight' => 8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Associated Events');
  t('Center');
  t('Centers');
  t('Department');
  t('Departments');
  t('Faculty view');
  t('Hero image');
  t('Related faculty research specialties');
  t('Related news view');

  return $field_instances;
}
