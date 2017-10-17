<?php
/**
 * @file
 * eng_core_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function eng_core_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'core_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_core_search';
  $view->human_name = 'Core search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search';
  $handler->display->display_options['hide_attachment_summary'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['search_api_bypass_access'] = 0;
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['text_input_required'] = '';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Node title */
  $handler->display->display_options['fields']['node_title']['id'] = 'node_title';
  $handler->display->display_options['fields']['node_title']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['node_title']['field'] = 'node_title';
  $handler->display->display_options['fields']['node_title']['ui_name'] = 'Node title';
  $handler->display->display_options['fields']['node_title']['label'] = '';
  $handler->display->display_options['fields']['node_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['node_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['node_title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['node_title']['link_to_entity'] = 1;
  /* Field: Faculty title */
  $handler->display->display_options['fields']['node_field_faculty_title']['id'] = 'node_field_faculty_title';
  $handler->display->display_options['fields']['node_field_faculty_title']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['node_field_faculty_title']['field'] = 'node_field_faculty_title';
  $handler->display->display_options['fields']['node_field_faculty_title']['ui_name'] = 'Faculty title';
  $handler->display->display_options['fields']['node_field_faculty_title']['label'] = '';
  $handler->display->display_options['fields']['node_field_faculty_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_field_faculty_title']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['node_field_faculty_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['node_field_faculty_title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['node_field_faculty_title']['delta_offset'] = '0';
  /* Field: Staff title */
  $handler->display->display_options['fields']['node_field_staff_admin_title']['id'] = 'node_field_staff_admin_title';
  $handler->display->display_options['fields']['node_field_staff_admin_title']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['node_field_staff_admin_title']['field'] = 'node_field_staff_admin_title';
  $handler->display->display_options['fields']['node_field_staff_admin_title']['ui_name'] = 'Staff title';
  $handler->display->display_options['fields']['node_field_staff_admin_title']['label'] = '';
  $handler->display->display_options['fields']['node_field_staff_admin_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_field_staff_admin_title']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['node_field_staff_admin_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['node_field_staff_admin_title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['node_field_staff_admin_title']['delta_offset'] = '0';
  /* Field: Page content */
  $handler->display->display_options['fields']['node_body_value']['id'] = 'node_body_value';
  $handler->display->display_options['fields']['node_body_value']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['node_body_value']['field'] = 'node_body_value';
  $handler->display->display_options['fields']['node_body_value']['ui_name'] = 'Page content';
  $handler->display->display_options['fields']['node_body_value']['label'] = '';
  $handler->display->display_options['fields']['node_body_value']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['node_body_value']['alter']['max_length'] = '600';
  $handler->display->display_options['fields']['node_body_value']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['node_body_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_body_value']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['node_body_value']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['node_body_value']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['node_body_value']['link_to_entity'] = 0;
  /* Field: Email */
  $handler->display->display_options['fields']['node_field_email']['id'] = 'node_field_email';
  $handler->display->display_options['fields']['node_field_email']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['node_field_email']['field'] = 'node_field_email';
  $handler->display->display_options['fields']['node_field_email']['ui_name'] = 'Email';
  $handler->display->display_options['fields']['node_field_email']['label'] = '';
  $handler->display->display_options['fields']['node_field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_field_email']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['node_field_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['node_field_email']['hide_empty'] = TRUE;
  /* Field: Telephone */
  $handler->display->display_options['fields']['node_field_telephone']['id'] = 'node_field_telephone';
  $handler->display->display_options['fields']['node_field_telephone']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['node_field_telephone']['field'] = 'node_field_telephone';
  $handler->display->display_options['fields']['node_field_telephone']['ui_name'] = 'Telephone';
  $handler->display->display_options['fields']['node_field_telephone']['label'] = '';
  $handler->display->display_options['fields']['node_field_telephone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_field_telephone']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['node_field_telephone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['node_field_telephone']['hide_empty'] = TRUE;
  /* Field: Office room */
  $handler->display->display_options['fields']['node_field_office_room']['id'] = 'node_field_office_room';
  $handler->display->display_options['fields']['node_field_office_room']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['node_field_office_room']['field'] = 'node_field_office_room';
  $handler->display->display_options['fields']['node_field_office_room']['ui_name'] = 'Office room';
  $handler->display->display_options['fields']['node_field_office_room']['label'] = '';
  $handler->display->display_options['fields']['node_field_office_room']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_field_office_room']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['node_field_office_room']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['node_field_office_room']['hide_empty'] = TRUE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['node_field_paragraph_news']['id'] = 'node_field_paragraph_news';
  $handler->display->display_options['fields']['node_field_paragraph_news']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['node_field_paragraph_news']['field'] = 'node_field_paragraph_news';
  $handler->display->display_options['fields']['node_field_paragraph_news']['ui_name'] = 'News content [paragraphs]';
  $handler->display->display_options['fields']['node_field_paragraph_news']['label'] = '';
  $handler->display->display_options['fields']['node_field_paragraph_news']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['node_field_paragraph_news']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['node_field_paragraph_news']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_field_paragraph_news']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['node_field_paragraph_news']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['node_field_paragraph_news']['hide_empty'] = TRUE;
  /* Field: Page body [paragraphs content] */
  $handler->display->display_options['fields']['node_field_page_content']['id'] = 'node_field_page_content';
  $handler->display->display_options['fields']['node_field_page_content']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['node_field_page_content']['field'] = 'node_field_page_content';
  $handler->display->display_options['fields']['node_field_page_content']['ui_name'] = 'Page body [paragraphs content]';
  $handler->display->display_options['fields']['node_field_page_content']['label'] = '';
  $handler->display->display_options['fields']['node_field_page_content']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['node_field_page_content']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['node_field_page_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_field_page_content']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['node_field_page_content']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['node_field_page_content']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['node_field_page_content']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['node_field_page_content']['display'] = 'view';
  $handler->display->display_options['fields']['node_field_page_content']['view_mode'] = 'paragraphs_editor_preview';
  $handler->display->display_options['fields']['node_field_page_content']['bypass_access'] = 0;
  /* Field: Event: Area of Impact  */
  $handler->display->display_options['fields']['node_field_event_impact']['id'] = 'node_field_event_impact';
  $handler->display->display_options['fields']['node_field_event_impact']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['node_field_event_impact']['field'] = 'node_field_event_impact';
  $handler->display->display_options['fields']['node_field_event_impact']['ui_name'] = 'Event: Area of Impact ';
  $handler->display->display_options['fields']['node_field_event_impact']['label'] = '';
  $handler->display->display_options['fields']['node_field_event_impact']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_field_event_impact']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['node_field_event_impact']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['node_field_event_impact']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['node_field_event_impact']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['node_field_event_impact']['view_mode'] = 'full';
  $handler->display->display_options['fields']['node_field_event_impact']['bypass_access'] = 0;
  /* Field: Taxonomy term */
  $handler->display->display_options['fields']['taxonomy_term_name']['id'] = 'taxonomy_term_name';
  $handler->display->display_options['fields']['taxonomy_term_name']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['taxonomy_term_name']['field'] = 'taxonomy_term_name';
  $handler->display->display_options['fields']['taxonomy_term_name']['ui_name'] = 'Taxonomy term';
  $handler->display->display_options['fields']['taxonomy_term_name']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_term_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_term_name']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['taxonomy_term_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_term_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_term_name']['link_to_entity'] = 1;
  /* Field: Taxonomy description */
  $handler->display->display_options['fields']['taxonomy_term_description']['id'] = 'taxonomy_term_description';
  $handler->display->display_options['fields']['taxonomy_term_description']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['taxonomy_term_description']['field'] = 'taxonomy_term_description';
  $handler->display->display_options['fields']['taxonomy_term_description']['ui_name'] = 'Taxonomy description';
  $handler->display->display_options['fields']['taxonomy_term_description']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_term_description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_term_description']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['taxonomy_term_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_term_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_term_description']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['taxonomy_term_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_term_description']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_term_description']['link_to_entity'] = 0;
  /* Field: Area of Impact (taxonomy} */
  $handler->display->display_options['fields']['node_field_event_impact_name']['id'] = 'node_field_event_impact_name';
  $handler->display->display_options['fields']['node_field_event_impact_name']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['node_field_event_impact_name']['field'] = 'node_field_event_impact_name';
  $handler->display->display_options['fields']['node_field_event_impact_name']['ui_name'] = 'Area of Impact (taxonomy}';
  $handler->display->display_options['fields']['node_field_event_impact_name']['label'] = '';
  $handler->display->display_options['fields']['node_field_event_impact_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_field_event_impact_name']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['node_field_event_impact_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['node_field_event_impact_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['node_field_event_impact_name']['link_to_entity'] = 1;
  /* Field: Department (taxonomy) */
  $handler->display->display_options['fields']['node_field_department_name']['id'] = 'node_field_department_name';
  $handler->display->display_options['fields']['node_field_department_name']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['node_field_department_name']['field'] = 'node_field_department_name';
  $handler->display->display_options['fields']['node_field_department_name']['ui_name'] = 'Department (taxonomy)';
  $handler->display->display_options['fields']['node_field_department_name']['label'] = '';
  $handler->display->display_options['fields']['node_field_department_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_field_department_name']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['node_field_department_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['node_field_department_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['node_field_department_name']['link_to_entity'] = 1;
  /* Field: Center name */
  $handler->display->display_options['fields']['node_field_center']['id'] = 'node_field_center';
  $handler->display->display_options['fields']['node_field_center']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['node_field_center']['field'] = 'node_field_center';
  $handler->display->display_options['fields']['node_field_center']['ui_name'] = 'Center name';
  $handler->display->display_options['fields']['node_field_center']['label'] = '';
  $handler->display->display_options['fields']['node_field_center']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_field_center']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['node_field_center']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['node_field_center']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['node_field_center']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['node_field_center']['view_mode'] = 'full';
  $handler->display->display_options['fields']['node_field_center']['bypass_access'] = 0;
  /* Field: Event start date */
  $handler->display->display_options['fields']['node_field_event_time_value2']['id'] = 'node_field_event_time_value2';
  $handler->display->display_options['fields']['node_field_event_time_value2']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['node_field_event_time_value2']['field'] = 'node_field_event_time_value2';
  $handler->display->display_options['fields']['node_field_event_time_value2']['ui_name'] = 'Event start date';
  $handler->display->display_options['fields']['node_field_event_time_value2']['label'] = '';
  $handler->display->display_options['fields']['node_field_event_time_value2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_field_event_time_value2']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['node_field_event_time_value2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['node_field_event_time_value2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['node_field_event_time_value2']['date_format'] = 'long';
  $handler->display->display_options['fields']['node_field_event_time_value2']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['node_field_event_time_value2']['link_to_entity'] = 0;
  /* Field: Event start date */
  $handler->display->display_options['fields']['node_field_event_time_value']['id'] = 'node_field_event_time_value';
  $handler->display->display_options['fields']['node_field_event_time_value']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['node_field_event_time_value']['field'] = 'node_field_event_time_value';
  $handler->display->display_options['fields']['node_field_event_time_value']['ui_name'] = 'Event start date';
  $handler->display->display_options['fields']['node_field_event_time_value']['label'] = '';
  $handler->display->display_options['fields']['node_field_event_time_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_field_event_time_value']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['node_field_event_time_value']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['node_field_event_time_value']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['node_field_event_time_value']['date_format'] = 'long';
  $handler->display->display_options['fields']['node_field_event_time_value']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['node_field_event_time_value']['link_to_entity'] = 0;
  /* Field: Event link */
  $handler->display->display_options['fields']['node_field_event_website_url']['id'] = 'node_field_event_website_url';
  $handler->display->display_options['fields']['node_field_event_website_url']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['node_field_event_website_url']['field'] = 'node_field_event_website_url';
  $handler->display->display_options['fields']['node_field_event_website_url']['ui_name'] = 'Event link';
  $handler->display->display_options['fields']['node_field_event_website_url']['label'] = '';
  $handler->display->display_options['fields']['node_field_event_website_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_field_event_website_url']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['node_field_event_website_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['node_field_event_website_url']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['node_field_event_website_url']['link_to_entity'] = 0;
  /* Field: Interdisciplinary research */
  $handler->display->display_options['fields']['node_field_research_specialization_name']['id'] = 'node_field_research_specialization_name';
  $handler->display->display_options['fields']['node_field_research_specialization_name']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['node_field_research_specialization_name']['field'] = 'node_field_research_specialization_name';
  $handler->display->display_options['fields']['node_field_research_specialization_name']['ui_name'] = 'Interdisciplinary research';
  $handler->display->display_options['fields']['node_field_research_specialization_name']['label'] = '';
  $handler->display->display_options['fields']['node_field_research_specialization_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_field_research_specialization_name']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['node_field_research_specialization_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['node_field_research_specialization_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['node_field_research_specialization_name']['link_to_entity'] = 1;
  /* Field: Node » News content » Content: Text (indexed) */
  $handler->display->display_options['fields']['node_field_news_field_news_content_value']['id'] = 'node_field_news_field_news_content_value';
  $handler->display->display_options['fields']['node_field_news_field_news_content_value']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['node_field_news_field_news_content_value']['field'] = 'node_field_news_field_news_content_value';
  $handler->display->display_options['fields']['node_field_news_field_news_content_value']['label'] = '';
  $handler->display->display_options['fields']['node_field_news_field_news_content_value']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['node_field_news_field_news_content_value']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['node_field_news_field_news_content_value']['alter']['max_length'] = '350';
  $handler->display->display_options['fields']['node_field_news_field_news_content_value']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['node_field_news_field_news_content_value']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['node_field_news_field_news_content_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_field_news_field_news_content_value']['link_to_entity'] = 1;
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  /* Filter criterion: Node: Status (indexed) */
  $handler->display->display_options['filters']['node_status']['id'] = 'node_status';
  $handler->display->display_options['filters']['node_status']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['filters']['node_status']['field'] = 'node_status';
  $handler->display->display_options['filters']['node_status']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['node_status']['group'] = 1;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['group_info']['label'] = 'Fulltext search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group_info']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'node:body:value' => 'node:body:value',
    'node:field_center:name' => 'node:field_center:name',
    'node:field_department:name' => 'node:field_department:name',
    'node:field_email' => 'node:field_email',
    'node:field_event_impact:name' => 'node:field_event_impact:name',
    'node:field_event_website:title' => 'node:field_event_website:title',
    'node:field_faculty_title' => 'node:field_faculty_title',
    'node:field_name:family' => 'node:field_name:family',
    'node:field_name:generational' => 'node:field_name:generational',
    'node:field_name:given' => 'node:field_name:given',
    'node:field_name:middle' => 'node:field_name:middle',
    'node:field_news:field_content:value' => 'node:field_news:field_content:value',
    'node:field_news:field_news_content:value' => 'node:field_news:field_news_content:value',
    'node:field_office_room' => 'node:field_office_room',
    'node:field_page_content:field_content:value' => 'node:field_page_content:field_content:value',
    'node:field_related_people:field_name:family' => 'node:field_related_people:field_name:family',
    'node:field_related_people:field_name:generational' => 'node:field_related_people:field_name:generational',
    'node:field_related_people:field_name:given' => 'node:field_related_people:field_name:given',
    'node:field_related_people:field_name:middle' => 'node:field_related_people:field_name:middle',
    'node:field_related_people:title' => 'node:field_related_people:title',
    'node:field_research_area' => 'node:field_research_area',
    'node:field_research_specialization:name' => 'node:field_research_specialization:name',
    'node:field_staff_admin_title' => 'node:field_staff_admin_title',
    'node:field_summary:value' => 'node:field_summary:value',
    'node:field_telephone' => 'node:field_telephone',
    'node:field_topics:name' => 'node:field_topics:name',
    'node:title' => 'node:title',
    'paragraphs_item:bundle' => 'paragraphs_item:bundle',
    'paragraphs_item:field_content:value' => 'paragraphs_item:field_content:value',
    'taxonomy_term:description' => 'taxonomy_term:description',
    'taxonomy_term:name' => 'taxonomy_term:name',
  );
  $handler->display->display_options['metatags'] = array(
    'und' => array(
      'title' => array(
        'value' => '[view:title] | [current-page:pager][site:name]',
        'default' => '[view:title] | [current-page:pager][site:name]',
      ),
      'description' => array(
        'value' => 'Search for information, news, events, and people at Princeton Engineering.',
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
        'value' => '[current-page:title]',
        'default' => '[current-page:title]',
      ),
      'og:determiner' => array(
        'value' => '',
      ),
      'og:description' => array(
        'value' => 'Search for information, news, events, and people at Princeton Engineering.',
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
        'value' => '[current-page:title]',
        'default' => '[current-page:title]',
      ),
      'twitter:description' => array(
        'value' => 'Search for information, news, events, and people at Princeton Engineering.',
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'search-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node title */
  $handler->display->display_options['fields']['node_title']['id'] = 'node_title';
  $handler->display->display_options['fields']['node_title']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['node_title']['field'] = 'node_title';
  $handler->display->display_options['fields']['node_title']['ui_name'] = 'Node title';
  $handler->display->display_options['fields']['node_title']['label'] = '';
  $handler->display->display_options['fields']['node_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['node_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['node_title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['node_title']['link_to_entity'] = 1;
  /* Field: Node » Summary: Text (indexed) */
  $handler->display->display_options['fields']['node_field_summary_value']['id'] = 'node_field_summary_value';
  $handler->display->display_options['fields']['node_field_summary_value']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['node_field_summary_value']['field'] = 'node_field_summary_value';
  $handler->display->display_options['fields']['node_field_summary_value']['label'] = '';
  $handler->display->display_options['fields']['node_field_summary_value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['node_field_summary_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_field_summary_value']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['node_field_summary_value']['link_to_entity'] = 1;
  /* Field: Page content */
  $handler->display->display_options['fields']['node_field_page_content_field_content_value']['id'] = 'node_field_page_content_field_content_value';
  $handler->display->display_options['fields']['node_field_page_content_field_content_value']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['node_field_page_content_field_content_value']['field'] = 'node_field_page_content_field_content_value';
  $handler->display->display_options['fields']['node_field_page_content_field_content_value']['ui_name'] = 'Page content';
  $handler->display->display_options['fields']['node_field_page_content_field_content_value']['label'] = '';
  $handler->display->display_options['fields']['node_field_page_content_field_content_value']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['node_field_page_content_field_content_value']['alter']['max_length'] = '600';
  $handler->display->display_options['fields']['node_field_page_content_field_content_value']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['node_field_page_content_field_content_value']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['node_field_page_content_field_content_value']['element_type'] = '0';
  $handler->display->display_options['fields']['node_field_page_content_field_content_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_field_page_content_field_content_value']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['node_field_page_content_field_content_value']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['node_field_page_content_field_content_value']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['node_field_page_content_field_content_value']['link_to_entity'] = 0;
  /* Field: Faculty title */
  $handler->display->display_options['fields']['node_field_faculty_title']['id'] = 'node_field_faculty_title';
  $handler->display->display_options['fields']['node_field_faculty_title']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['node_field_faculty_title']['field'] = 'node_field_faculty_title';
  $handler->display->display_options['fields']['node_field_faculty_title']['ui_name'] = 'Faculty title';
  $handler->display->display_options['fields']['node_field_faculty_title']['label'] = '';
  $handler->display->display_options['fields']['node_field_faculty_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_field_faculty_title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['node_field_faculty_title']['delta_offset'] = '0';
  /* Field: Staff title */
  $handler->display->display_options['fields']['node_field_staff_admin_title']['id'] = 'node_field_staff_admin_title';
  $handler->display->display_options['fields']['node_field_staff_admin_title']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['node_field_staff_admin_title']['field'] = 'node_field_staff_admin_title';
  $handler->display->display_options['fields']['node_field_staff_admin_title']['ui_name'] = 'Staff title';
  $handler->display->display_options['fields']['node_field_staff_admin_title']['label'] = '';
  $handler->display->display_options['fields']['node_field_staff_admin_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_field_staff_admin_title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['node_field_staff_admin_title']['delta_offset'] = '0';
  /* Field: Body text (non-paragraphs content) */
  $handler->display->display_options['fields']['node_body_value']['id'] = 'node_body_value';
  $handler->display->display_options['fields']['node_body_value']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['node_body_value']['field'] = 'node_body_value';
  $handler->display->display_options['fields']['node_body_value']['ui_name'] = 'Body text (non-paragraphs content)';
  $handler->display->display_options['fields']['node_body_value']['label'] = '';
  $handler->display->display_options['fields']['node_body_value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['node_body_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_body_value']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['node_body_value']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['node_body_value']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['node_body_value']['link_to_entity'] = 0;
  /* Field: AOI Name tags */
  $handler->display->display_options['fields']['node_field_topics_name']['id'] = 'node_field_topics_name';
  $handler->display->display_options['fields']['node_field_topics_name']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['node_field_topics_name']['field'] = 'node_field_topics_name';
  $handler->display->display_options['fields']['node_field_topics_name']['ui_name'] = 'AOI Name tags';
  $handler->display->display_options['fields']['node_field_topics_name']['label'] = '';
  $handler->display->display_options['fields']['node_field_topics_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['node_field_topics_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['node_field_topics_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['node_field_topics_name']['alter']['path'] = 'impact/[node_field_topics_name]';
  $handler->display->display_options['fields']['node_field_topics_name']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['node_field_topics_name']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['node_field_topics_name']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['node_field_topics_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_field_topics_name']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['node_field_topics_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['node_field_topics_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['node_field_topics_name']['link_to_entity'] = 0;
  /* Field: Node: Related Department [name] */
  $handler->display->display_options['fields']['node_field_department_name']['id'] = 'node_field_department_name';
  $handler->display->display_options['fields']['node_field_department_name']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['node_field_department_name']['field'] = 'node_field_department_name';
  $handler->display->display_options['fields']['node_field_department_name']['ui_name'] = 'Node: Related Department [name]';
  $handler->display->display_options['fields']['node_field_department_name']['label'] = '';
  $handler->display->display_options['fields']['node_field_department_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['node_field_department_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['node_field_department_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['node_field_department_name']['alter']['path'] = 'departments/[node_field_department_name]';
  $handler->display->display_options['fields']['node_field_department_name']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['node_field_department_name']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['node_field_department_name']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['node_field_department_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_field_department_name']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['node_field_department_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['node_field_department_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['node_field_department_name']['link_to_entity'] = 0;
  /* Field: Node: Related Center [name] */
  $handler->display->display_options['fields']['node_field_center_name']['id'] = 'node_field_center_name';
  $handler->display->display_options['fields']['node_field_center_name']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['node_field_center_name']['field'] = 'node_field_center_name';
  $handler->display->display_options['fields']['node_field_center_name']['ui_name'] = 'Node: Related Center [name]';
  $handler->display->display_options['fields']['node_field_center_name']['label'] = '';
  $handler->display->display_options['fields']['node_field_center_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['node_field_center_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['node_field_center_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['node_field_center_name']['alter']['path'] = 'centers/[node_field_center_name]';
  $handler->display->display_options['fields']['node_field_center_name']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['node_field_center_name']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['node_field_center_name']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['node_field_center_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_field_center_name']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['node_field_center_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['node_field_center_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['node_field_center_name']['link_to_entity'] = 0;
  /* Field: Node » Interdisciplinary research: Name (indexed) */
  $handler->display->display_options['fields']['node_field_research_specialization_name']['id'] = 'node_field_research_specialization_name';
  $handler->display->display_options['fields']['node_field_research_specialization_name']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['node_field_research_specialization_name']['field'] = 'node_field_research_specialization_name';
  $handler->display->display_options['fields']['node_field_research_specialization_name']['label'] = '';
  $handler->display->display_options['fields']['node_field_research_specialization_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['node_field_research_specialization_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_field_research_specialization_name']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['node_field_research_specialization_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['node_field_research_specialization_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['node_field_research_specialization_name']['link_to_entity'] = 1;
  /* Field: Email */
  $handler->display->display_options['fields']['node_field_email']['id'] = 'node_field_email';
  $handler->display->display_options['fields']['node_field_email']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['node_field_email']['field'] = 'node_field_email';
  $handler->display->display_options['fields']['node_field_email']['ui_name'] = 'Email';
  $handler->display->display_options['fields']['node_field_email']['label'] = '';
  $handler->display->display_options['fields']['node_field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_field_email']['hide_empty'] = TRUE;
  /* Field: Telephone */
  $handler->display->display_options['fields']['node_field_telephone']['id'] = 'node_field_telephone';
  $handler->display->display_options['fields']['node_field_telephone']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['node_field_telephone']['field'] = 'node_field_telephone';
  $handler->display->display_options['fields']['node_field_telephone']['ui_name'] = 'Telephone';
  $handler->display->display_options['fields']['node_field_telephone']['label'] = '';
  $handler->display->display_options['fields']['node_field_telephone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_field_telephone']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['node_field_telephone']['type'] = 'telephone_link';
  $handler->display->display_options['fields']['node_field_telephone']['settings'] = array(
    'title' => '',
  );
  /* Field: Office room */
  $handler->display->display_options['fields']['node_field_office_room']['id'] = 'node_field_office_room';
  $handler->display->display_options['fields']['node_field_office_room']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['node_field_office_room']['field'] = 'node_field_office_room';
  $handler->display->display_options['fields']['node_field_office_room']['ui_name'] = 'Office room';
  $handler->display->display_options['fields']['node_field_office_room']['label'] = '';
  $handler->display->display_options['fields']['node_field_office_room']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_field_office_room']['hide_empty'] = TRUE;
  /* Field: Taxonomy page name */
  $handler->display->display_options['fields']['taxonomy_term_name']['id'] = 'taxonomy_term_name';
  $handler->display->display_options['fields']['taxonomy_term_name']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['taxonomy_term_name']['field'] = 'taxonomy_term_name';
  $handler->display->display_options['fields']['taxonomy_term_name']['ui_name'] = 'Taxonomy page name';
  $handler->display->display_options['fields']['taxonomy_term_name']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_term_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_term_name']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['taxonomy_term_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_term_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_term_name']['link_to_entity'] = 1;
  /* Field: Taxonomy page description */
  $handler->display->display_options['fields']['taxonomy_term_description']['id'] = 'taxonomy_term_description';
  $handler->display->display_options['fields']['taxonomy_term_description']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['taxonomy_term_description']['field'] = 'taxonomy_term_description';
  $handler->display->display_options['fields']['taxonomy_term_description']['ui_name'] = 'Taxonomy page description';
  $handler->display->display_options['fields']['taxonomy_term_description']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_term_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_term_description']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_term_description']['link_to_entity'] = 0;
  /* Field: Events: Start date */
  $handler->display->display_options['fields']['node_field_event_time_value']['id'] = 'node_field_event_time_value';
  $handler->display->display_options['fields']['node_field_event_time_value']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['node_field_event_time_value']['field'] = 'node_field_event_time_value';
  $handler->display->display_options['fields']['node_field_event_time_value']['ui_name'] = 'Events: Start date';
  $handler->display->display_options['fields']['node_field_event_time_value']['label'] = '';
  $handler->display->display_options['fields']['node_field_event_time_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_field_event_time_value']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['node_field_event_time_value']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['node_field_event_time_value']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['node_field_event_time_value']['date_format'] = 'long';
  $handler->display->display_options['fields']['node_field_event_time_value']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['node_field_event_time_value']['link_to_entity'] = 0;
  /* Field: Events: End date */
  $handler->display->display_options['fields']['node_field_event_time_value2']['id'] = 'node_field_event_time_value2';
  $handler->display->display_options['fields']['node_field_event_time_value2']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['node_field_event_time_value2']['field'] = 'node_field_event_time_value2';
  $handler->display->display_options['fields']['node_field_event_time_value2']['ui_name'] = 'Events: End date';
  $handler->display->display_options['fields']['node_field_event_time_value2']['label'] = '';
  $handler->display->display_options['fields']['node_field_event_time_value2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_field_event_time_value2']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['node_field_event_time_value2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['node_field_event_time_value2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['node_field_event_time_value2']['date_format'] = 'long';
  $handler->display->display_options['fields']['node_field_event_time_value2']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['node_field_event_time_value2']['link_to_entity'] = 0;
  /* Field: Events: Link title */
  $handler->display->display_options['fields']['node_field_event_website_title']['id'] = 'node_field_event_website_title';
  $handler->display->display_options['fields']['node_field_event_website_title']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['node_field_event_website_title']['field'] = 'node_field_event_website_title';
  $handler->display->display_options['fields']['node_field_event_website_title']['ui_name'] = 'Events: Link title';
  $handler->display->display_options['fields']['node_field_event_website_title']['label'] = '';
  $handler->display->display_options['fields']['node_field_event_website_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_field_event_website_title']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['node_field_event_website_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['node_field_event_website_title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['node_field_event_website_title']['link_to_entity'] = 1;
  /* Field: Events: Area of impact [name] */
  $handler->display->display_options['fields']['node_field_event_impact_name']['id'] = 'node_field_event_impact_name';
  $handler->display->display_options['fields']['node_field_event_impact_name']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['node_field_event_impact_name']['field'] = 'node_field_event_impact_name';
  $handler->display->display_options['fields']['node_field_event_impact_name']['ui_name'] = 'Events: Area of impact [name]';
  $handler->display->display_options['fields']['node_field_event_impact_name']['label'] = '';
  $handler->display->display_options['fields']['node_field_event_impact_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_field_event_impact_name']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['node_field_event_impact_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['node_field_event_impact_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['node_field_event_impact_name']['link_to_entity'] = 1;
  /* Field: Paragraphs item » Content: Text (indexed) */
  $handler->display->display_options['fields']['paragraphs_item_field_news_content_value']['id'] = 'paragraphs_item_field_news_content_value';
  $handler->display->display_options['fields']['paragraphs_item_field_news_content_value']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['paragraphs_item_field_news_content_value']['field'] = 'paragraphs_item_field_news_content_value';
  $handler->display->display_options['fields']['paragraphs_item_field_news_content_value']['label'] = '';
  $handler->display->display_options['fields']['paragraphs_item_field_news_content_value']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['paragraphs_item_field_news_content_value']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['paragraphs_item_field_news_content_value']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['paragraphs_item_field_news_content_value']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['paragraphs_item_field_news_content_value']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['paragraphs_item_field_news_content_value']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['paragraphs_item_field_news_content_value']['alter']['preserve_tags'] = '"h3 h2 p"';
  $handler->display->display_options['fields']['paragraphs_item_field_news_content_value']['element_type'] = '0';
  $handler->display->display_options['fields']['paragraphs_item_field_news_content_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['paragraphs_item_field_news_content_value']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['paragraphs_item_field_news_content_value']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['paragraphs_item_field_news_content_value']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['paragraphs_item_field_news_content_value']['link_to_entity'] = 1;
  /* Field: Node » News content » Content: Text (indexed) */
  $handler->display->display_options['fields']['node_field_news_field_content_value']['id'] = 'node_field_news_field_content_value';
  $handler->display->display_options['fields']['node_field_news_field_content_value']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['node_field_news_field_content_value']['field'] = 'node_field_news_field_content_value';
  $handler->display->display_options['fields']['node_field_news_field_content_value']['label'] = 'News content content text';
  $handler->display->display_options['fields']['node_field_news_field_content_value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['node_field_news_field_content_value']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['node_field_news_field_content_value']['link_to_entity'] = 1;
  /* Field: Node » News content » Content: Text (indexed) */
  $handler->display->display_options['fields']['node_field_news_field_news_content_value']['id'] = 'node_field_news_field_news_content_value';
  $handler->display->display_options['fields']['node_field_news_field_news_content_value']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['node_field_news_field_news_content_value']['field'] = 'node_field_news_field_news_content_value';
  $handler->display->display_options['fields']['node_field_news_field_news_content_value']['label'] = '';
  $handler->display->display_options['fields']['node_field_news_field_news_content_value']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['node_field_news_field_news_content_value']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['node_field_news_field_news_content_value']['alter']['more_link_text'] = 'Read more';
  $handler->display->display_options['fields']['node_field_news_field_news_content_value']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['node_field_news_field_news_content_value']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['node_field_news_field_news_content_value']['element_type'] = '0';
  $handler->display->display_options['fields']['node_field_news_field_news_content_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_field_news_field_news_content_value']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['node_field_news_field_news_content_value']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['node_field_news_field_news_content_value']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['node_field_news_field_news_content_value']['link_to_entity'] = 1;
  /* Field: Search: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_core_search';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['search_api_excerpt']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 1;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<br><hr><br>';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['metatags'] = array(
    'und' => array(
      'title' => array(
        'value' => '[view:title] | [current-page:pager][site:name]',
        'default' => '[view:title] | [current-page:pager][site:name]',
      ),
      'description' => array(
        'value' => 'Search for information, news, events, and people at Princeton Engineering.',
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
        'value' => 'Search for information, news, events, and people at Princeton Engineering.',
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
        'value' => 'Search for information, news, events, and people at Princeton Engineering.',
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
  $handler->display->display_options['path'] = 'search';
  $export['core_search'] = $view;

  return $export;
}
