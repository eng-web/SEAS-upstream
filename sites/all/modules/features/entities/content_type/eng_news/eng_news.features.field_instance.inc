<?php
/**
 * @file
 * eng_news.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function eng_news_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-news-field_center'.
  $field_instances['node-news-field_center'] = array(
    'bundle' => 'news',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_center',
    'label' => 'Center affiliations',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'match_operator' => 'STARTS_WITH',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'options_buttons',
      'weight' => 56,
    ),
  );

  // Exported field_instance: 'node-news-field_department'.
  $field_instances['node-news-field_department'] = array(
    'bundle' => 'news',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_department',
    'label' => 'Department affiliations',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 55,
    ),
  );

  // Exported field_instance: 'node-news-field_hero_image_caption'.
  $field_instances['node-news-field_hero_image_caption'] = array(
    'bundle' => 'news',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'rss' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_hero_image_caption',
    'label' => 'Featured image caption',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-news-field_hero_img'.
  $field_instances['node-news-field_hero_img'] = array(
    'bundle' => 'news',
    'deleted' => 0,
    'description' => '<em>The image to be used for the top banner.</em>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image_url_formatter',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'featured_image',
          'url_type' => 0,
        ),
        'type' => 'image_url',
        'weight' => 15,
      ),
      'rss' => array(
        'label' => 'hidden',
        'module' => 'rss_enclosure',
        'settings' => array(
          'image_style' => '',
        ),
        'type' => 'rss_enclosure',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_hero_img',
    'label' => 'Featured image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '500kb',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'medium',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-news-field_hide_featured_image'.
  $field_instances['node-news-field_hide_featured_image'] = array(
    'bundle' => 'news',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Check this box to suppress the featured image.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 19,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_hide_featured_image',
    'label' => 'Hide featured image',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-news-field_news'.
  $field_instances['node-news-field_news'] = array(
    'bundle' => 'news',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 18,
      ),
      'rss' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_news',
    'label' => 'News content',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'body' => -1,
        'eng_paragraph_company' => -1,
        'eng_paragraph_degree' => -1,
        'news_author' => -1,
        'news_img_3col' => -1,
        'news_img_4col' => -1,
        'news_img_6col' => -1,
        'news_img_8col' => -1,
        'news_img_9col' => -1,
        'news_img_12col' => -1,
        'news_lede' => 'news_lede',
        'news_pull_quote_3col' => -1,
        'news_pull_quote_4col' => -1,
        'news_pull_quote_6col' => -1,
        'news_pull_quote_8col' => -1,
        'news_pull_quote_9col' => -1,
        'news_pull_quote_12col' => -1,
        'news_text_3col' => -1,
        'news_text_4col' => -1,
        'news_text_6col' => -1,
        'news_text_8col' => -1,
        'news_text_9col' => -1,
        'news_text_12col' => 'news_text_12col',
        'news_video_3col' => -1,
        'news_video_4col' => -1,
        'news_video_6col' => -1,
        'news_video_8col' => -1,
        'news_video_9col' => -1,
        'news_video_12col' => -1,
        'page_img_3col' => -1,
        'page_img_4col' => -1,
        'page_img_6col' => -1,
        'page_img_8col' => -1,
        'page_img_9col' => -1,
        'page_img_12col' => -1,
        'page_text_3col' => -1,
        'page_text_4col' => -1,
        'page_text_6col' => -1,
        'page_text_8col' => -1,
        'page_text_9col' => -1,
        'page_text_12col' => -1,
        'page_video_3col' => -1,
        'page_video_4col' => -1,
        'page_video_6col' => -1,
        'page_video_8col' => -1,
        'page_video_9col' => -1,
        'page_video_12col' => -1,
      ),
      'bundle_weights' => array(
        'body' => -94,
        'eng_paragraph_company' => -93,
        'eng_paragraph_degree' => -92,
        'news_author' => -91,
        'news_img_3col' => -85,
        'news_img_4col' => -84,
        'news_img_6col' => -83,
        'news_img_8col' => -82,
        'news_img_9col' => -81,
        'news_img_12col' => -88,
        'news_lede' => -90,
        'news_pull_quote_3col' => -80,
        'news_pull_quote_4col' => -79,
        'news_pull_quote_6col' => -78,
        'news_pull_quote_8col' => -77,
        'news_pull_quote_9col' => -76,
        'news_pull_quote_12col' => -86,
        'news_text_3col' => -75,
        'news_text_4col' => -74,
        'news_text_6col' => -73,
        'news_text_8col' => -72,
        'news_text_9col' => -71,
        'news_text_12col' => -89,
        'news_video_3col' => -70,
        'news_video_4col' => -69,
        'news_video_6col' => -68,
        'news_video_8col' => -67,
        'news_video_9col' => -66,
        'news_video_12col' => -87,
        'page_img_3col' => -64,
        'page_img_4col' => -63,
        'page_img_6col' => -62,
        'page_img_8col' => -61,
        'page_img_9col' => -60,
        'page_img_12col' => -65,
        'page_text_3col' => -58,
        'page_text_4col' => -57,
        'page_text_6col' => -56,
        'page_text_8col' => -55,
        'page_text_9col' => -54,
        'page_text_12col' => -59,
        'page_video_3col' => -52,
        'page_video_4col' => -51,
        'page_video_6col' => -50,
        'page_video_8col' => -49,
        'page_video_9col' => -48,
        'page_video_12col' => -53,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 49,
    ),
  );

  // Exported field_instance: 'node-news-field_news_author'.
  $field_instances['node-news-field_news_author'] = array(
    'bundle' => 'news',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'hidden',
        'module' => 'rss_creator',
        'settings' => array(),
        'type' => 'rss_creator',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_news_author',
    'label' => 'News author',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 48,
    ),
  );

  // Exported field_instance: 'node-news-field_news_type'.
  $field_instances['node-news-field_news_type'] = array(
    'bundle' => 'news',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<em>
<ol>
<li>The <strong>Featured</strong> tag is reserved for the main news story .</li>
<li>The <strong>Front</strong> tag places news stories on the front page news row.</li>
</ol>
</em>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'rss' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_news_type',
    'label' => 'News type',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 57,
    ),
  );

  // Exported field_instance: 'node-news-field_old_category'.
  $field_instances['node-news-field_old_category'] = array(
    'bundle' => 'news',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_old_category',
    'label' => 'Old category',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-news-field_publish_date'.
  $field_instances['node-news-field_publish_date'] = array(
    'bundle' => 'news',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'default',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
      'rss' => array(
        'label' => 'hidden',
        'module' => 'rss_date',
        'settings' => array(
          'rss_element' => 'dc:date',
        ),
        'type' => 'rss_date',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_publish_date',
    'label' => 'Publish date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'm/d/Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'none',
        'no_fieldset' => 0,
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 49,
    ),
  );

  // Exported field_instance: 'node-news-field_related_centers_view'.
  $field_instances['node-news-field_related_centers_view'] = array(
    'bundle' => 'news',
    'default_value' => array(
      0 => array(
        'vname' => 'taxonomy_news_affiliations|news_related_ctr',
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
        'weight' => 6,
      ),
      'rss' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related_centers_view',
    'label' => 'Related centers view',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-news-field_related_dept_view'.
  $field_instances['node-news-field_related_dept_view'] = array(
    'bundle' => 'news',
    'default_value' => array(
      0 => array(
        'vname' => 'taxonomy_news_affiliations|news_related_dept',
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
      'rss' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related_dept_view',
    'label' => 'Related departments view',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-news-field_related_people'.
  $field_instances['node-news-field_related_people'] = array(
    'bundle' => 'news',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<em>To add multiple people, please separate each name by using a comma.</em>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related_people',
    'label' => 'Related people',
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
      'weight' => 50,
    ),
  );

  // Exported field_instance: 'node-news-field_related_people_view'.
  $field_instances['node-news-field_related_people_view'] = array(
    'bundle' => 'news',
    'default_value' => array(
      0 => array(
        'vname' => 'content_type_faculty_affiliations|news_related_fac',
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
      'rss' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related_people_view',
    'label' => 'Related people view',
    'required' => 0,
    'settings' => array(
      'allowed_views' => array(
        'admin_views_comment' => 0,
        'admin_views_node' => 0,
        'admin_views_user' => 0,
        'advisory_council_export' => 0,
        'body_to_paragraph' => 0,
        'centers' => 0,
        'content_type_faculty_affiliations' => 'content_type_faculty_affiliations',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-news-field_related_topics_view'.
  $field_instances['node-news-field_related_topics_view'] = array(
    'bundle' => 'news',
    'default_value' => array(
      0 => array(
        'vname' => 'taxonomy_news_affiliations|news_related_impact',
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
      'rss' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related_topics_view',
    'label' => 'Related topics view',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-news-field_summary'.
  $field_instances['node-news-field_summary'] = array(
    'bundle' => 'news',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'rss' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_summary',
    'label' => 'Summary',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 48,
    ),
  );

  // Exported field_instance: 'node-news-field_topics'.
  $field_instances['node-news-field_topics'] = array(
    'bundle' => 'news',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'rss' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_topics',
    'label' => 'Areas of Impact',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
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
      'weight' => 54,
    ),
  );

  // Exported field_instance: 'paragraphs_item-news_img_12col-field_news_media'.
  $field_instances['paragraphs_item-news_img_12col-field_news_media'] = array(
    'bundle' => 'news_img_12col',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'atom_reference',
        'settings' => array(
          'link' => 0,
          'override' => 0,
        ),
        'type' => 'sdl_editor_representation',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'atom_reference',
        'settings' => array(
          'link' => 0,
          'override' => 0,
        ),
        'type' => 'sdl_editor_representation',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'atom_reference',
        'settings' => array(
          'link' => 0,
          'override' => 0,
        ),
        'type' => 'sdl_editor_representation',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_news_media',
    'label' => 'Media',
    'required' => 0,
    'settings' => array(
      'allow_override' => 0,
      'referencable_types' => array(
        'image' => 'image',
        'video' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'wysiwyg_preview',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-news_img_12col-field_news_media_caption'.
  $field_instances['paragraphs_item-news_img_12col-field_news_media_caption'] = array(
    'bundle' => 'news_img_12col',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
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
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_news_media_caption',
    'label' => 'Media caption',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 150,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-news_img_3col-field_news_media'.
  $field_instances['paragraphs_item-news_img_3col-field_news_media'] = array(
    'bundle' => 'news_img_3col',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'atom_reference',
        'settings' => array(
          'link' => 0,
          'override' => 0,
        ),
        'type' => 'sdl_editor_representation',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'atom_reference',
        'settings' => array(
          'link' => 0,
          'override' => 0,
        ),
        'type' => 'sdl_editor_representation',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'atom_reference',
        'settings' => array(
          'link' => 0,
          'override' => 0,
        ),
        'type' => 'sdl_editor_representation',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_news_media',
    'label' => 'Media',
    'required' => 0,
    'settings' => array(
      'allow_override' => 0,
      'referencable_types' => array(
        'image' => 'image',
        'video' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'wysiwyg_preview',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-news_img_3col-field_news_media_caption'.
  $field_instances['paragraphs_item-news_img_3col-field_news_media_caption'] = array(
    'bundle' => 'news_img_3col',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
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
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_news_media_caption',
    'label' => 'Media caption',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 150,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-news_img_4col-field_news_media'.
  $field_instances['paragraphs_item-news_img_4col-field_news_media'] = array(
    'bundle' => 'news_img_4col',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'atom_reference',
        'settings' => array(
          'link' => 0,
          'override' => 0,
        ),
        'type' => 'sdl_editor_representation',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'atom_reference',
        'settings' => array(
          'link' => 0,
          'override' => 0,
        ),
        'type' => 'sdl_editor_representation',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'atom_reference',
        'settings' => array(
          'link' => 0,
          'override' => 0,
        ),
        'type' => 'sdl_editor_representation',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_news_media',
    'label' => 'Media',
    'required' => 0,
    'settings' => array(
      'allow_override' => 0,
      'referencable_types' => array(
        'image' => 'image',
        'video' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'wysiwyg_preview',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-news_img_4col-field_news_media_caption'.
  $field_instances['paragraphs_item-news_img_4col-field_news_media_caption'] = array(
    'bundle' => 'news_img_4col',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
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
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_news_media_caption',
    'label' => 'Media caption',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 150,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-news_img_6col-field_news_media'.
  $field_instances['paragraphs_item-news_img_6col-field_news_media'] = array(
    'bundle' => 'news_img_6col',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'atom_reference',
        'settings' => array(
          'link' => 0,
          'override' => 0,
        ),
        'type' => 'sdl_editor_representation',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'atom_reference',
        'settings' => array(
          'link' => 0,
          'override' => 0,
        ),
        'type' => 'sdl_editor_representation',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'atom_reference',
        'settings' => array(
          'link' => 0,
          'override' => 0,
        ),
        'type' => 'sdl_editor_representation',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_news_media',
    'label' => 'Media',
    'required' => 0,
    'settings' => array(
      'allow_override' => 0,
      'referencable_types' => array(
        'image' => 'image',
        'video' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'wysiwyg_preview',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-news_img_6col-field_news_media_caption'.
  $field_instances['paragraphs_item-news_img_6col-field_news_media_caption'] = array(
    'bundle' => 'news_img_6col',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
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
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_news_media_caption',
    'label' => 'Media caption',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 150,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-news_img_8col-field_news_media'.
  $field_instances['paragraphs_item-news_img_8col-field_news_media'] = array(
    'bundle' => 'news_img_8col',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'atom_reference',
        'settings' => array(
          'link' => 0,
          'override' => 0,
        ),
        'type' => 'sdl_editor_representation',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'atom_reference',
        'settings' => array(
          'link' => 0,
          'override' => 0,
        ),
        'type' => 'sdl_editor_representation',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'atom_reference',
        'settings' => array(
          'link' => 0,
          'override' => 0,
        ),
        'type' => 'sdl_editor_representation',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_news_media',
    'label' => 'Media',
    'required' => 0,
    'settings' => array(
      'allow_override' => 0,
      'referencable_types' => array(
        'image' => 'image',
        'video' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'wysiwyg_preview',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-news_img_8col-field_news_media_caption'.
  $field_instances['paragraphs_item-news_img_8col-field_news_media_caption'] = array(
    'bundle' => 'news_img_8col',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
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
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_news_media_caption',
    'label' => 'Media caption',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 150,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-news_img_9col-field_news_media'.
  $field_instances['paragraphs_item-news_img_9col-field_news_media'] = array(
    'bundle' => 'news_img_9col',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'atom_reference',
        'settings' => array(
          'link' => 0,
          'override' => 0,
        ),
        'type' => 'sdl_editor_representation',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'atom_reference',
        'settings' => array(
          'link' => 0,
          'override' => 0,
        ),
        'type' => 'sdl_editor_representation',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'atom_reference',
        'settings' => array(
          'link' => 0,
          'override' => 0,
        ),
        'type' => 'sdl_editor_representation',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_news_media',
    'label' => 'Media',
    'required' => 0,
    'settings' => array(
      'allow_override' => 0,
      'referencable_types' => array(
        'image' => 'image',
        'video' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'wysiwyg_preview',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-news_img_9col-field_news_media_caption'.
  $field_instances['paragraphs_item-news_img_9col-field_news_media_caption'] = array(
    'bundle' => 'news_img_9col',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
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
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_news_media_caption',
    'label' => 'Media caption',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 150,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-news_lede-field_news_content'.
  $field_instances['paragraphs_item-news_lede-field_news_content'] = array(
    'bundle' => 'news_lede',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_news_content',
    'label' => 'Lede',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-news_pull_quote_12col-field_news_pull_quote'.
  $field_instances['paragraphs_item-news_pull_quote_12col-field_news_pull_quote'] = array(
    'bundle' => 'news_pull_quote_12col',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_news_pull_quote',
    'label' => 'Quote',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-news_pull_quote_3col-field_news_pull_quote'.
  $field_instances['paragraphs_item-news_pull_quote_3col-field_news_pull_quote'] = array(
    'bundle' => 'news_pull_quote_3col',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_news_pull_quote',
    'label' => 'Quote',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-news_pull_quote_4col-field_news_pull_quote'.
  $field_instances['paragraphs_item-news_pull_quote_4col-field_news_pull_quote'] = array(
    'bundle' => 'news_pull_quote_4col',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_news_pull_quote',
    'label' => 'Quote',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-news_pull_quote_6col-field_news_pull_quote'.
  $field_instances['paragraphs_item-news_pull_quote_6col-field_news_pull_quote'] = array(
    'bundle' => 'news_pull_quote_6col',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_news_pull_quote',
    'label' => 'Quote',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-news_pull_quote_8col-field_news_pull_quote'.
  $field_instances['paragraphs_item-news_pull_quote_8col-field_news_pull_quote'] = array(
    'bundle' => 'news_pull_quote_8col',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_news_pull_quote',
    'label' => 'Quote',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-news_pull_quote_9col-field_news_pull_quote'.
  $field_instances['paragraphs_item-news_pull_quote_9col-field_news_pull_quote'] = array(
    'bundle' => 'news_pull_quote_9col',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_news_pull_quote',
    'label' => 'Quote',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-news_text_12col-field_news_content'.
  $field_instances['paragraphs_item-news_text_12col-field_news_content'] = array(
    'bundle' => 'news_text_12col',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<em>To add inline images:<br>
<ol>
<li>Select the <strong>+ add image button</strong> located on the right margin.</li>
<li>Upload the new image.</li>
<li>Select the <strong>expand button</strong> above the add image button.</li>
<li>Drag the image into the body.</li>
</ol>
</em>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 300,
        ),
        'type' => 'text_trimmed',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_news_content',
    'label' => 'Content',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'wysiwyg_preview',
      'dnd_enabled' => 1,
      'mee_enabled' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 15,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-news_text_3col-field_news_content'.
  $field_instances['paragraphs_item-news_text_3col-field_news_content'] = array(
    'bundle' => 'news_text_3col',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_news_content',
    'label' => 'Content',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 15,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-news_text_4col-field_news_content'.
  $field_instances['paragraphs_item-news_text_4col-field_news_content'] = array(
    'bundle' => 'news_text_4col',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_news_content',
    'label' => 'Content',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 15,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-news_text_6col-field_news_content'.
  $field_instances['paragraphs_item-news_text_6col-field_news_content'] = array(
    'bundle' => 'news_text_6col',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_news_content',
    'label' => 'Content',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 15,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-news_text_8col-field_news_content'.
  $field_instances['paragraphs_item-news_text_8col-field_news_content'] = array(
    'bundle' => 'news_text_8col',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_news_content',
    'label' => 'Content',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 15,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-news_text_9col-field_news_content'.
  $field_instances['paragraphs_item-news_text_9col-field_news_content'] = array(
    'bundle' => 'news_text_9col',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_news_content',
    'label' => 'Content',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 15,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-news_video_12col-field_news_video'.
  $field_instances['paragraphs_item-news_video_12col-field_news_video'] = array(
    'bundle' => 'news_video_12col',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'video_embed_field',
        'settings' => array(
          'description' => 1,
          'description_position' => 'bottom',
          'video_style' => 'normal',
        ),
        'type' => 'video_embed_field',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_news_video',
    'label' => 'Video',
    'required' => 0,
    'settings' => array(
      'allowed_providers' => array(
        'brightcove' => 0,
        'facebook' => 'facebook',
        'vimeo' => 'vimeo',
        'youtube' => 'youtube',
      ),
      'description_field' => 1,
      'description_length' => 500,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'video_embed_field',
      'settings' => array(),
      'type' => 'video_embed_field_video',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-news_video_3col-field_news_video'.
  $field_instances['paragraphs_item-news_video_3col-field_news_video'] = array(
    'bundle' => 'news_video_3col',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'video_embed_field',
        'settings' => array(
          'description' => 1,
          'description_position' => 'bottom',
          'video_style' => 'normal',
        ),
        'type' => 'video_embed_field',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_news_video',
    'label' => 'Video',
    'required' => 0,
    'settings' => array(
      'allowed_providers' => array(
        'brightcove' => 0,
        'facebook' => 'facebook',
        'vimeo' => 'vimeo',
        'youtube' => 'youtube',
      ),
      'description_field' => 1,
      'description_length' => 500,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'video_embed_field',
      'settings' => array(),
      'type' => 'video_embed_field_video',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-news_video_4col-field_news_video'.
  $field_instances['paragraphs_item-news_video_4col-field_news_video'] = array(
    'bundle' => 'news_video_4col',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'video_embed_field',
        'settings' => array(
          'description' => 1,
          'description_position' => 'bottom',
          'video_style' => 'normal',
        ),
        'type' => 'video_embed_field',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_news_video',
    'label' => 'Video',
    'required' => 0,
    'settings' => array(
      'allowed_providers' => array(
        'brightcove' => 0,
        'facebook' => 'facebook',
        'vimeo' => 'vimeo',
        'youtube' => 'youtube',
      ),
      'description_field' => 1,
      'description_length' => 500,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'video_embed_field',
      'settings' => array(),
      'type' => 'video_embed_field_video',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-news_video_6col-field_news_video'.
  $field_instances['paragraphs_item-news_video_6col-field_news_video'] = array(
    'bundle' => 'news_video_6col',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'video_embed_field',
        'settings' => array(
          'description' => 1,
          'description_position' => 'bottom',
          'video_style' => 'normal',
        ),
        'type' => 'video_embed_field',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_news_video',
    'label' => 'Video',
    'required' => 0,
    'settings' => array(
      'allowed_providers' => array(
        'brightcove' => 0,
        'facebook' => 'facebook',
        'vimeo' => 'vimeo',
        'youtube' => 'youtube',
      ),
      'description_field' => 1,
      'description_length' => 500,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'video_embed_field',
      'settings' => array(),
      'type' => 'video_embed_field_video',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-news_video_8col-field_news_video'.
  $field_instances['paragraphs_item-news_video_8col-field_news_video'] = array(
    'bundle' => 'news_video_8col',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'video_embed_field',
        'settings' => array(
          'description' => 1,
          'description_position' => 'bottom',
          'video_style' => 'normal',
        ),
        'type' => 'video_embed_field',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_news_video',
    'label' => 'Video',
    'required' => 0,
    'settings' => array(
      'allowed_providers' => array(
        'brightcove' => 0,
        'facebook' => 'facebook',
        'vimeo' => 'vimeo',
        'youtube' => 'youtube',
      ),
      'description_field' => 1,
      'description_length' => 500,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'video_embed_field',
      'settings' => array(),
      'type' => 'video_embed_field_video',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-news_video_9col-field_news_video'.
  $field_instances['paragraphs_item-news_video_9col-field_news_video'] = array(
    'bundle' => 'news_video_9col',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'video_embed_field',
        'settings' => array(
          'description' => 1,
          'description_position' => 'bottom',
          'video_style' => 'normal',
        ),
        'type' => 'video_embed_field',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_news_video',
    'label' => 'Video',
    'required' => 0,
    'settings' => array(
      'allowed_providers' => array(
        'brightcove' => 0,
        'facebook' => 'facebook',
        'vimeo' => 'vimeo',
        'youtube' => 'youtube',
      ),
      'description_field' => 1,
      'description_length' => 500,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'video_embed_field',
      'settings' => array(),
      'type' => 'video_embed_field_video',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<em>
<ol>
<li>The <strong>Featured</strong> tag is reserved for the main news story .</li>
<li>The <strong>Front</strong> tag places news stories on the front page news row.</li>
</ol>
</em>');
  t('<em>The image to be used for the top banner.</em>');
  t('<em>To add inline images:<br>
<ol>
<li>Select the <strong>+ add image button</strong> located on the right margin.</li>
<li>Upload the new image.</li>
<li>Select the <strong>expand button</strong> above the add image button.</li>
<li>Drag the image into the body.</li>
</ol>
</em>');
  t('<em>To add multiple people, please separate each name by using a comma.</em>');
  t('Areas of Impact');
  t('Center affiliations');
  t('Check this box to suppress the featured image.');
  t('Content');
  t('Department affiliations');
  t('Featured image');
  t('Featured image caption');
  t('Hide featured image');
  t('Lede');
  t('Media');
  t('Media caption');
  t('News author');
  t('News content');
  t('News type');
  t('Old category');
  t('Publish date');
  t('Quote');
  t('Related centers view');
  t('Related departments view');
  t('Related people');
  t('Related people view');
  t('Related topics view');
  t('Summary');
  t('Video');

  return $field_instances;
}
