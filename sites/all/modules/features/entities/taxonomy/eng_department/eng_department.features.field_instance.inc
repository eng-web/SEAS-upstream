<?php
/**
 * @file
 * eng_department.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function eng_department_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'taxonomy_term-engineering_departments-field_department_link'.
  $field_instances['taxonomy_term-engineering_departments-field_department_link'] = array(
    'bundle' => 'engineering_departments',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_department_link',
    'label' => 'Department link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-engineering_departments-field_dept_advisory_council_view'.
  $field_instances['taxonomy_term-engineering_departments-field_dept_advisory_council_view'] = array(
    'bundle' => 'engineering_departments',
    'default_value' => array(
      0 => array(
        'vname' => 'department_center_impact_related_advisory_council_members|panel_pane_2',
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
        'weight' => 8,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_dept_advisory_council_view',
    'label' => 'Advisory Council view',
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
        'department_center_impact_related_advisory_council_members' => 'department_center_impact_related_advisory_council_members',
        'departments' => 0,
        'departments_list_block' => 0,
        'eac' => 0,
        'faculty_xml_export' => 0,
        'feeds_defaults_feed_items' => 0,
        'feeds_log' => 0,
        'field_collection_view' => 0,
        'four_key_areas_block' => 0,
        'json_export' => 0,
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
        'taxonomy_faculty_affiliations' => 0,
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
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-engineering_departments-field_dept_aff_fac_view'.
  $field_instances['taxonomy_term-engineering_departments-field_dept_aff_fac_view'] = array(
    'bundle' => 'engineering_departments',
    'default_value' => array(
      0 => array(
        'vname' => 'taxonomy_faculty_affiliations|panel_pane_1',
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
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_dept_aff_fac_view',
    'label' => 'Affiliated faculty view',
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
        'json_export' => 0,
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
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-engineering_departments-field_dept_center_view'.
  $field_instances['taxonomy_term-engineering_departments-field_dept_center_view'] = array(
    'bundle' => 'engineering_departments',
    'default_value' => array(
      0 => array(
        'vname' => 'taxonomy_department_affiliations|center_affiliations',
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
    'field_name' => 'field_dept_center_view',
    'label' => 'Center view',
    'required' => 0,
    'settings' => array(
      'allowed_views' => array(
        'admin_views_comment' => 0,
        'admin_views_node' => 0,
        'admin_views_user' => 0,
        'advisory_council_export' => 0,
        'center_affiliations' => 0,
        'centers' => 0,
        'content_type_faculty_affiliations' => 0,
        'department_affiliations' => 0,
        'departments' => 0,
        'departments_list_block' => 0,
        'eac' => 0,
        'faculty_news' => 0,
        'faculty_primary_affiliations' => 0,
        'faculty_topic_affiliations' => 0,
        'faculty_xml_export' => 0,
        'feeds_defaults_feed_items' => 0,
        'feeds_log' => 0,
        'field_collection_view' => 0,
        'four_key_areas_block' => 0,
        'news' => 0,
        'news_bulk_update' => 0,
        'news_related_people' => 0,
        'news_related_topics' => 0,
        'research' => 0,
        'research_directory' => 0,
        'scald_atoms' => 0,
        'scald_library' => 0,
        'search' => 0,
        'staff_xml_export' => 0,
        'taxonomy_center_affiliations' => 0,
        'taxonomy_department_affiliations' => 'taxonomy_department_affiliations',
        'taxonomy_faculty_affiliations' => 0,
        'taxonomy_news_affiliations' => 0,
        'taxonomy_topic_affiliations' => 0,
        'topic_affiliations' => 0,
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
  // 'taxonomy_term-engineering_departments-field_dept_faculty_view'.
  $field_instances['taxonomy_term-engineering_departments-field_dept_faculty_view'] = array(
    'bundle' => 'engineering_departments',
    'default_value' => array(
      0 => array(
        'vname' => 'taxonomy_faculty_affiliations|fac_dept',
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
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_dept_faculty_view',
    'label' => 'Core faculty view',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-engineering_departments-field_dept_news_view'.
  $field_instances['taxonomy_term-engineering_departments-field_dept_news_view'] = array(
    'bundle' => 'engineering_departments',
    'default_value' => array(
      0 => array(
        'vname' => 'taxonomy_news_affiliations|dept_related_news',
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
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_dept_news_view',
    'label' => 'News view',
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
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-engineering_departments-field_dept_topic_view'.
  $field_instances['taxonomy_term-engineering_departments-field_dept_topic_view'] = array(
    'bundle' => 'engineering_departments',
    'default_value' => array(
      0 => array(
        'vname' => 'taxonomy_department_affiliations|dept_impact_affiliation',
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
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_dept_topic_view',
    'label' => 'Impact view',
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
        'taxonomy_department_affiliations' => 'taxonomy_department_affiliations',
        'taxonomy_faculty_affiliations' => 0,
        'taxonomy_news_affiliations' => 0,
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
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-engineering_departments-field_eng_center'.
  $field_instances['taxonomy_term-engineering_departments-field_eng_center'] = array(
    'bundle' => 'engineering_departments',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_eng_center',
    'label' => 'Center affiliations',
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
  // 'taxonomy_term-engineering_departments-field_hero_img'.
  $field_instances['taxonomy_term-engineering_departments-field_hero_img'] = array(
    'bundle' => 'engineering_departments',
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
        'weight' => 11,
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
      'max_filesize' => '400kb',
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
  // 'taxonomy_term-engineering_departments-field_related_events_view'.
  $field_instances['taxonomy_term-engineering_departments-field_related_events_view'] = array(
    'bundle' => 'engineering_departments',
    'default_value' => array(
      0 => array(
        'vname' => 'eng_events_related_departments_centers_and_impact|dept_related_events',
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
        'weight' => 9,
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
        'core_search' => 0,
        'department_center_impact_related_advisory_council_members' => 0,
        'departments' => 0,
        'departments_list_block' => 0,
        'eac' => 0,
        'eng_department_and_center_related_jobs' => 0,
        'eng_event_api' => 0,
        'eng_events_related_departments_centers_and_impact' => 0,
        'eng_jobs' => 0,
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
        'taxonomy_news_affiliations' => 0,
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
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-engineering_departments-field_topics'.
  $field_instances['taxonomy_term-engineering_departments-field_topics'] = array(
    'bundle' => 'engineering_departments',
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
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_topics',
    'label' => 'Areas of impact',
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
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Advisory Council view');
  t('Affiliated faculty view');
  t('Areas of impact');
  t('Associated Events');
  t('Center affiliations');
  t('Center view');
  t('Core faculty view');
  t('Department link');
  t('Hero image');
  t('Impact view');
  t('News view');

  return $field_instances;
}
