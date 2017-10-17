<?php
/**
 * @file
 * eng_research_directory.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function eng_research_directory_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'research_directory';
  $view->description = '';
  $view->tag = 'Page, Directory, Impact';
  $view->base_table = 'node';
  $view->human_name = 'Research directory';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Research directory';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_name' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'directory-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Name Components: Given */
  $handler->display->display_options['fields']['field_name_given']['id'] = 'field_name_given';
  $handler->display->display_options['fields']['field_name_given']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name_given']['field'] = 'field_name_given';
  $handler->display->display_options['fields']['field_name_given']['label'] = '';
  $handler->display->display_options['fields']['field_name_given']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_name_given']['element_label_colon'] = FALSE;
  /* Field: Edit faculty */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['ui_name'] = 'Edit faculty';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '[edit_node] [field_name_given]\'s profile';
  $handler->display->display_options['fields']['edit_node']['element_type'] = 'h4';
  $handler->display->display_options['fields']['edit_node']['element_label_type'] = 'h4';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Profile photo */
  $handler->display->display_options['fields']['field_profile_photo']['id'] = 'field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['table'] = 'field_data_field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['field'] = 'field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['label'] = '';
  $handler->display->display_options['fields']['field_profile_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_photo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile_photo']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_profile_photo']['type'] = 'wysiwyg_preview';
  $handler->display->display_options['fields']['field_profile_photo']['settings'] = array(
    'link' => '0',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Faculty title */
  $handler->display->display_options['fields']['field_faculty_title']['id'] = 'field_faculty_title';
  $handler->display->display_options['fields']['field_faculty_title']['table'] = 'field_data_field_faculty_title';
  $handler->display->display_options['fields']['field_faculty_title']['field'] = 'field_faculty_title';
  $handler->display->display_options['fields']['field_faculty_title']['label'] = '';
  $handler->display->display_options['fields']['field_faculty_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_faculty_title']['delta_offset'] = '0';
  /* Field: Content: Telephone */
  $handler->display->display_options['fields']['field_telephone']['id'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['table'] = 'field_data_field_telephone';
  $handler->display->display_options['fields']['field_telephone']['field'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['label'] = '';
  $handler->display->display_options['fields']['field_telephone']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['label'] = '';
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  /* Field: Content: Research group website */
  $handler->display->display_options['fields']['field_research_group_website']['id'] = 'field_research_group_website';
  $handler->display->display_options['fields']['field_research_group_website']['table'] = 'field_data_field_research_group_website';
  $handler->display->display_options['fields']['field_research_group_website']['field'] = 'field_research_group_website';
  $handler->display->display_options['fields']['field_research_group_website']['label'] = '';
  $handler->display->display_options['fields']['field_research_group_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_research_group_website']['click_sort_column'] = 'url';
  /* Field: Content: Office room */
  $handler->display->display_options['fields']['field_office_room']['id'] = 'field_office_room';
  $handler->display->display_options['fields']['field_office_room']['table'] = 'field_data_field_office_room';
  $handler->display->display_options['fields']['field_office_room']['field'] = 'field_office_room';
  $handler->display->display_options['fields']['field_office_room']['label'] = '';
  $handler->display->display_options['fields']['field_office_room']['element_label_colon'] = FALSE;
  /* Field: Content: Building */
  $handler->display->display_options['fields']['field_building']['id'] = 'field_building';
  $handler->display->display_options['fields']['field_building']['table'] = 'field_data_field_building';
  $handler->display->display_options['fields']['field_building']['field'] = 'field_building';
  $handler->display->display_options['fields']['field_building']['label'] = '';
  $handler->display->display_options['fields']['field_building']['element_label_colon'] = FALSE;
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['label'] = '';
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
  /* Field: Content: State */
  $handler->display->display_options['fields']['field_state']['id'] = 'field_state';
  $handler->display->display_options['fields']['field_state']['table'] = 'field_data_field_state';
  $handler->display->display_options['fields']['field_state']['field'] = 'field_state';
  $handler->display->display_options['fields']['field_state']['label'] = '';
  $handler->display->display_options['fields']['field_state']['element_label_colon'] = FALSE;
  /* Field: Content: Zip code */
  $handler->display->display_options['fields']['field_zip_code']['id'] = 'field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['table'] = 'field_data_field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['field'] = 'field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['label'] = '';
  $handler->display->display_options['fields']['field_zip_code']['element_label_colon'] = FALSE;
  /* Field: Field: Areas of impact */
  $handler->display->display_options['fields']['field_topics']['id'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['table'] = 'field_data_field_topics';
  $handler->display->display_options['fields']['field_topics']['field'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['label'] = 'Core research area';
  $handler->display->display_options['fields']['field_topics']['element_wrapper_type'] = 'strong';
  $handler->display->display_options['fields']['field_topics']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_topics']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_topics']['delta_offset'] = '0';
  /* Field: Content: Primary affiliations */
  $handler->display->display_options['fields']['field_primary_affiliations']['id'] = 'field_primary_affiliations';
  $handler->display->display_options['fields']['field_primary_affiliations']['table'] = 'field_data_field_primary_affiliations';
  $handler->display->display_options['fields']['field_primary_affiliations']['field'] = 'field_primary_affiliations';
  $handler->display->display_options['fields']['field_primary_affiliations']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_primary_affiliations']['delta_offset'] = '0';
  /* Field: Content: Other affiliations */
  $handler->display->display_options['fields']['field_other_affiliations']['id'] = 'field_other_affiliations';
  $handler->display->display_options['fields']['field_other_affiliations']['table'] = 'field_data_field_other_affiliations';
  $handler->display->display_options['fields']['field_other_affiliations']['field'] = 'field_other_affiliations';
  $handler->display->display_options['fields']['field_other_affiliations']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_other_affiliations']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<br><hr>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Name Components: Family */
  $handler->display->display_options['sorts']['field_name_family']['id'] = 'field_name_family';
  $handler->display->display_options['sorts']['field_name_family']['table'] = 'field_data_field_name';
  $handler->display->display_options['sorts']['field_name_family']['field'] = 'field_name_family';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'faculty' => 'faculty',
  );
  /* Filter criterion: Content: Name */
  $handler->display->display_options['filters']['field_name']['id'] = 'field_name';
  $handler->display->display_options['filters']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['filters']['field_name']['field'] = 'field_name';
  $handler->display->display_options['filters']['field_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_name']['expose']['operator_id'] = 'field_name_op';
  $handler->display->display_options['filters']['field_name']['expose']['label'] = 'Faculty name';
  $handler->display->display_options['filters']['field_name']['expose']['operator'] = 'field_name_op';
  $handler->display->display_options['filters']['field_name']['expose']['identifier'] = 'field_name';
  $handler->display->display_options['filters']['field_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['metatags'] = array(
    'und' => array(
      'title' => array(
        'value' => 'Faculty directory | [current-page:pager][site:name]',
        'default' => '[view:title] | [current-page:pager][site:name]',
      ),
      'description' => array(
        'value' => 'Browse our faculty directory by academic department, interdisciplinary research areas, or by the school\'s priority areas of impact.',
        'default' => '[view:description]',
      ),
      'abstract' => array(
        'value' => '',
      ),
      'keywords' => array(
        'value' => '',
      ),
      'robots' => array(
        'value' => array(
          'index' => 0,
          'follow' => 0,
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
      ),
      'news_keywords' => array(
        'value' => '',
      ),
      'standout' => array(
        'value' => '',
      ),
      'rating' => array(
        'value' => '',
      ),
      'referrer' => array(
        'value' => '',
      ),
      'rights' => array(
        'value' => '',
      ),
      'image_src' => array(
        'value' => '',
      ),
      'canonical' => array(
        'value' => '[view:url]',
        'default' => '[view:url]',
      ),
      'shortlink' => array(
        'value' => '[current-page:url:unaliased]',
        'default' => '[current-page:url:unaliased]',
      ),
      'original-source' => array(
        'value' => '',
      ),
      'prev' => array(
        'value' => '',
      ),
      'next' => array(
        'value' => '',
      ),
      'content-language' => array(
        'value' => '',
      ),
      'geo.position' => array(
        'value' => '',
      ),
      'geo.placename' => array(
        'value' => '',
      ),
      'geo.region' => array(
        'value' => '',
      ),
      'icbm' => array(
        'value' => '',
      ),
      'refresh' => array(
        'value' => '',
      ),
      'revisit-after' => array(
        'value' => '',
        'period' => '',
      ),
      'pragma' => array(
        'value' => '',
      ),
      'cache-control' => array(
        'value' => '',
      ),
      'expires' => array(
        'value' => '',
      ),
      'fb:admins' => array(
        'value' => '',
      ),
      'fb:app_id' => array(
        'value' => '',
      ),
      'fb:pages' => array(
        'value' => '',
      ),
      'thumbnail' => array(
        'value' => '',
      ),
      'department' => array(
        'value' => '',
      ),
      'audience' => array(
        'value' => '',
      ),
      'doc_status' => array(
        'value' => '',
      ),
      'google_rating' => array(
        'value' => '',
      ),
      'og:type' => array(
        'value' => 'article',
        'default' => 'article',
      ),
      'og:url' => array(
        'value' => '[current-page:url:absolute]',
        'default' => '[current-page:url:absolute]',
      ),
      'og:title' => array(
        'value' => 'Faculty directory',
        'default' => '[current-page:title]',
      ),
      'og:determiner' => array(
        'value' => '',
      ),
      'og:description' => array(
        'value' => 'Browse our faculty directory by academic department, interdisciplinary research areas, or by the school\'s priority areas of impact.',
      ),
      'og:updated_time' => array(
        'value' => '',
      ),
      'og:see_also' => array(
        'value' => '',
      ),
      'og:image' => array(
        'value' => '',
      ),
      'og:image:url' => array(
        'value' => '',
      ),
      'og:image:secure_url' => array(
        'value' => '',
      ),
      'og:image:type' => array(
        'value' => '',
      ),
      'og:image:width' => array(
        'value' => '',
      ),
      'og:image:height' => array(
        'value' => '',
      ),
      'og:latitude' => array(
        'value' => '',
      ),
      'og:longitude' => array(
        'value' => '',
      ),
      'og:street_address' => array(
        'value' => '',
      ),
      'og:locality' => array(
        'value' => '',
      ),
      'og:region' => array(
        'value' => '',
      ),
      'og:postal_code' => array(
        'value' => '',
      ),
      'og:country_name' => array(
        'value' => '',
      ),
      'og:email' => array(
        'value' => '',
      ),
      'og:phone_number' => array(
        'value' => '',
      ),
      'og:fax_number' => array(
        'value' => '',
      ),
      'og:locale' => array(
        'value' => '',
      ),
      'og:locale:alternate' => array(
        'value' => '',
      ),
      'article:author' => array(
        'value' => '',
      ),
      'article:publisher' => array(
        'value' => '',
      ),
      'article:section' => array(
        'value' => '',
      ),
      'article:tag' => array(
        'value' => '',
      ),
      'article:published_time' => array(
        'value' => '',
      ),
      'article:modified_time' => array(
        'value' => '',
      ),
      'article:expiration_time' => array(
        'value' => '',
      ),
      'profile:first_name' => array(
        'value' => '',
      ),
      'profile:last_name' => array(
        'value' => '',
      ),
      'profile:username' => array(
        'value' => '',
      ),
      'profile:gender' => array(
        'value' => '',
      ),
      'og:audio' => array(
        'value' => '',
      ),
      'og:audio:secure_url' => array(
        'value' => '',
      ),
      'og:audio:type' => array(
        'value' => '',
      ),
      'book:author' => array(
        'value' => '',
      ),
      'book:isbn' => array(
        'value' => '',
      ),
      'book:release_date' => array(
        'value' => '',
      ),
      'book:tag' => array(
        'value' => '',
      ),
      'og:video:url' => array(
        'value' => '',
      ),
      'og:video:secure_url' => array(
        'value' => '',
      ),
      'og:video:width' => array(
        'value' => '',
      ),
      'og:video:height' => array(
        'value' => '',
      ),
      'og:video:type' => array(
        'value' => '',
      ),
      'video:actor' => array(
        'value' => '',
      ),
      'video:actor:role' => array(
        'value' => '',
      ),
      'video:director' => array(
        'value' => '',
      ),
      'video:writer' => array(
        'value' => '',
      ),
      'video:duration' => array(
        'value' => '',
      ),
      'video:release_date' => array(
        'value' => '',
      ),
      'video:tag' => array(
        'value' => '',
      ),
      'video:series' => array(
        'value' => '',
      ),
      'twitter:card' => array(
        'value' => 'summary',
        'default' => 'summary',
      ),
      'twitter:creator' => array(
        'value' => '',
      ),
      'twitter:creator:id' => array(
        'value' => '',
      ),
      'twitter:url' => array(
        'value' => '[current-page:url:absolute]',
        'default' => '[current-page:url:absolute]',
      ),
      'twitter:title' => array(
        'value' => 'Faculty directory',
        'default' => '[current-page:title]',
      ),
      'twitter:description' => array(
        'value' => 'Browse our faculty directory by academic department, interdisciplinary research areas, or by the school\'s priority areas of impact.',
      ),
      'twitter:image' => array(
        'value' => '',
      ),
      'twitter:image:width' => array(
        'value' => '',
      ),
      'twitter:image:height' => array(
        'value' => '',
      ),
      'twitter:image:alt' => array(
        'value' => '',
      ),
      'twitter:image0' => array(
        'value' => '',
      ),
      'twitter:image1' => array(
        'value' => '',
      ),
      'twitter:image2' => array(
        'value' => '',
      ),
      'twitter:image3' => array(
        'value' => '',
      ),
      'twitter:player' => array(
        'value' => '',
      ),
      'twitter:player:width' => array(
        'value' => '',
      ),
      'twitter:player:height' => array(
        'value' => '',
      ),
      'twitter:player:stream' => array(
        'value' => '',
      ),
      'twitter:player:stream:content_type' => array(
        'value' => '',
      ),
      'twitter:app:country' => array(
        'value' => '',
      ),
      'twitter:app:name:iphone' => array(
        'value' => '',
      ),
      'twitter:app:id:iphone' => array(
        'value' => '',
      ),
      'twitter:app:url:iphone' => array(
        'value' => '',
      ),
      'twitter:app:name:ipad' => array(
        'value' => '',
      ),
      'twitter:app:id:ipad' => array(
        'value' => '',
      ),
      'twitter:app:url:ipad' => array(
        'value' => '',
      ),
      'twitter:app:name:googleplay' => array(
        'value' => '',
      ),
      'twitter:app:id:googleplay' => array(
        'value' => '',
      ),
      'twitter:app:url:googleplay' => array(
        'value' => '',
      ),
      'twitter:label1' => array(
        'value' => '',
      ),
      'twitter:data1' => array(
        'value' => '',
      ),
      'twitter:label2' => array(
        'value' => '',
      ),
      'twitter:data2' => array(
        'value' => '',
      ),
    ),
  );

  /* Display: Research directory */
  $handler = $view->new_display('page', 'Research directory', 'research_directory');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Name Components: Given */
  $handler->display->display_options['fields']['field_name_given']['id'] = 'field_name_given';
  $handler->display->display_options['fields']['field_name_given']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name_given']['field'] = 'field_name_given';
  $handler->display->display_options['fields']['field_name_given']['label'] = '';
  $handler->display->display_options['fields']['field_name_given']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_name_given']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<p><u>[edit_node] [field_name_given]\'s profile</u></p>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Profile photo */
  $handler->display->display_options['fields']['field_profile_photo']['id'] = 'field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['table'] = 'field_data_field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['field'] = 'field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['label'] = '';
  $handler->display->display_options['fields']['field_profile_photo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_photo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile_photo']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_profile_photo']['type'] = 'full';
  $handler->display->display_options['fields']['field_profile_photo']['settings'] = array(
    'link' => '1',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Faculty title */
  $handler->display->display_options['fields']['field_faculty_title']['id'] = 'field_faculty_title';
  $handler->display->display_options['fields']['field_faculty_title']['table'] = 'field_data_field_faculty_title';
  $handler->display->display_options['fields']['field_faculty_title']['field'] = 'field_faculty_title';
  $handler->display->display_options['fields']['field_faculty_title']['label'] = '';
  $handler->display->display_options['fields']['field_faculty_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_faculty_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_faculty_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_faculty_title']['delta_offset'] = '0';
  /* Field: Content: Research group website */
  $handler->display->display_options['fields']['field_research_group_website']['id'] = 'field_research_group_website';
  $handler->display->display_options['fields']['field_research_group_website']['table'] = 'field_data_field_research_group_website';
  $handler->display->display_options['fields']['field_research_group_website']['field'] = 'field_research_group_website';
  $handler->display->display_options['fields']['field_research_group_website']['label'] = '';
  $handler->display->display_options['fields']['field_research_group_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_research_group_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_research_group_website']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_research_group_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_research_group_website']['type'] = 'link_url';
  /* Field: Content: Office room */
  $handler->display->display_options['fields']['field_office_room']['id'] = 'field_office_room';
  $handler->display->display_options['fields']['field_office_room']['table'] = 'field_data_field_office_room';
  $handler->display->display_options['fields']['field_office_room']['field'] = 'field_office_room';
  $handler->display->display_options['fields']['field_office_room']['label'] = '';
  $handler->display->display_options['fields']['field_office_room']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_office_room']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_office_room']['element_default_classes'] = FALSE;
  /* Field: Content: Building */
  $handler->display->display_options['fields']['field_building']['id'] = 'field_building';
  $handler->display->display_options['fields']['field_building']['table'] = 'field_data_field_building';
  $handler->display->display_options['fields']['field_building']['field'] = 'field_building';
  $handler->display->display_options['fields']['field_building']['label'] = '';
  $handler->display->display_options['fields']['field_building']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_building']['element_label_colon'] = FALSE;
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['label'] = '';
  $handler->display->display_options['fields']['field_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_city']['element_default_classes'] = FALSE;
  /* Field: Content: State */
  $handler->display->display_options['fields']['field_state']['id'] = 'field_state';
  $handler->display->display_options['fields']['field_state']['table'] = 'field_data_field_state';
  $handler->display->display_options['fields']['field_state']['field'] = 'field_state';
  $handler->display->display_options['fields']['field_state']['label'] = '';
  $handler->display->display_options['fields']['field_state']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_state']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_state']['element_default_classes'] = FALSE;
  /* Field: Content: Zip code */
  $handler->display->display_options['fields']['field_zip_code']['id'] = 'field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['table'] = 'field_data_field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['field'] = 'field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['label'] = '';
  $handler->display->display_options['fields']['field_zip_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zip_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_zip_code']['element_default_classes'] = FALSE;
  /* Field: Global custom */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Global custom';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="image">
	[field_profile_photo]
       <p>[edit_node]</p>
</div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  /* Field: div.info */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'div.info';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="info"';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: Title, office, building */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Title, office, building';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<h3>[title]</h3>
	<h4>[field_faculty_title]</h4>
	<p class="office">
		<strong>Office:</strong> [field_office_room] [field_building]
	</p>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['label'] = '';
  $handler->display->display_options['fields']['field_website']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_website']['alter']['text'] = '<p class="website"><strong>Website: </strong>[field_website]</p>';
  $handler->display->display_options['fields']['field_website']['alter']['path'] = '[field_website] ';
  $handler->display->display_options['fields']['field_website']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_website']['alter']['prefix'] = 'Website: ';
  $handler->display->display_options['fields']['field_website']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_website']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website']['type'] = 'link_url';
  /* Field: Content: Telephone */
  $handler->display->display_options['fields']['field_telephone']['id'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['table'] = 'field_data_field_telephone';
  $handler->display->display_options['fields']['field_telephone']['field'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['label'] = '';
  $handler->display->display_options['fields']['field_telephone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_telephone']['alter']['text'] = '<p class="phone"><strong>Phone:</strong> [field_telephone]</p>';
  $handler->display->display_options['fields']['field_telephone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_telephone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_telephone']['hide_empty'] = TRUE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['text'] = '<p class="email"><strong>Email:</strong> [field_email]</p>';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_email']['hide_empty'] = TRUE;
  /* Field: Field: Areas of impact */
  $handler->display->display_options['fields']['field_topics']['id'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['table'] = 'field_data_field_topics';
  $handler->display->display_options['fields']['field_topics']['field'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['alter']['text'] = '<p class="areas-of-impact"><strong>Areas of Impact:</strong> [field_topics]</p>';
  $handler->display->display_options['fields']['field_topics']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_topics']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_topics']['element_wrapper_class'] = 'areas-of-impact';
  $handler->display->display_options['fields']['field_topics']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_topics']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_topics']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_topics']['delta_offset'] = '0';
  /* Field: Content: Primary affiliations */
  $handler->display->display_options['fields']['field_primary_affiliations']['id'] = 'field_primary_affiliations';
  $handler->display->display_options['fields']['field_primary_affiliations']['table'] = 'field_data_field_primary_affiliations';
  $handler->display->display_options['fields']['field_primary_affiliations']['field'] = 'field_primary_affiliations';
  $handler->display->display_options['fields']['field_primary_affiliations']['label'] = 'Primary Affiliations';
  $handler->display->display_options['fields']['field_primary_affiliations']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_primary_affiliations']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_primary_affiliations']['element_wrapper_class'] = 'primary-affiliations';
  $handler->display->display_options['fields']['field_primary_affiliations']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_primary_affiliations']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_primary_affiliations']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_primary_affiliations']['delta_offset'] = '0';
  /* Field: Content: Other affiliations */
  $handler->display->display_options['fields']['field_other_affiliations']['id'] = 'field_other_affiliations';
  $handler->display->display_options['fields']['field_other_affiliations']['table'] = 'field_data_field_other_affiliations';
  $handler->display->display_options['fields']['field_other_affiliations']['field'] = 'field_other_affiliations';
  $handler->display->display_options['fields']['field_other_affiliations']['alter']['text'] = '<p class="other-affiliations"><strong>Other Affiliations:</strong> [field_other_affiliations]</p>';
  $handler->display->display_options['fields']['field_other_affiliations']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_other_affiliations']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_other_affiliations']['element_wrapper_class'] = 'other-affiliations';
  $handler->display->display_options['fields']['field_other_affiliations']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_other_affiliations']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_other_affiliations']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_other_affiliations']['delta_offset'] = '0';
  /* Field: Content: Research area */
  $handler->display->display_options['fields']['field_research_area']['id'] = 'field_research_area';
  $handler->display->display_options['fields']['field_research_area']['table'] = 'field_data_field_research_area';
  $handler->display->display_options['fields']['field_research_area']['field'] = 'field_research_area';
  $handler->display->display_options['fields']['field_research_area']['label'] = '';
  $handler->display->display_options['fields']['field_research_area']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_research_area']['alter']['text'] = '<p class="research-area"><strong>Research Area:</strong> [field_research_area]</p>';
  $handler->display->display_options['fields']['field_research_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_research_area']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_research_area']['hide_empty'] = TRUE;
  /* Field: end.div.info */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'end.div.info';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'faculty' => 'faculty',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Exclude from research directory (field_faculty_exclude_rd) */
  $handler->display->display_options['filters']['field_faculty_exclude_rd_value']['id'] = 'field_faculty_exclude_rd_value';
  $handler->display->display_options['filters']['field_faculty_exclude_rd_value']['table'] = 'field_data_field_faculty_exclude_rd';
  $handler->display->display_options['filters']['field_faculty_exclude_rd_value']['field'] = 'field_faculty_exclude_rd_value';
  $handler->display->display_options['filters']['field_faculty_exclude_rd_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_faculty_exclude_rd_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_faculty_exclude_rd_value']['group'] = 1;
  /* Filter criterion: Areas of impact */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['ui_name'] = 'Areas of impact';
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Areas of impact';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'impact';
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'engineering_impact';
  /* Filter criterion: Interdisciplinary research areas */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['ui_name'] = 'Interdisciplinary research areas';
  $handler->display->display_options['filters']['tid_1']['group'] = 1;
  $handler->display->display_options['filters']['tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid_1']['expose']['operator_id'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['label'] = 'Interdisciplinary research areas';
  $handler->display->display_options['filters']['tid_1']['expose']['operator'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['identifier'] = 'research-areas';
  $handler->display->display_options['filters']['tid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['tid_1']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'engineering_interdisciplinary_research';
  /* Filter criterion: Department */
  $handler->display->display_options['filters']['field_primary_affiliations_target_id']['id'] = 'field_primary_affiliations_target_id';
  $handler->display->display_options['filters']['field_primary_affiliations_target_id']['table'] = 'field_data_field_primary_affiliations';
  $handler->display->display_options['filters']['field_primary_affiliations_target_id']['field'] = 'field_primary_affiliations_target_id';
  $handler->display->display_options['filters']['field_primary_affiliations_target_id']['ui_name'] = 'Department';
  $handler->display->display_options['filters']['field_primary_affiliations_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_primary_affiliations_target_id']['expose']['operator_id'] = 'field_primary_affiliations_target_id_op';
  $handler->display->display_options['filters']['field_primary_affiliations_target_id']['expose']['label'] = 'Primary affiliations (field_primary_affiliations)';
  $handler->display->display_options['filters']['field_primary_affiliations_target_id']['expose']['operator'] = 'field_primary_affiliations_target_id_op';
  $handler->display->display_options['filters']['field_primary_affiliations_target_id']['expose']['identifier'] = 'field_primary_affiliations_target_id';
  $handler->display->display_options['filters']['field_primary_affiliations_target_id']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_primary_affiliations_target_id']['group_info']['label'] = 'Department';
  $handler->display->display_options['filters']['field_primary_affiliations_target_id']['group_info']['identifier'] = 'department';
  $handler->display->display_options['filters']['field_primary_affiliations_target_id']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Chemical and Biological Engineering',
      'operator' => '=',
      'value' => array(
        'value' => '51',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => 'Civil and Environmental Engineering',
      'operator' => '=',
      'value' => array(
        'value' => '3',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => 'Computer Science',
      'operator' => '=',
      'value' => array(
        'value' => '5',
        'min' => '',
        'max' => '',
      ),
    ),
    4 => array(
      'title' => 'Electrical Engineering',
      'operator' => '=',
      'value' => array(
        'value' => '2',
        'min' => '',
        'max' => '',
      ),
    ),
    5 => array(
      'title' => 'Mechanical and Aerospace Engineering',
      'operator' => '=',
      'value' => array(
        'value' => '1',
        'min' => '',
        'max' => '',
      ),
    ),
    6 => array(
      'title' => 'Operations Research and Financial Engineering',
      'operator' => '=',
      'value' => array(
        'value' => '4',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  $handler->display->display_options['metatags'] = array(
    'und' => array(
      'title' => array(
        'value' => '[view:title] | [current-page:pager][site:name]',
        'default' => '[view:title] | [current-page:pager][site:name]',
      ),
      'description' => array(
        'value' => 'Browse our faculty directory by academic department, interdisciplinary research areas, or by the school\'s priority areas of impact.',
        'default' => '[view:description]',
      ),
      'abstract' => array(
        'value' => '',
      ),
      'keywords' => array(
        'value' => '',
      ),
      'robots' => array(
        'value' => array(
          'index' => 0,
          'follow' => 0,
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
      ),
      'news_keywords' => array(
        'value' => '',
      ),
      'standout' => array(
        'value' => '',
      ),
      'rating' => array(
        'value' => '',
      ),
      'referrer' => array(
        'value' => '',
      ),
      'rights' => array(
        'value' => '',
      ),
      'image_src' => array(
        'value' => '',
      ),
      'canonical' => array(
        'value' => '[view:url]',
        'default' => '[view:url]',
      ),
      'shortlink' => array(
        'value' => '[current-page:url:unaliased]',
        'default' => '[current-page:url:unaliased]',
      ),
      'original-source' => array(
        'value' => '',
      ),
      'prev' => array(
        'value' => '',
      ),
      'next' => array(
        'value' => '',
      ),
      'content-language' => array(
        'value' => '',
      ),
      'geo.position' => array(
        'value' => '',
      ),
      'geo.placename' => array(
        'value' => '',
      ),
      'geo.region' => array(
        'value' => '',
      ),
      'icbm' => array(
        'value' => '',
      ),
      'refresh' => array(
        'value' => '',
      ),
      'revisit-after' => array(
        'value' => '',
        'period' => '',
      ),
      'pragma' => array(
        'value' => '',
      ),
      'cache-control' => array(
        'value' => '',
      ),
      'expires' => array(
        'value' => '',
      ),
      'fb:admins' => array(
        'value' => '',
      ),
      'fb:app_id' => array(
        'value' => '',
      ),
      'fb:pages' => array(
        'value' => '',
      ),
      'thumbnail' => array(
        'value' => '',
      ),
      'department' => array(
        'value' => '',
      ),
      'audience' => array(
        'value' => '',
      ),
      'doc_status' => array(
        'value' => '',
      ),
      'google_rating' => array(
        'value' => '',
      ),
      'og:type' => array(
        'value' => 'article',
        'default' => 'article',
      ),
      'og:url' => array(
        'value' => '[current-page:url:absolute]',
        'default' => '[current-page:url:absolute]',
      ),
      'og:title' => array(
        'value' => '[current-page:title] | [site:name]',
        'default' => '[current-page:title]',
      ),
      'og:determiner' => array(
        'value' => '',
      ),
      'og:description' => array(
        'value' => 'Browse our faculty directory by academic department, interdisciplinary research areas, or by the school\'s priority areas of impact.',
      ),
      'og:updated_time' => array(
        'value' => '',
      ),
      'og:see_also' => array(
        'value' => '',
      ),
      'og:image' => array(
        'value' => '',
      ),
      'og:image:url' => array(
        'value' => '',
      ),
      'og:image:secure_url' => array(
        'value' => '',
      ),
      'og:image:type' => array(
        'value' => '',
      ),
      'og:image:width' => array(
        'value' => '',
      ),
      'og:image:height' => array(
        'value' => '',
      ),
      'og:latitude' => array(
        'value' => '',
      ),
      'og:longitude' => array(
        'value' => '',
      ),
      'og:street_address' => array(
        'value' => '',
      ),
      'og:locality' => array(
        'value' => '',
      ),
      'og:region' => array(
        'value' => '',
      ),
      'og:postal_code' => array(
        'value' => '',
      ),
      'og:country_name' => array(
        'value' => '',
      ),
      'og:email' => array(
        'value' => '',
      ),
      'og:phone_number' => array(
        'value' => '',
      ),
      'og:fax_number' => array(
        'value' => '',
      ),
      'og:locale' => array(
        'value' => '',
      ),
      'og:locale:alternate' => array(
        'value' => '',
      ),
      'article:author' => array(
        'value' => '',
      ),
      'article:publisher' => array(
        'value' => '',
      ),
      'article:section' => array(
        'value' => '',
      ),
      'article:tag' => array(
        'value' => '',
      ),
      'article:published_time' => array(
        'value' => '',
      ),
      'article:modified_time' => array(
        'value' => '',
      ),
      'article:expiration_time' => array(
        'value' => '',
      ),
      'profile:first_name' => array(
        'value' => '',
      ),
      'profile:last_name' => array(
        'value' => '',
      ),
      'profile:username' => array(
        'value' => '',
      ),
      'profile:gender' => array(
        'value' => '',
      ),
      'og:audio' => array(
        'value' => '',
      ),
      'og:audio:secure_url' => array(
        'value' => '',
      ),
      'og:audio:type' => array(
        'value' => '',
      ),
      'book:author' => array(
        'value' => '',
      ),
      'book:isbn' => array(
        'value' => '',
      ),
      'book:release_date' => array(
        'value' => '',
      ),
      'book:tag' => array(
        'value' => '',
      ),
      'og:video:url' => array(
        'value' => '',
      ),
      'og:video:secure_url' => array(
        'value' => '',
      ),
      'og:video:width' => array(
        'value' => '',
      ),
      'og:video:height' => array(
        'value' => '',
      ),
      'og:video:type' => array(
        'value' => '',
      ),
      'video:actor' => array(
        'value' => '',
      ),
      'video:actor:role' => array(
        'value' => '',
      ),
      'video:director' => array(
        'value' => '',
      ),
      'video:writer' => array(
        'value' => '',
      ),
      'video:duration' => array(
        'value' => '',
      ),
      'video:release_date' => array(
        'value' => '',
      ),
      'video:tag' => array(
        'value' => '',
      ),
      'video:series' => array(
        'value' => '',
      ),
      'twitter:card' => array(
        'value' => 'summary',
        'default' => 'summary',
      ),
      'twitter:creator' => array(
        'value' => '',
      ),
      'twitter:creator:id' => array(
        'value' => '',
      ),
      'twitter:url' => array(
        'value' => '[current-page:url:absolute]',
        'default' => '[current-page:url:absolute]',
      ),
      'twitter:title' => array(
        'value' => '[current-page:title] | [site:name]',
        'default' => '[current-page:title]',
      ),
      'twitter:description' => array(
        'value' => 'Browse our faculty directory by academic department, interdisciplinary research areas, or by the school\'s priority areas of impact.',
      ),
      'twitter:image' => array(
        'value' => '',
      ),
      'twitter:image:width' => array(
        'value' => '',
      ),
      'twitter:image:height' => array(
        'value' => '',
      ),
      'twitter:image:alt' => array(
        'value' => '',
      ),
      'twitter:image0' => array(
        'value' => '',
      ),
      'twitter:image1' => array(
        'value' => '',
      ),
      'twitter:image2' => array(
        'value' => '',
      ),
      'twitter:image3' => array(
        'value' => '',
      ),
      'twitter:player' => array(
        'value' => '',
      ),
      'twitter:player:width' => array(
        'value' => '',
      ),
      'twitter:player:height' => array(
        'value' => '',
      ),
      'twitter:player:stream' => array(
        'value' => '',
      ),
      'twitter:player:stream:content_type' => array(
        'value' => '',
      ),
      'twitter:app:country' => array(
        'value' => '',
      ),
      'twitter:app:name:iphone' => array(
        'value' => '',
      ),
      'twitter:app:id:iphone' => array(
        'value' => '',
      ),
      'twitter:app:url:iphone' => array(
        'value' => '',
      ),
      'twitter:app:name:ipad' => array(
        'value' => '',
      ),
      'twitter:app:id:ipad' => array(
        'value' => '',
      ),
      'twitter:app:url:ipad' => array(
        'value' => '',
      ),
      'twitter:app:name:googleplay' => array(
        'value' => '',
      ),
      'twitter:app:id:googleplay' => array(
        'value' => '',
      ),
      'twitter:app:url:googleplay' => array(
        'value' => '',
      ),
      'twitter:label1' => array(
        'value' => '',
      ),
      'twitter:data1' => array(
        'value' => '',
      ),
      'twitter:label2' => array(
        'value' => '',
      ),
      'twitter:data2' => array(
        'value' => '',
      ),
    ),
  );
  $handler->display->display_options['path'] = 'faculty-directory';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    7 => '7',
    5 => '5',
    4 => '4',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'faculty-directory/export';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'research_directory' => 0,
  );
  $export['research_directory'] = $view;

  return $export;
}
