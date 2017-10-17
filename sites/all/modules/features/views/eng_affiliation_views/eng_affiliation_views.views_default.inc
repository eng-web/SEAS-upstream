<?php
/**
 * @file
 * eng_affiliation_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function eng_affiliation_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'content_type_faculty_affiliations';
  $view->description = 'Faculty profiles showcasing related departments, centers, and areas of impact + News with related faculty on each story';
  $view->tag = 'Content types, Faculty, News';
  $view->base_table = 'node';
  $view->human_name = 'Faculty - Related departments, centers, impact, and news';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'faculty-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_primary_affiliations_target_id']['id'] = 'field_primary_affiliations_target_id';
  $handler->display->display_options['relationships']['field_primary_affiliations_target_id']['table'] = 'field_data_field_primary_affiliations';
  $handler->display->display_options['relationships']['field_primary_affiliations_target_id']['field'] = 'field_primary_affiliations_target_id';
  /* Field: Affiliation name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_primary_affiliations_target_id';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Affiliation name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'faculty' => 'faculty',
  );

  /* Display: Faculty: Primary affiliations */
  $handler = $view->new_display('panel_pane', 'Faculty: Primary affiliations', 'fac_primary_affiliations');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'department-center-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: TID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_primary_affiliations_target_id';
  $handler->display->display_options['fields']['tid']['ui_name'] = 'TID';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = FALSE;
  /* Field: Affiliation name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_primary_affiliations_target_id';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Affiliation name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_primary_affiliations_target_id';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description']['element_type'] = '0';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['description']['element_default_classes'] = FALSE;
  /* Field: Learn more */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'field_primary_affiliations_target_id';
  $handler->display->display_options['fields']['name_1']['ui_name'] = 'Learn more';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['text'] = 'Learn more';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name_1']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['fields']['name_1']['convert_spaces'] = TRUE;
  /* Field: Field: Hero image */
  $handler->display->display_options['fields']['field_hero_img']['id'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['table'] = 'field_data_field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['field'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['relationship'] = 'field_primary_affiliations_target_id';
  $handler->display->display_options['fields']['field_hero_img']['label'] = '';
  $handler->display->display_options['fields']['field_hero_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hero_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hero_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hero_img']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="taxonomy-[tid]">
	<div class="department-center-item-info">
		<h3>[name]</h3>
		<p>[description]</p>
                <p class="learn-more-button">[name_1]</p>
	</div>
	<div class="department-center-item-image">
		<p>[field_hero_img]</p>		
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_primary_affiliations_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'faculty' => 'faculty',
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';

  /* Display: Faculty: Other affiliations */
  $handler = $view->new_display('panel_pane', 'Faculty: Other affiliations', 'fac_other_affiliations');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'department-center-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_other_affiliations_target_id']['id'] = 'field_other_affiliations_target_id';
  $handler->display->display_options['relationships']['field_other_affiliations_target_id']['table'] = 'field_data_field_other_affiliations';
  $handler->display->display_options['relationships']['field_other_affiliations_target_id']['field'] = 'field_other_affiliations_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: TID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_other_affiliations_target_id';
  $handler->display->display_options['fields']['tid']['ui_name'] = 'TID';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = FALSE;
  /* Field: Affiliation name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_other_affiliations_target_id';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Affiliation name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_type'] = '0';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_other_affiliations_target_id';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description']['element_type'] = '0';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['description']['element_default_classes'] = FALSE;
  /* Field: Learn more */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'field_other_affiliations_target_id';
  $handler->display->display_options['fields']['name_1']['ui_name'] = 'Learn more';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['text'] = 'Learn more';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['name_1']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['fields']['name_1']['convert_spaces'] = TRUE;
  /* Field: Field: Hero image */
  $handler->display->display_options['fields']['field_hero_img']['id'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['table'] = 'field_data_field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['field'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['relationship'] = 'field_other_affiliations_target_id';
  $handler->display->display_options['fields']['field_hero_img']['label'] = '';
  $handler->display->display_options['fields']['field_hero_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hero_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hero_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hero_img']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="taxonomy-[tid]">
	<div class="department-center-item-info">
		<h3>[name]</h3>
		<p>[description]</p>
                <p class="learn-more-button">[name_1]</p>
	</div>
	<div class="department-center-item-image">
		<p>[field_hero_img]</p>		
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_other_affiliations_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'faculty' => 'faculty',
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';

  /* Display: Faculty: Areas of impact */
  $handler = $view->new_display('panel_pane', 'Faculty: Areas of impact', 'fac_related_impact');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'impact-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_topics_target_id']['id'] = 'field_topics_target_id';
  $handler->display->display_options['relationships']['field_topics_target_id']['table'] = 'field_data_field_topics';
  $handler->display->display_options['relationships']['field_topics_target_id']['field'] = 'field_topics_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Affiliation name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_topics_target_id';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Affiliation name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_type'] = '0';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_topics_target_id';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description']['element_type'] = '0';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['description']['element_default_classes'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_topics_target_id';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'field_topics_target_id';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['text'] = 'Learn more';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name_1']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['fields']['name_1']['convert_spaces'] = TRUE;
  /* Field: Field: Hero image */
  $handler->display->display_options['fields']['field_hero_img']['id'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['table'] = 'field_data_field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['field'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['relationship'] = 'field_topics_target_id';
  $handler->display->display_options['fields']['field_hero_img']['label'] = '';
  $handler->display->display_options['fields']['field_hero_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hero_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hero_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hero_img']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="taxonomy-[tid]">
	<div class="impact-item-info">
		<h3>[name]</h3>
		<p>[description]</p>
                <p class="learn-more-button">[name_1]</p>
	</div>
	<div class="impact-item-image">
		<p>[field_hero_img]</p>		
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_topics_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';

  /* Display: News: Related faculty */
  $handler = $view->new_display('panel_pane', 'News: Related faculty', 'news_related_fac');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_related_people_node']['id'] = 'reverse_field_related_people_node';
  $handler->display->display_options['relationships']['reverse_field_related_people_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_related_people_node']['field'] = 'reverse_field_related_people_node';
  $handler->display->display_options['relationships']['reverse_field_related_people_node']['relationship'] = 'field_related_people_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_related_people_node_1']['id'] = 'reverse_field_related_people_node_1';
  $handler->display->display_options['relationships']['reverse_field_related_people_node_1']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_related_people_node_1']['field'] = 'reverse_field_related_people_node';
  $handler->display->display_options['relationships']['reverse_field_related_people_node_1']['relationship'] = 'reverse_field_related_people_node';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Profile photo */
  $handler->display->display_options['fields']['field_profile_photo']['id'] = 'field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['table'] = 'field_data_field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['field'] = 'field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['label'] = '';
  $handler->display->display_options['fields']['field_profile_photo']['element_type'] = '0';
  $handler->display->display_options['fields']['field_profile_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_photo']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_profile_photo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile_photo']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_profile_photo']['type'] = 'sdl_editor_representation';
  $handler->display->display_options['fields']['field_profile_photo']['settings'] = array(
    'link' => '1',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Name Components: Family */
  $handler->display->display_options['sorts']['field_name_family']['id'] = 'field_name_family';
  $handler->display->display_options['sorts']['field_name_family']['table'] = 'field_data_field_name';
  $handler->display->display_options['sorts']['field_name_family']['field'] = 'field_name_family';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_related_people_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'faculty' => 'faculty',
  );
  $export['content_type_faculty_affiliations'] = $view;

  $view = new view();
  $view->name = 'content_type_faculty_news';
  $view->description = 'Faculty profiles showcasing their related news stories';
  $view->tag = 'Faculty, News';
  $view->base_table = 'node';
  $view->human_name = 'Faculty - Related news';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'news-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_related_people_target_id']['id'] = 'field_related_people_target_id';
  $handler->display->display_options['relationships']['field_related_people_target_id']['table'] = 'field_data_field_related_people';
  $handler->display->display_options['relationships']['field_related_people_target_id']['field'] = 'field_related_people_target_id';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'em';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit this story';
  /* Field: Field: Hero image */
  $handler->display->display_options['fields']['field_hero_img']['id'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['table'] = 'field_data_field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['field'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['label'] = '';
  $handler->display->display_options['fields']['field_hero_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hero_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hero_img']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_hero_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hero_img']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Field: Areas of impact */
  $handler->display->display_options['fields']['field_topics']['id'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['table'] = 'field_data_field_topics';
  $handler->display->display_options['fields']['field_topics']['field'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['label'] = '';
  $handler->display->display_options['fields']['field_topics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_topics']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_topics']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_topics']['alter']['path'] = '/impact/[field_topics]';
  $handler->display->display_options['fields']['field_topics']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_topics']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topics']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_topics']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_topics']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_topics']['delta_offset'] = '0';
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = '';
  $handler->display->display_options['fields']['term_node_tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['alter']['text'] = '[term_node_tid-tid]';
  $handler->display->display_options['fields']['term_node_tid']['element_type'] = '0';
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['term_node_tid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['separator'] = ' ';
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'engineering_impact' => 'engineering_impact',
    'scald_authors' => 0,
    'scald_tags' => 0,
    'affiliated_center' => 0,
    'affiliated_department' => 0,
    'engineering_centers' => 0,
    'committees' => 0,
    'council' => 0,
    'engineering_departments' => 0,
    'engineering_event_type' => 0,
    'faculty_research_specialties' => 0,
    'hashtag_terms' => 0,
    'interdisciplinary_programs' => 0,
    'engineering_interdisciplinary_research' => 0,
    'eng_news_partners' => 0,
    'engineering_news_type' => 0,
    'engineering_staff_tags' => 0,
    'student_status' => 0,
    'tags' => 0,
    'user_mention_terms' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="[term_node_tid]">
<p>[field_hero_img]</p>
<h3>[title]</h3>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Publish date (field_publish_date) */
  $handler->display->display_options['sorts']['field_publish_date_value']['id'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['sorts']['field_publish_date_value']['field'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_related_people_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Publish date (field_publish_date) */
  $handler->display->display_options['filters']['field_publish_date_value']['id'] = 'field_publish_date_value';
  $handler->display->display_options['filters']['field_publish_date_value']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['filters']['field_publish_date_value']['field'] = 'field_publish_date_value';
  $handler->display->display_options['filters']['field_publish_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_publish_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_publish_date_value']['default_date'] = '3 years ago';
  $handler->display->display_options['filters']['field_publish_date_value']['default_to_date'] = 'now';

  /* Display: Faculty related news */
  $handler = $view->new_display('panel_pane', 'Faculty related news', 'fac_related_news');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $export['content_type_faculty_news'] = $view;

  $view = new view();
  $view->name = 'department_center_impact_related_advisory_council_members';
  $view->description = 'Department, Center, and Areas of Impacts showcasing advisory council members';
  $view->tag = 'Taxonomy views, Faculty';
  $view->base_table = 'node';
  $view->human_name = 'Department, Center, Impact - Related advisory council members';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'taxonomy-advisory-council';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_topics_target_id']['id'] = 'field_topics_target_id';
  $handler->display->display_options['relationships']['field_topics_target_id']['table'] = 'field_data_field_topics';
  $handler->display->display_options['relationships']['field_topics_target_id']['field'] = 'field_topics_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Sort criterion: Name Components: Family */
  $handler->display->display_options['sorts']['field_name_family']['id'] = 'field_name_family';
  $handler->display->display_options['sorts']['field_name_family']['table'] = 'field_data_field_name';
  $handler->display->display_options['sorts']['field_name_family']['field'] = 'field_name_family';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_topics_target_id';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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
    'advisory_council_member' => 'advisory_council_member',
  );

  /* Display: Department: Advisory Council members */
  $handler = $view->new_display('panel_pane', 'Department: Advisory Council members', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'advisory-council';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_department_target_id']['id'] = 'field_department_target_id';
  $handler->display->display_options['relationships']['field_department_target_id']['table'] = 'field_data_field_department';
  $handler->display->display_options['relationships']['field_department_target_id']['field'] = 'field_department_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'em';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit this content';
  /* Field: Name */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Name';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Degree type */
  $handler->display->display_options['fields']['field_degree_information_1']['id'] = 'field_degree_information_1';
  $handler->display->display_options['fields']['field_degree_information_1']['table'] = 'field_data_field_degree_information';
  $handler->display->display_options['fields']['field_degree_information_1']['field'] = 'field_degree_information';
  $handler->display->display_options['fields']['field_degree_information_1']['ui_name'] = 'Degree type';
  $handler->display->display_options['fields']['field_degree_information_1']['label'] = '';
  $handler->display->display_options['fields']['field_degree_information_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_degree_information_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_degree_information_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_degree_information_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_degree_information_1']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_degree_information_1']['delta_offset'] = '0';
  /* Field: Degree year and department */
  $handler->display->display_options['fields']['field_degree_information']['id'] = 'field_degree_information';
  $handler->display->display_options['fields']['field_degree_information']['table'] = 'field_data_field_degree_information';
  $handler->display->display_options['fields']['field_degree_information']['field'] = 'field_degree_information';
  $handler->display->display_options['fields']['field_degree_information']['ui_name'] = 'Degree year and department';
  $handler->display->display_options['fields']['field_degree_information']['label'] = '';
  $handler->display->display_options['fields']['field_degree_information']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_degree_information']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_degree_information']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_degree_information']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_degree_information']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_degree_information']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_degree_information']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_degree_information']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_degree_information']['separator'] = '<br>';
  /* Field: Title at Institution */
  $handler->display->display_options['fields']['field_company_information_1']['id'] = 'field_company_information_1';
  $handler->display->display_options['fields']['field_company_information_1']['table'] = 'field_data_field_company_information';
  $handler->display->display_options['fields']['field_company_information_1']['field'] = 'field_company_information';
  $handler->display->display_options['fields']['field_company_information_1']['ui_name'] = 'Title at Institution';
  $handler->display->display_options['fields']['field_company_information_1']['label'] = '';
  $handler->display->display_options['fields']['field_company_information_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_company_information_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_company_information_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_company_information_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_company_information_1']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_company_information_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_company_information_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_company_information_1']['multi_type'] = 'ul';
  /* Field: Institution */
  $handler->display->display_options['fields']['field_company_information']['id'] = 'field_company_information';
  $handler->display->display_options['fields']['field_company_information']['table'] = 'field_data_field_company_information';
  $handler->display->display_options['fields']['field_company_information']['field'] = 'field_company_information';
  $handler->display->display_options['fields']['field_company_information']['ui_name'] = 'Institution';
  $handler->display->display_options['fields']['field_company_information']['label'] = '';
  $handler->display->display_options['fields']['field_company_information']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_company_information']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_company_information']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_company_information']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_company_information']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_company_information']['delta_offset'] = '0';
  /* Field: Institution location */
  $handler->display->display_options['fields']['field_company_information_2']['id'] = 'field_company_information_2';
  $handler->display->display_options['fields']['field_company_information_2']['table'] = 'field_data_field_company_information';
  $handler->display->display_options['fields']['field_company_information_2']['field'] = 'field_company_information';
  $handler->display->display_options['fields']['field_company_information_2']['ui_name'] = 'Institution location';
  $handler->display->display_options['fields']['field_company_information_2']['label'] = '';
  $handler->display->display_options['fields']['field_company_information_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_company_information_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_company_information_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_company_information_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_company_information_2']['settings'] = array(
    'view_mode' => 'paragraphs_editor_preview',
  );
  $handler->display->display_options['fields']['field_company_information_2']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h4>[title] [field_degree_information_1]<br>
[field_degree_information]</h4>
<p>[field_company_information_1]</p>
<p>[field_company_information]</p>
<p>[field_company_information_2]</p>';
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['preserve_tags'] = '<h4><p><br><span>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_department_target_id';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: Center: Advisory Council members */
  $handler = $view->new_display('panel_pane', 'Center: Advisory Council members', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'advisory-council';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_center_target_id']['id'] = 'field_center_target_id';
  $handler->display->display_options['relationships']['field_center_target_id']['table'] = 'field_data_field_center';
  $handler->display->display_options['relationships']['field_center_target_id']['field'] = 'field_center_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'em';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit this content';
  /* Field: Name */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Name';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Degree type */
  $handler->display->display_options['fields']['field_degree_information']['id'] = 'field_degree_information';
  $handler->display->display_options['fields']['field_degree_information']['table'] = 'field_data_field_degree_information';
  $handler->display->display_options['fields']['field_degree_information']['field'] = 'field_degree_information';
  $handler->display->display_options['fields']['field_degree_information']['ui_name'] = 'Degree type';
  $handler->display->display_options['fields']['field_degree_information']['label'] = '';
  $handler->display->display_options['fields']['field_degree_information']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_degree_information']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_degree_information']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_degree_information']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_degree_information']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_degree_information']['delta_offset'] = '0';
  /* Field: Degree year and department */
  $handler->display->display_options['fields']['field_degree_information_1']['id'] = 'field_degree_information_1';
  $handler->display->display_options['fields']['field_degree_information_1']['table'] = 'field_data_field_degree_information';
  $handler->display->display_options['fields']['field_degree_information_1']['field'] = 'field_degree_information';
  $handler->display->display_options['fields']['field_degree_information_1']['ui_name'] = 'Degree year and department';
  $handler->display->display_options['fields']['field_degree_information_1']['label'] = '';
  $handler->display->display_options['fields']['field_degree_information_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_degree_information_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_degree_information_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_degree_information_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_degree_information_1']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_degree_information_1']['delta_offset'] = '0';
  /* Field: Title at Institution */
  $handler->display->display_options['fields']['field_company_information']['id'] = 'field_company_information';
  $handler->display->display_options['fields']['field_company_information']['table'] = 'field_data_field_company_information';
  $handler->display->display_options['fields']['field_company_information']['field'] = 'field_company_information';
  $handler->display->display_options['fields']['field_company_information']['ui_name'] = 'Title at Institution';
  $handler->display->display_options['fields']['field_company_information']['label'] = '';
  $handler->display->display_options['fields']['field_company_information']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_company_information']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_company_information']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_company_information']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_company_information']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_company_information']['delta_offset'] = '0';
  /* Field: Institution */
  $handler->display->display_options['fields']['field_company_information_1']['id'] = 'field_company_information_1';
  $handler->display->display_options['fields']['field_company_information_1']['table'] = 'field_data_field_company_information';
  $handler->display->display_options['fields']['field_company_information_1']['field'] = 'field_company_information';
  $handler->display->display_options['fields']['field_company_information_1']['ui_name'] = 'Institution';
  $handler->display->display_options['fields']['field_company_information_1']['label'] = '';
  $handler->display->display_options['fields']['field_company_information_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_company_information_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_company_information_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_company_information_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_company_information_1']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_company_information_1']['delta_offset'] = '0';
  /* Field: Institution location */
  $handler->display->display_options['fields']['field_company_information_2']['id'] = 'field_company_information_2';
  $handler->display->display_options['fields']['field_company_information_2']['table'] = 'field_data_field_company_information';
  $handler->display->display_options['fields']['field_company_information_2']['field'] = 'field_company_information';
  $handler->display->display_options['fields']['field_company_information_2']['ui_name'] = 'Institution location';
  $handler->display->display_options['fields']['field_company_information_2']['label'] = '';
  $handler->display->display_options['fields']['field_company_information_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_company_information_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_company_information_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_company_information_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_company_information_2']['settings'] = array(
    'view_mode' => 'paragraphs_editor_preview',
  );
  $handler->display->display_options['fields']['field_company_information_2']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h4>[title] [field_degree_information]<br>
[field_degree_information_1]</h4>
<p>[field_company_information]</p>
<p>[field_company_information_1]</p>
<p>[field_company_information_2]</p>';
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['preserve_tags'] = '<h4><p><br>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_center_target_id';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: Areas of impact: Related Faculty */
  $handler = $view->new_display('panel_pane', 'Areas of impact: Related Faculty', 'fac_impact_affiliations');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'taxonomy-associated-faculty';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_topics_target_id']['id'] = 'field_topics_target_id';
  $handler->display->display_options['relationships']['field_topics_target_id']['table'] = 'field_data_field_topics';
  $handler->display->display_options['relationships']['field_topics_target_id']['field'] = 'field_topics_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_topics_target_id';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'engineering_topics' => 'engineering_topics',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $export['department_center_impact_related_advisory_council_members'] = $view;

  $view = new view();
  $view->name = 'eng_events_related_departments_centers_and_impact';
  $view->description = 'Events showcasing departments, centers, and impact + Dept., centers, and areas of impact showcasing related events';
  $view->tag = 'Taxonomy views, Events';
  $view->base_table = 'node';
  $view->human_name = 'Events - Related departments, centers, and impact. ';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'department-center-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Event date and time -  start date (field_event_time) */
  $handler->display->display_options['sorts']['field_event_time_value']['id'] = 'field_event_time_value';
  $handler->display->display_options['sorts']['field_event_time_value']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['sorts']['field_event_time_value']['field'] = 'field_event_time_value';
  /* Contextual filter: Field: Areas of impact (field_topics) */
  $handler->display->display_options['arguments']['field_topics_target_id']['id'] = 'field_topics_target_id';
  $handler->display->display_options['arguments']['field_topics_target_id']['table'] = 'field_data_field_topics';
  $handler->display->display_options['arguments']['field_topics_target_id']['field'] = 'field_topics_target_id';
  $handler->display->display_options['arguments']['field_topics_target_id']['relationship'] = 'field_event_dept_center_target_id';
  $handler->display->display_options['arguments']['field_topics_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_topics_target_id']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_topics_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_topics_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_topics_target_id']['summary_options']['items_per_page'] = '25';
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
    'eng_events' => 'eng_events',
  );
  /* Filter criterion: Content: Event date and time -  start date (field_event_time) */
  $handler->display->display_options['filters']['field_event_time_value']['id'] = 'field_event_time_value';
  $handler->display->display_options['filters']['field_event_time_value']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['filters']['field_event_time_value']['field'] = 'field_event_time_value';
  $handler->display->display_options['filters']['field_event_time_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_event_time_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_event_time_value']['default_date'] = 'today';
  $handler->display->display_options['filters']['field_event_time_value']['default_to_date'] = '+100 days';

  /* Display: Departments: Related events */
  $handler = $view->new_display('panel_pane', 'Departments: Related events', 'dept_related_events');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Associated Events';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'events-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'engineering_departments' => 'engineering_departments',
    'scald_authors' => 0,
    'scald_tags' => 0,
    'affiliated_center' => 0,
    'affiliated_department' => 0,
    'engineering_centers' => 0,
    'committees' => 0,
    'council' => 0,
    'engineering_event_type' => 0,
    'faculty_research_specialties' => 0,
    'hashtag_terms' => 0,
    'engineering_impact' => 0,
    'interdisciplinary_programs' => 0,
    'engineering_interdisciplinary_research' => 0,
    'eng_news_partners' => 0,
    'engineering_news_type' => 0,
    'engineering_staff_tags' => 0,
    'student_status' => 0,
    'tags' => 0,
    'user_mention_terms' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'em';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit this event';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Month */
  $handler->display->display_options['fields']['field_event_time']['id'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['fields']['field_event_time']['field'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time']['ui_name'] = 'Month';
  $handler->display->display_options['fields']['field_event_time']['label'] = '';
  $handler->display->display_options['fields']['field_event_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_time']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'M',
    'fromto' => 'value',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_event_time']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_event_time']['delta_offset'] = '0';
  /* Field: Day */
  $handler->display->display_options['fields']['field_event_time_2']['id'] = 'field_event_time_2';
  $handler->display->display_options['fields']['field_event_time_2']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['fields']['field_event_time_2']['field'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time_2']['ui_name'] = 'Day';
  $handler->display->display_options['fields']['field_event_time_2']['label'] = '';
  $handler->display->display_options['fields']['field_event_time_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_time_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_time_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_time_2']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'd',
    'fromto' => 'value',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_event_time_2']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_time_2']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_event_time_2']['delta_offset'] = '0';
  /* Field: Time */
  $handler->display->display_options['fields']['field_event_time_1']['id'] = 'field_event_time_1';
  $handler->display->display_options['fields']['field_event_time_1']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['fields']['field_event_time_1']['field'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time_1']['ui_name'] = 'Time';
  $handler->display->display_options['fields']['field_event_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_time_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_time_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_time_1']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'g:i A',
    'fromto' => 'value',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_event_time_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_event_time_1']['delta_offset'] = '0';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['label'] = '';
  $handler->display->display_options['fields']['field_event_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_location']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_location']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_event_location']['click_sort_column'] = 'url';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<p class="event-date">
	<span class="month">[field_event_time]</span>
	<span class="day">[field_event_time_2]</span>
</p>
<div class="event-info">
	<h3>[title]</h3>
	<div class="time-location">
		<p><strong>Time:</strong> [field_event_time_1]</p>
		<p><strong>Location:</strong> [field_event_location]</p>
	</div>
	<p class="edit-button">[edit_node]</p>
</div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Event date and time -  start date (field_event_time) */
  $handler->display->display_options['sorts']['field_event_time_value']['id'] = 'field_event_time_value';
  $handler->display->display_options['sorts']['field_event_time_value']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['sorts']['field_event_time_value']['field'] = 'field_event_time_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: Centers: Related events */
  $handler = $view->new_display('panel_pane', 'Centers: Related events', 'center_related_events');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'events-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'engineering_centers' => 'engineering_centers',
    'scald_authors' => 0,
    'scald_tags' => 0,
    'affiliated_center' => 0,
    'affiliated_department' => 0,
    'committees' => 0,
    'council' => 0,
    'engineering_departments' => 0,
    'engineering_event_type' => 0,
    'faculty_research_specialties' => 0,
    'hashtag_terms' => 0,
    'engineering_impact' => 0,
    'interdisciplinary_programs' => 0,
    'engineering_interdisciplinary_research' => 0,
    'eng_news_partners' => 0,
    'engineering_news_type' => 0,
    'engineering_staff_tags' => 0,
    'student_status' => 0,
    'tags' => 0,
    'user_mention_terms' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'em';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit this event';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Month */
  $handler->display->display_options['fields']['field_event_time']['id'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['fields']['field_event_time']['field'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time']['ui_name'] = 'Month';
  $handler->display->display_options['fields']['field_event_time']['label'] = '';
  $handler->display->display_options['fields']['field_event_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_time']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_event_time']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'M',
    'fromto' => 'value',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_event_time']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_event_time']['delta_offset'] = '0';
  /* Field: Day */
  $handler->display->display_options['fields']['field_event_time_2']['id'] = 'field_event_time_2';
  $handler->display->display_options['fields']['field_event_time_2']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['fields']['field_event_time_2']['field'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time_2']['ui_name'] = 'Day';
  $handler->display->display_options['fields']['field_event_time_2']['label'] = '';
  $handler->display->display_options['fields']['field_event_time_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_time_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_time_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_time_2']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'd',
    'fromto' => 'value',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_event_time_2']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_time_2']['delta_offset'] = '0';
  /* Field: Time */
  $handler->display->display_options['fields']['field_event_time_1']['id'] = 'field_event_time_1';
  $handler->display->display_options['fields']['field_event_time_1']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['fields']['field_event_time_1']['field'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time_1']['ui_name'] = 'Time';
  $handler->display->display_options['fields']['field_event_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_time_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_time_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_time_1']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'g:i A',
    'fromto' => 'value',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_event_time_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_event_time_1']['delta_offset'] = '0';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['label'] = '';
  $handler->display->display_options['fields']['field_event_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_location']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_location']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_event_location']['click_sort_column'] = 'url';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<p class="event-date">
	<span class="month">[field_event_time]</span>
	<span class="day">[field_event_time_2]</span>
</p>
<div class="event-info">
	<h3>[title]</h3>
	<div class="time-location">
		<p><strong>Time:</strong> [field_event_time_1]</p>
		<p><strong>Location:</strong> [field_event_location]</p>
	</div>
	<p class="edit-button">[edit_node]</p>
</div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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
    'eng_events' => 'eng_events',
  );
  /* Filter criterion: Content: Event date and time -  start date (field_event_time) */
  $handler->display->display_options['filters']['field_event_time_value']['id'] = 'field_event_time_value';
  $handler->display->display_options['filters']['field_event_time_value']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['filters']['field_event_time_value']['field'] = 'field_event_time_value';
  $handler->display->display_options['filters']['field_event_time_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_event_time_value']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_event_time_value']['default_date'] = 'today';
  $handler->display->display_options['filters']['field_event_time_value']['default_to_date'] = '+100 days';

  /* Display: Areas of impact: Related events */
  $handler = $view->new_display('panel_pane', 'Areas of impact: Related events', 'impact_related_events');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Events';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'events-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_event_impact_target_id']['id'] = 'field_event_impact_target_id';
  $handler->display->display_options['relationships']['field_event_impact_target_id']['table'] = 'field_data_field_event_impact';
  $handler->display->display_options['relationships']['field_event_impact_target_id']['field'] = 'field_event_impact_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'em';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit this event';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Month */
  $handler->display->display_options['fields']['field_event_time']['id'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['fields']['field_event_time']['field'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time']['ui_name'] = 'Month';
  $handler->display->display_options['fields']['field_event_time']['label'] = '';
  $handler->display->display_options['fields']['field_event_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_time']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'M',
    'fromto' => 'value',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_event_time']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_event_time']['delta_offset'] = '0';
  /* Field: Day */
  $handler->display->display_options['fields']['field_event_time_2']['id'] = 'field_event_time_2';
  $handler->display->display_options['fields']['field_event_time_2']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['fields']['field_event_time_2']['field'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time_2']['ui_name'] = 'Day';
  $handler->display->display_options['fields']['field_event_time_2']['label'] = '';
  $handler->display->display_options['fields']['field_event_time_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_time_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_time_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_time_2']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'd',
    'fromto' => 'value2',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_event_time_2']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_time_2']['delta_offset'] = '0';
  /* Field: Time */
  $handler->display->display_options['fields']['field_event_time_1']['id'] = 'field_event_time_1';
  $handler->display->display_options['fields']['field_event_time_1']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['fields']['field_event_time_1']['field'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time_1']['ui_name'] = 'Time';
  $handler->display->display_options['fields']['field_event_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_time_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_time_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_time_1']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'g:i A',
    'fromto' => 'value',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_event_time_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_event_time_1']['delta_offset'] = '0';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['label'] = '';
  $handler->display->display_options['fields']['field_event_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_location']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_location']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_event_location']['click_sort_column'] = 'url';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<p class="event-date">
	<span class="month">[field_event_time]</span>
	<span class="day">[field_event_time_2]</span>
</p>
<div class="event-info">
	<h3>[title]</h3>
	<div class="time-location">
		<p><strong>Time:</strong> [field_event_time_1]</p>
		<p><strong>Location:</strong> [field_event_location]</p>
	</div>
	<p class="edit-button">[edit_node]</p>
</div>';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_event_impact_target_id';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: Events: Related department */
  $handler = $view->new_display('panel_pane', 'Events: Related department', 'events_related_dept');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'department-center-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_event_department_target_id']['id'] = 'field_event_department_target_id';
  $handler->display->display_options['relationships']['field_event_department_target_id']['table'] = 'field_data_field_event_department';
  $handler->display->display_options['relationships']['field_event_department_target_id']['field'] = 'field_event_department_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: TID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_event_department_target_id';
  $handler->display->display_options['fields']['tid']['ui_name'] = 'TID';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = FALSE;
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_event_department']['id'] = 'field_event_department';
  $handler->display->display_options['fields']['field_event_department']['table'] = 'field_data_field_event_department';
  $handler->display->display_options['fields']['field_event_department']['field'] = 'field_event_department';
  $handler->display->display_options['fields']['field_event_department']['label'] = '';
  $handler->display->display_options['fields']['field_event_department']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_department']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_event_department_target_id';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['description']['hide_empty'] = TRUE;
  /* Field: Learn more */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_event_department_target_id';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Learn more';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = 'Learn more';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['fields']['name']['convert_spaces'] = TRUE;
  /* Field: Field: Hero image */
  $handler->display->display_options['fields']['field_hero_img']['id'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['table'] = 'field_data_field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['field'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['relationship'] = 'field_event_department_target_id';
  $handler->display->display_options['fields']['field_hero_img']['label'] = '';
  $handler->display->display_options['fields']['field_hero_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hero_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hero_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hero_img']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="taxonomy-[tid]">
	<div class="department-center-item-info">
		<h3>[field_event_department]</h3>
		<p>[description]</p>
		<p class="learn-more-button">[name]</p>
	</div>
	<div class="department-center-item-image">
		<p>[field_hero_img]</p>
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_event_department_target_id';
  $handler->display->display_options['sorts']['name']['expose']['label'] = 'Name';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'eng_events' => 'eng_events',
  );

  /* Display: Events: Related centers */
  $handler = $view->new_display('panel_pane', 'Events: Related centers', 'events_related_ctr');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'department-center-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_event_center_target_id']['id'] = 'field_event_center_target_id';
  $handler->display->display_options['relationships']['field_event_center_target_id']['table'] = 'field_data_field_event_center';
  $handler->display->display_options['relationships']['field_event_center_target_id']['field'] = 'field_event_center_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: TID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_event_center_target_id';
  $handler->display->display_options['fields']['tid']['ui_name'] = 'TID';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = FALSE;
  /* Field: Content: Center */
  $handler->display->display_options['fields']['field_event_center']['id'] = 'field_event_center';
  $handler->display->display_options['fields']['field_event_center']['table'] = 'field_data_field_event_center';
  $handler->display->display_options['fields']['field_event_center']['field'] = 'field_event_center';
  $handler->display->display_options['fields']['field_event_center']['label'] = '';
  $handler->display->display_options['fields']['field_event_center']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_center']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_center']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_center']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_event_center_target_id';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['description']['hide_empty'] = TRUE;
  /* Field: Learn more */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_event_center_target_id';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Learn more';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = 'Learn more';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['fields']['name']['convert_spaces'] = TRUE;
  /* Field: Field: Hero image */
  $handler->display->display_options['fields']['field_hero_img']['id'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['table'] = 'field_data_field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['field'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['relationship'] = 'field_event_center_target_id';
  $handler->display->display_options['fields']['field_hero_img']['label'] = '';
  $handler->display->display_options['fields']['field_hero_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hero_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hero_img']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="taxonomy-[tid]">
	<div class="department-center-item-info">
		<h3>[field_event_center]</h3>
		<p>[description]</p>
		<p class="learn-more-button">[name]</p>
	</div>
	<div class="department-center-item-image">
		<p>[field_hero_img]</p>		
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_event_center_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'eng_events' => 'eng_events',
  );

  /* Display: Events: Areas of impact */
  $handler = $view->new_display('panel_pane', 'Events: Areas of impact', 'events_related_impact');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'impact-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_event_impact_target_id']['id'] = 'field_event_impact_target_id';
  $handler->display->display_options['relationships']['field_event_impact_target_id']['table'] = 'field_data_field_event_impact';
  $handler->display->display_options['relationships']['field_event_impact_target_id']['field'] = 'field_event_impact_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: TID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_event_impact_target_id';
  $handler->display->display_options['fields']['tid']['ui_name'] = 'TID';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = FALSE;
  /* Field: Impact name */
  $handler->display->display_options['fields']['field_event_impact']['id'] = 'field_event_impact';
  $handler->display->display_options['fields']['field_event_impact']['table'] = 'field_data_field_event_impact';
  $handler->display->display_options['fields']['field_event_impact']['field'] = 'field_event_impact';
  $handler->display->display_options['fields']['field_event_impact']['ui_name'] = 'Impact name';
  $handler->display->display_options['fields']['field_event_impact']['label'] = '';
  $handler->display->display_options['fields']['field_event_impact']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_impact']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_impact']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_impact']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_event_impact']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_impact']['delta_offset'] = '0';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_event_impact_target_id';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['element_default_classes'] = FALSE;
  /* Field: Learn more */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_event_impact_target_id';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Learn more';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = 'Learn more';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['fields']['name']['convert_spaces'] = TRUE;
  /* Field: Field: Hero image */
  $handler->display->display_options['fields']['field_hero_img']['id'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['table'] = 'field_data_field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['field'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['relationship'] = 'field_event_impact_target_id';
  $handler->display->display_options['fields']['field_hero_img']['label'] = '';
  $handler->display->display_options['fields']['field_hero_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hero_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hero_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hero_img']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="taxonomy-[tid]">
	<div class="impact-item-info">
		<h3>[field_event_impact]</h3>
		<p>[description]</p>
		<p class="learn-more-button">[name]</p>
	</div>
	<div class="impact-item-image">
		<p>[field_hero_img]</p>		
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_event_impact_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'eng_events' => 'eng_events',
  );
  $export['eng_events_related_departments_centers_and_impact'] = $view;

  $view = new view();
  $view->name = 'taxonomy_center_affiliations';
  $view->description = 'Centers showcasing related departments and areas of impact';
  $view->tag = 'Taxonomy views, Center';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Centers - Related departments and areas of impact';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'impact-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_eng_center_target_id']['id'] = 'field_eng_center_target_id';
  $handler->display->display_options['relationships']['field_eng_center_target_id']['table'] = 'field_data_field_eng_center';
  $handler->display->display_options['relationships']['field_eng_center_target_id']['field'] = 'field_eng_center_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_topics_target_id']['id'] = 'field_topics_target_id';
  $handler->display->display_options['relationships']['field_topics_target_id']['table'] = 'field_data_field_topics';
  $handler->display->display_options['relationships']['field_topics_target_id']['field'] = 'field_topics_target_id';
  /* Field: Field: Areas of impact */
  $handler->display->display_options['fields']['field_topics']['id'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['table'] = 'field_data_field_topics';
  $handler->display->display_options['fields']['field_topics']['field'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['label'] = '';
  $handler->display->display_options['fields']['field_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topics']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_topics']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_topics']['delta_offset'] = '0';
  /* Field: Taxonomy term: Departments */
  $handler->display->display_options['fields']['field_eng_department']['id'] = 'field_eng_department';
  $handler->display->display_options['fields']['field_eng_department']['table'] = 'field_data_field_eng_department';
  $handler->display->display_options['fields']['field_eng_department']['field'] = 'field_eng_department';
  $handler->display->display_options['fields']['field_eng_department']['label'] = '';
  $handler->display->display_options['fields']['field_eng_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_eng_department']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_eng_department']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_eng_department']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_eng_department']['delta_offset'] = '0';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'engineering_centers' => 'engineering_centers',
  );

  /* Display: Areas of impact */
  $handler = $view->new_display('panel_pane', 'Areas of impact', 'center_impact_affiliation');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_topics_target_id']['id'] = 'field_topics_target_id';
  $handler->display->display_options['relationships']['field_topics_target_id']['table'] = 'field_data_field_topics';
  $handler->display->display_options['relationships']['field_topics_target_id']['field'] = 'field_topics_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Areas of impact */
  $handler->display->display_options['fields']['field_topics']['id'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['table'] = 'field_data_field_topics';
  $handler->display->display_options['fields']['field_topics']['field'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['label'] = '';
  $handler->display->display_options['fields']['field_topics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_topics']['element_type'] = '0';
  $handler->display->display_options['fields']['field_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topics']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_topics']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_topics']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_topics']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_topics']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_topics']['multi_type'] = 'ul';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_topics_target_id';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_topics_target_id';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description']['element_type'] = '0';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['description']['element_default_classes'] = FALSE;
  /* Field: Learn more */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_topics_target_id';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Learn more';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = 'Learn more';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Field: Hero image */
  $handler->display->display_options['fields']['field_hero_img']['id'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['table'] = 'field_data_field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['field'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['relationship'] = 'field_topics_target_id';
  $handler->display->display_options['fields']['field_hero_img']['label'] = '';
  $handler->display->display_options['fields']['field_hero_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hero_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hero_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hero_img']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="taxonomy-[tid]">
	<div class="impact-item-info">
		<h3>[field_topics]</h3>
		<p>[description]</p>
<p class="learn-more-button">[name]</p>
	</div>
	<div class="impact-item-image">
		<p>[field_hero_img]</p>
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['order'] = 'DESC';

  /* Display: Departments */
  $handler = $view->new_display('panel_pane', 'Departments', 'department_affiliations');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_eng_department_target_id']['id'] = 'field_eng_department_target_id';
  $handler->display->display_options['relationships']['field_eng_department_target_id']['table'] = 'field_data_field_eng_department';
  $handler->display->display_options['relationships']['field_eng_department_target_id']['field'] = 'field_eng_department_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Departments */
  $handler->display->display_options['fields']['field_eng_department']['id'] = 'field_eng_department';
  $handler->display->display_options['fields']['field_eng_department']['table'] = 'field_data_field_eng_department';
  $handler->display->display_options['fields']['field_eng_department']['field'] = 'field_eng_department';
  $handler->display->display_options['fields']['field_eng_department']['label'] = '';
  $handler->display->display_options['fields']['field_eng_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_eng_department']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_eng_department']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_eng_department']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_eng_department']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_eng_department']['multi_type'] = 'ul';
  $export['taxonomy_center_affiliations'] = $view;

  $view = new view();
  $view->name = 'taxonomy_department_affiliations';
  $view->description = 'Departments showcasing related areas of impact and centers';
  $view->tag = 'Taxonomy views, Department';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Departments - Related centers and areas of impact';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'impact-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_eng_center_target_id']['id'] = 'field_eng_center_target_id';
  $handler->display->display_options['relationships']['field_eng_center_target_id']['table'] = 'field_data_field_eng_center';
  $handler->display->display_options['relationships']['field_eng_center_target_id']['field'] = 'field_eng_center_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_topics_target_id']['id'] = 'field_topics_target_id';
  $handler->display->display_options['relationships']['field_topics_target_id']['table'] = 'field_data_field_topics';
  $handler->display->display_options['relationships']['field_topics_target_id']['field'] = 'field_topics_target_id';
  /* Field: Field: Areas of impact */
  $handler->display->display_options['fields']['field_topics']['id'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['table'] = 'field_data_field_topics';
  $handler->display->display_options['fields']['field_topics']['field'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['label'] = '';
  $handler->display->display_options['fields']['field_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topics']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_topics']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_topics']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_topics']['delta_offset'] = '0';
  /* Field: Taxonomy term: Centers */
  $handler->display->display_options['fields']['field_eng_center']['id'] = 'field_eng_center';
  $handler->display->display_options['fields']['field_eng_center']['table'] = 'field_data_field_eng_center';
  $handler->display->display_options['fields']['field_eng_center']['field'] = 'field_eng_center';
  $handler->display->display_options['fields']['field_eng_center']['label'] = '';
  $handler->display->display_options['fields']['field_eng_center']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_eng_center']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_eng_center']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_eng_center']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_eng_center']['delta_offset'] = '0';
  /* Sort criterion: Field: Areas of impact (field_topics) */
  $handler->display->display_options['sorts']['field_topics_target_id']['id'] = 'field_topics_target_id';
  $handler->display->display_options['sorts']['field_topics_target_id']['table'] = 'field_data_field_topics';
  $handler->display->display_options['sorts']['field_topics_target_id']['field'] = 'field_topics_target_id';
  $handler->display->display_options['sorts']['field_topics_target_id']['order'] = 'DESC';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'engineering_departments' => 'engineering_departments',
  );

  /* Display: Areas of impact */
  $handler = $view->new_display('panel_pane', 'Areas of impact', 'dept_impact_affiliation');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_topics_target_id']['id'] = 'field_topics_target_id';
  $handler->display->display_options['relationships']['field_topics_target_id']['table'] = 'field_data_field_topics';
  $handler->display->display_options['relationships']['field_topics_target_id']['field'] = 'field_topics_target_id';
  $handler->display->display_options['relationships']['field_topics_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Areas of impact */
  $handler->display->display_options['fields']['field_topics']['id'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['table'] = 'field_data_field_topics';
  $handler->display->display_options['fields']['field_topics']['field'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['label'] = '';
  $handler->display->display_options['fields']['field_topics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topics']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_topics']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_topics']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_topics']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_topics']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_topics']['multi_type'] = 'ol';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_topics_target_id';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['description']['hide_empty'] = TRUE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_topics_target_id';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Learn more */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_topics_target_id';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Learn more';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = 'Learn more';
  $handler->display->display_options['fields']['name']['alter']['path'] = '/impact/[term]';
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Field: Hero image */
  $handler->display->display_options['fields']['field_hero_img']['id'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['table'] = 'field_data_field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['field'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['relationship'] = 'field_topics_target_id';
  $handler->display->display_options['fields']['field_hero_img']['label'] = '';
  $handler->display->display_options['fields']['field_hero_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hero_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hero_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hero_img']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="taxonomy-[tid]">
	<div class="impact-item-info">
		<h3>[field_topics]</h3>
		<p>[description]</p>
               <p class="learn-more-button">[name]</p>
	</div>
	<div class="impact-item-image">
		<p>[field_hero_img]</p>
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_topics_target_id';

  /* Display: Centers */
  $handler = $view->new_display('panel_pane', 'Centers', 'center_affiliations');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_eng_center_target_id']['id'] = 'field_eng_center_target_id';
  $handler->display->display_options['relationships']['field_eng_center_target_id']['table'] = 'field_data_field_eng_center';
  $handler->display->display_options['relationships']['field_eng_center_target_id']['field'] = 'field_eng_center_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Centers */
  $handler->display->display_options['fields']['field_eng_center']['id'] = 'field_eng_center';
  $handler->display->display_options['fields']['field_eng_center']['table'] = 'field_data_field_eng_center';
  $handler->display->display_options['fields']['field_eng_center']['field'] = 'field_eng_center';
  $handler->display->display_options['fields']['field_eng_center']['label'] = '';
  $handler->display->display_options['fields']['field_eng_center']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_eng_center']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_eng_center']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_eng_center']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_eng_center']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Centers (field_eng_center) */
  $handler->display->display_options['sorts']['field_eng_center_target_id']['id'] = 'field_eng_center_target_id';
  $handler->display->display_options['sorts']['field_eng_center_target_id']['table'] = 'field_data_field_eng_center';
  $handler->display->display_options['sorts']['field_eng_center_target_id']['field'] = 'field_eng_center_target_id';
  $export['taxonomy_department_affiliations'] = $view;

  $view = new view();
  $view->name = 'taxonomy_faculty_affiliations';
  $view->description = 'Department, Center, and Areas of Impacts showcasing related faculty';
  $view->tag = 'Taxonomy views, Faculty';
  $view->base_table = 'node';
  $view->human_name = 'Department, Center, Impact - Related faculty';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_topics_target_id']['id'] = 'field_topics_target_id';
  $handler->display->display_options['relationships']['field_topics_target_id']['table'] = 'field_data_field_topics';
  $handler->display->display_options['relationships']['field_topics_target_id']['field'] = 'field_topics_target_id';
  /* Field: Content: Profile photo */
  $handler->display->display_options['fields']['field_profile_photo']['id'] = 'field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['table'] = 'field_data_field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['field'] = 'field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['label'] = '';
  $handler->display->display_options['fields']['field_profile_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_photo']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_profile_photo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile_photo']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_profile_photo']['type'] = 'sdl_editor_representation';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Sort criterion: Name Components: Family */
  $handler->display->display_options['sorts']['field_name_family']['id'] = 'field_name_family';
  $handler->display->display_options['sorts']['field_name_family']['table'] = 'field_data_field_name';
  $handler->display->display_options['sorts']['field_name_family']['field'] = 'field_name_family';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_topics_target_id';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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

  /* Display: Areas of impact: Related Faculty */
  $handler = $view->new_display('panel_pane', 'Areas of impact: Related Faculty', 'fac_impact_affiliations');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'faculty-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_topics_target_id']['id'] = 'field_topics_target_id';
  $handler->display->display_options['relationships']['field_topics_target_id']['table'] = 'field_data_field_topics';
  $handler->display->display_options['relationships']['field_topics_target_id']['field'] = 'field_topics_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'em';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Info';
  /* Field: Content: Profile photo */
  $handler->display->display_options['fields']['field_profile_photo']['id'] = 'field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['table'] = 'field_data_field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['field'] = 'field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['label'] = '';
  $handler->display->display_options['fields']['field_profile_photo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_photo']['element_type'] = '0';
  $handler->display->display_options['fields']['field_profile_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_photo']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_profile_photo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile_photo']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_profile_photo']['type'] = 'sdl_editor_representation';
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
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Primary affiliations */
  $handler->display->display_options['fields']['field_primary_affiliations']['id'] = 'field_primary_affiliations';
  $handler->display->display_options['fields']['field_primary_affiliations']['table'] = 'field_data_field_primary_affiliations';
  $handler->display->display_options['fields']['field_primary_affiliations']['field'] = 'field_primary_affiliations';
  $handler->display->display_options['fields']['field_primary_affiliations']['label'] = '';
  $handler->display->display_options['fields']['field_primary_affiliations']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_primary_affiliations']['element_type'] = '0';
  $handler->display->display_options['fields']['field_primary_affiliations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_primary_affiliations']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_primary_affiliations']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_primary_affiliations']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_primary_affiliations']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_primary_affiliations']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_profile_photo]
<h3>[title]</h3>
<p>[field_primary_affiliations]</p>
<p class="edit-button">[edit_node]</p>';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_topics_target_id';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'engineering_topics' => 'engineering_topics',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: Dept: Primary faculty */
  $handler = $view->new_display('panel_pane', 'Dept: Primary faculty', 'fac_dept');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'faculty-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_primary_affiliations_target_id']['id'] = 'field_primary_affiliations_target_id';
  $handler->display->display_options['relationships']['field_primary_affiliations_target_id']['table'] = 'field_data_field_primary_affiliations';
  $handler->display->display_options['relationships']['field_primary_affiliations_target_id']['field'] = 'field_primary_affiliations_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'em';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit this content';
  /* Field: Content: Profile photo */
  $handler->display->display_options['fields']['field_profile_photo']['id'] = 'field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['table'] = 'field_data_field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['field'] = 'field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['label'] = '';
  $handler->display->display_options['fields']['field_profile_photo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_photo']['element_type'] = '0';
  $handler->display->display_options['fields']['field_profile_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_photo']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_profile_photo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile_photo']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_profile_photo']['type'] = 'sdl_editor_representation';
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
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Primary affiliations */
  $handler->display->display_options['fields']['field_primary_affiliations']['id'] = 'field_primary_affiliations';
  $handler->display->display_options['fields']['field_primary_affiliations']['table'] = 'field_data_field_primary_affiliations';
  $handler->display->display_options['fields']['field_primary_affiliations']['field'] = 'field_primary_affiliations';
  $handler->display->display_options['fields']['field_primary_affiliations']['label'] = '';
  $handler->display->display_options['fields']['field_primary_affiliations']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_primary_affiliations']['element_type'] = '0';
  $handler->display->display_options['fields']['field_primary_affiliations']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_primary_affiliations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_primary_affiliations']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_primary_affiliations']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_primary_affiliations']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_primary_affiliations']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_profile_photo]
<h3>[title]</h3>
<p>[field_primary_affiliations]</p>';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_primary_affiliations_target_id';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: Center: Primary faculty */
  $handler = $view->new_display('panel_pane', 'Center: Primary faculty', 'fac_center');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'faculty-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'engineering_centers' => 'engineering_centers',
    'scald_authors' => 0,
    'scald_tags' => 0,
    'engineering_departments' => 0,
    'affiliated_department' => 0,
    'affiliated_center' => 0,
    'committees' => 0,
    'council' => 0,
    'engineering_event_type' => 0,
    'faculty_research_specialties' => 0,
    'hashtag_terms' => 0,
    'engineering_news_type' => 0,
    'engineering_impact' => 0,
    'interdisciplinary_programs' => 0,
    'engineering_interdisciplinary_research' => 0,
    'eng_news_partners' => 0,
    'engineering_staff_tags' => 0,
    'student_status' => 0,
    'tags' => 0,
    'user_mention_terms' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'em';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit this content';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  /* Field: Content: Profile photo */
  $handler->display->display_options['fields']['field_profile_photo']['id'] = 'field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['table'] = 'field_data_field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['field'] = 'field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['label'] = '';
  $handler->display->display_options['fields']['field_profile_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_photo']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_profile_photo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile_photo']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_profile_photo']['type'] = 'sdl_editor_representation';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Primary affiliations */
  $handler->display->display_options['fields']['field_primary_affiliations']['id'] = 'field_primary_affiliations';
  $handler->display->display_options['fields']['field_primary_affiliations']['table'] = 'field_data_field_primary_affiliations';
  $handler->display->display_options['fields']['field_primary_affiliations']['field'] = 'field_primary_affiliations';
  $handler->display->display_options['fields']['field_primary_affiliations']['label'] = '';
  $handler->display->display_options['fields']['field_primary_affiliations']['element_type'] = '0';
  $handler->display->display_options['fields']['field_primary_affiliations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_primary_affiliations']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_primary_affiliations']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_primary_affiliations']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_primary_affiliations']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_primary_affiliations']['delta_offset'] = '0';
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_non_eng_department']['id'] = 'field_non_eng_department';
  $handler->display->display_options['fields']['field_non_eng_department']['table'] = 'field_data_field_non_eng_department';
  $handler->display->display_options['fields']['field_non_eng_department']['field'] = 'field_non_eng_department';
  $handler->display->display_options['fields']['field_non_eng_department']['label'] = '';
  $handler->display->display_options['fields']['field_non_eng_department']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_non_eng_department']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_non_eng_department']['alter']['path'] = 'affiliate-departments/[field_non_eng_department]';
  $handler->display->display_options['fields']['field_non_eng_department']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_non_eng_department']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_non_eng_department']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_non_eng_department']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_non_eng_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_non_eng_department']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_non_eng_department']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['label'] = '';
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_website']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website']['type'] = 'link_plain';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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
    'non_engineering_faculty' => 'non_engineering_faculty',
  );

  /* Display: Dept + Center: Affiliated faculty */
  $handler = $view->new_display('panel_pane', 'Dept + Center: Affiliated faculty', 'fac_aff_dept_center');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'faculty-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_other_affiliations_target_id']['id'] = 'field_other_affiliations_target_id';
  $handler->display->display_options['relationships']['field_other_affiliations_target_id']['table'] = 'field_data_field_other_affiliations';
  $handler->display->display_options['relationships']['field_other_affiliations_target_id']['field'] = 'field_other_affiliations_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'em';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit this content';
  /* Field: Content: Profile photo */
  $handler->display->display_options['fields']['field_profile_photo']['id'] = 'field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['table'] = 'field_data_field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['field'] = 'field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['label'] = '';
  $handler->display->display_options['fields']['field_profile_photo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_photo']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_profile_photo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile_photo']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_profile_photo']['type'] = 'sdl_editor_representation';
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
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Primary affiliations */
  $handler->display->display_options['fields']['field_primary_affiliations']['id'] = 'field_primary_affiliations';
  $handler->display->display_options['fields']['field_primary_affiliations']['table'] = 'field_data_field_primary_affiliations';
  $handler->display->display_options['fields']['field_primary_affiliations']['field'] = 'field_primary_affiliations';
  $handler->display->display_options['fields']['field_primary_affiliations']['label'] = '';
  $handler->display->display_options['fields']['field_primary_affiliations']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_primary_affiliations']['element_type'] = '0';
  $handler->display->display_options['fields']['field_primary_affiliations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_primary_affiliations']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_primary_affiliations']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_primary_affiliations']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_primary_affiliations']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_primary_affiliations']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_profile_photo]
<h3>[title]</h3>
<p>[field_primary_affiliations]</p>';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_other_affiliations_target_id';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: Research areas: Related Faculty */
  $handler = $view->new_display('panel_pane', 'Research areas: Related Faculty', 'fac_research_affiliations');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'faculty-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_research_specialization_target_id']['id'] = 'field_research_specialization_target_id';
  $handler->display->display_options['relationships']['field_research_specialization_target_id']['table'] = 'field_data_field_research_specialization';
  $handler->display->display_options['relationships']['field_research_specialization_target_id']['field'] = 'field_research_specialization_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'em';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit this content';
  /* Field: Content: Profile photo */
  $handler->display->display_options['fields']['field_profile_photo']['id'] = 'field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['table'] = 'field_data_field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['field'] = 'field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['label'] = '';
  $handler->display->display_options['fields']['field_profile_photo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_photo']['element_type'] = '0';
  $handler->display->display_options['fields']['field_profile_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_photo']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_profile_photo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile_photo']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_profile_photo']['type'] = 'sdl_editor_representation';
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
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Primary affiliations */
  $handler->display->display_options['fields']['field_primary_affiliations']['id'] = 'field_primary_affiliations';
  $handler->display->display_options['fields']['field_primary_affiliations']['table'] = 'field_data_field_primary_affiliations';
  $handler->display->display_options['fields']['field_primary_affiliations']['field'] = 'field_primary_affiliations';
  $handler->display->display_options['fields']['field_primary_affiliations']['label'] = '';
  $handler->display->display_options['fields']['field_primary_affiliations']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_primary_affiliations']['element_type'] = '0';
  $handler->display->display_options['fields']['field_primary_affiliations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_primary_affiliations']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_primary_affiliations']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_primary_affiliations']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_primary_affiliations']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_primary_affiliations']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_profile_photo]
<h3>[title]</h3>
<p>[field_primary_affiliations]</p>';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_research_specialization_target_id';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'engineering_interdisciplinary_research' => 'engineering_interdisciplinary_research',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: Center eng faculty */
  $handler = $view->new_display('panel_pane', 'Center eng faculty', 'eng_fac_center');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'faculty-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'engineering_centers' => 'engineering_centers',
    'scald_authors' => 0,
    'scald_tags' => 0,
    'engineering_departments' => 0,
    'affiliated_department' => 0,
    'affiliated_center' => 0,
    'committees' => 0,
    'council' => 0,
    'engineering_event_type' => 0,
    'faculty_research_specialties' => 0,
    'hashtag_terms' => 0,
    'engineering_news_type' => 0,
    'engineering_impact' => 0,
    'interdisciplinary_programs' => 0,
    'engineering_interdisciplinary_research' => 0,
    'eng_news_partners' => 0,
    'engineering_staff_tags' => 0,
    'student_status' => 0,
    'tags' => 0,
    'user_mention_terms' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'em';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit this content';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  /* Field: Content: Profile photo */
  $handler->display->display_options['fields']['field_profile_photo']['id'] = 'field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['table'] = 'field_data_field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['field'] = 'field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['label'] = '';
  $handler->display->display_options['fields']['field_profile_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_photo']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_profile_photo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile_photo']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_profile_photo']['type'] = 'sdl_editor_representation';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Primary affiliations */
  $handler->display->display_options['fields']['field_primary_affiliations']['id'] = 'field_primary_affiliations';
  $handler->display->display_options['fields']['field_primary_affiliations']['table'] = 'field_data_field_primary_affiliations';
  $handler->display->display_options['fields']['field_primary_affiliations']['field'] = 'field_primary_affiliations';
  $handler->display->display_options['fields']['field_primary_affiliations']['label'] = '';
  $handler->display->display_options['fields']['field_primary_affiliations']['element_type'] = '0';
  $handler->display->display_options['fields']['field_primary_affiliations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_primary_affiliations']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_primary_affiliations']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_primary_affiliations']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_primary_affiliations']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_primary_affiliations']['delta_offset'] = '0';
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['label'] = '';
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_website']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website']['type'] = 'link_plain';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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

  /* Display: Center non-eng faculty */
  $handler = $view->new_display('panel_pane', 'Center non-eng faculty', 'non_eng_fac_center');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'faculty-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'engineering_centers' => 'engineering_centers',
    'scald_authors' => 0,
    'scald_tags' => 0,
    'engineering_departments' => 0,
    'affiliated_department' => 0,
    'affiliated_center' => 0,
    'committees' => 0,
    'council' => 0,
    'engineering_event_type' => 0,
    'faculty_research_specialties' => 0,
    'hashtag_terms' => 0,
    'engineering_news_type' => 0,
    'engineering_impact' => 0,
    'interdisciplinary_programs' => 0,
    'engineering_interdisciplinary_research' => 0,
    'eng_news_partners' => 0,
    'engineering_staff_tags' => 0,
    'student_status' => 0,
    'tags' => 0,
    'user_mention_terms' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'em';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit this content';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  /* Field: Content: Profile photo */
  $handler->display->display_options['fields']['field_profile_photo']['id'] = 'field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['table'] = 'field_data_field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['field'] = 'field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['label'] = '';
  $handler->display->display_options['fields']['field_profile_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_photo']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_profile_photo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile_photo']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_profile_photo']['type'] = 'sdl_editor_representation';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Primary affiliations */
  $handler->display->display_options['fields']['field_primary_affiliations']['id'] = 'field_primary_affiliations';
  $handler->display->display_options['fields']['field_primary_affiliations']['table'] = 'field_data_field_primary_affiliations';
  $handler->display->display_options['fields']['field_primary_affiliations']['field'] = 'field_primary_affiliations';
  $handler->display->display_options['fields']['field_primary_affiliations']['label'] = '';
  $handler->display->display_options['fields']['field_primary_affiliations']['element_type'] = '0';
  $handler->display->display_options['fields']['field_primary_affiliations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_primary_affiliations']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_primary_affiliations']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_primary_affiliations']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_primary_affiliations']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_primary_affiliations']['delta_offset'] = '0';
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['label'] = '';
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_website']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website']['type'] = 'link_plain';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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
    'non_engineering_faculty' => 'non_engineering_faculty',
  );
  $export['taxonomy_faculty_affiliations'] = $view;

  $view = new view();
  $view->name = 'taxonomy_news_affiliations';
  $view->description = 'Stories showcasing departments, centers, and impact + Dept., centers, and areas of impact showcasing related news.';
  $view->tag = 'Taxonomy views, News';
  $view->base_table = 'node';
  $view->human_name = 'News story - Related departments, centers, and impact. ';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'taxonomy-associated-news';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Publish date (field_publish_date) */
  $handler->display->display_options['sorts']['field_publish_date_value']['id'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['sorts']['field_publish_date_value']['field'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['order'] = 'DESC';
  /* Contextual filter: Field: Areas of impact (field_topics) */
  $handler->display->display_options['arguments']['field_topics_target_id']['id'] = 'field_topics_target_id';
  $handler->display->display_options['arguments']['field_topics_target_id']['table'] = 'field_data_field_topics';
  $handler->display->display_options['arguments']['field_topics_target_id']['field'] = 'field_topics_target_id';
  $handler->display->display_options['arguments']['field_topics_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_topics_target_id']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_topics_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_topics_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_topics_target_id']['summary_options']['items_per_page'] = '25';
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
    'news' => 'news',
  );

  /* Display: Departments: Related news */
  $handler = $view->new_display('panel_pane', 'Departments: Related news', 'dept_related_news');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'news-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_department_target_id']['id'] = 'field_department_target_id';
  $handler->display->display_options['relationships']['field_department_target_id']['table'] = 'field_data_field_department';
  $handler->display->display_options['relationships']['field_department_target_id']['field'] = 'field_department_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'em';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit this story';
  /* Field: Field: Hero image */
  $handler->display->display_options['fields']['field_hero_img']['id'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['table'] = 'field_data_field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['field'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['label'] = '';
  $handler->display->display_options['fields']['field_hero_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hero_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hero_img']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_hero_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hero_img']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
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
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Field: Areas of impact */
  $handler->display->display_options['fields']['field_topics']['id'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['table'] = 'field_data_field_topics';
  $handler->display->display_options['fields']['field_topics']['field'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['label'] = '';
  $handler->display->display_options['fields']['field_topics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topics']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_topics']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_topics']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_topics']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_topics']['separator'] = ' ';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="[field_topics]">
<p>[field_hero_img]</p>
<h3>[title]</h3>
<p class="edit-button"> [edit_node]</p>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_department_target_id';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Centers: Related news */
  $handler = $view->new_display('panel_pane', 'Centers: Related news', 'ctr_related_news');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'news-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_center_target_id']['id'] = 'field_center_target_id';
  $handler->display->display_options['relationships']['field_center_target_id']['table'] = 'field_data_field_center';
  $handler->display->display_options['relationships']['field_center_target_id']['field'] = 'field_center_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'em';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit this story';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Field: Areas of impact */
  $handler->display->display_options['fields']['field_topics']['id'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['table'] = 'field_data_field_topics';
  $handler->display->display_options['fields']['field_topics']['field'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['label'] = '';
  $handler->display->display_options['fields']['field_topics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topics']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_topics']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_topics']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_topics']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_topics']['separator'] = ' ';
  /* Field: Field: Hero image */
  $handler->display->display_options['fields']['field_hero_img']['id'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['table'] = 'field_data_field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['field'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['label'] = '';
  $handler->display->display_options['fields']['field_hero_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hero_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hero_img']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_hero_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hero_img']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="[field_topics]">
<p>[field_hero_img]</p>
<h3>[title]</h3>
<p class="edit-button"> [edit_node]</p>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_center_target_id';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Areas of impact: Related News */
  $handler = $view->new_display('panel_pane', 'Areas of impact: Related News', 'impact_related_news');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'news-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_topics_target_id']['id'] = 'field_topics_target_id';
  $handler->display->display_options['relationships']['field_topics_target_id']['table'] = 'field_data_field_topics';
  $handler->display->display_options['relationships']['field_topics_target_id']['field'] = 'field_topics_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'em';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit this story';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Field: Hero image */
  $handler->display->display_options['fields']['field_hero_img']['id'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['table'] = 'field_data_field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['field'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['label'] = '';
  $handler->display->display_options['fields']['field_hero_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hero_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hero_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hero_img']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="[field_topics]">
<p>[field_hero_img]</p>
<h3>[title]</h3>
<p class="edit-button"> [edit_node]</p>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_topics_target_id';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: News: Related departments */
  $handler = $view->new_display('panel_pane', 'News: Related departments', 'news_related_dept');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'department-center-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_department_target_id']['id'] = 'field_department_target_id';
  $handler->display->display_options['relationships']['field_department_target_id']['table'] = 'field_data_field_department';
  $handler->display->display_options['relationships']['field_department_target_id']['field'] = 'field_department_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: TID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_department_target_id';
  $handler->display->display_options['fields']['tid']['ui_name'] = 'TID';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['tid']['hide_empty'] = TRUE;
  /* Field: Content: Department affiliations */
  $handler->display->display_options['fields']['field_department']['id'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department']['field'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['label'] = '';
  $handler->display->display_options['fields']['field_department']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_department']['element_type'] = '0';
  $handler->display->display_options['fields']['field_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_department']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_department']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_department']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_department']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_department']['delta_offset'] = '0';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_department_target_id';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['description']['hide_empty'] = TRUE;
  /* Field: Learn more */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_department_target_id';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Learn more';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = 'Learn more';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Field: Hero image */
  $handler->display->display_options['fields']['field_hero_img']['id'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['table'] = 'field_data_field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['field'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['relationship'] = 'field_department_target_id';
  $handler->display->display_options['fields']['field_hero_img']['label'] = '';
  $handler->display->display_options['fields']['field_hero_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hero_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hero_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hero_img']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="taxonomy-[tid]">
	<div class="department-center-item-info">
		<h3>[field_department]</h3>
		<p>[description]</p>
<p class="learn-more-button">[name]</p>
	</div>
	<div class="department-center-item-image">
		<p>[field_hero_img]</p>		
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Departments (field_eng_department) */
  $handler->display->display_options['sorts']['field_eng_department_target_id']['id'] = 'field_eng_department_target_id';
  $handler->display->display_options['sorts']['field_eng_department_target_id']['table'] = 'field_data_field_eng_department';
  $handler->display->display_options['sorts']['field_eng_department_target_id']['field'] = 'field_eng_department_target_id';
  $handler->display->display_options['sorts']['field_eng_department_target_id']['relationship'] = 'field_department_target_id';
  $handler->display->display_options['sorts']['field_eng_department_target_id']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: News: Related centers */
  $handler = $view->new_display('panel_pane', 'News: Related centers', 'news_related_ctr');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'department-center-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_center_target_id']['id'] = 'field_center_target_id';
  $handler->display->display_options['relationships']['field_center_target_id']['table'] = 'field_data_field_center';
  $handler->display->display_options['relationships']['field_center_target_id']['field'] = 'field_center_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_center_target_id';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = FALSE;
  /* Field: Content: Center affiliations */
  $handler->display->display_options['fields']['field_center']['id'] = 'field_center';
  $handler->display->display_options['fields']['field_center']['table'] = 'field_data_field_center';
  $handler->display->display_options['fields']['field_center']['field'] = 'field_center';
  $handler->display->display_options['fields']['field_center']['label'] = '';
  $handler->display->display_options['fields']['field_center']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_center']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_center']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_center']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_center']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_center']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_center']['delta_offset'] = '0';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_center_target_id';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['description']['hide_empty'] = TRUE;
  /* Field: Learn more */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_center_target_id';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Learn more';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = 'Learn more';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Field: Hero image */
  $handler->display->display_options['fields']['field_hero_img']['id'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['table'] = 'field_data_field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['field'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['relationship'] = 'field_center_target_id';
  $handler->display->display_options['fields']['field_hero_img']['label'] = '';
  $handler->display->display_options['fields']['field_hero_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hero_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hero_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hero_img']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="taxonomy-[tid]">
	<div class="department-center-item-info">
		<h3>[field_center]</h3>
		<p>[description]</p>
<p class="learn-more-button">[name]</p>
	</div>
	<div class="department-center-item-image">
		<p>[field_hero_img]</p>		
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Centers (field_eng_center) */
  $handler->display->display_options['sorts']['field_eng_center_target_id']['id'] = 'field_eng_center_target_id';
  $handler->display->display_options['sorts']['field_eng_center_target_id']['table'] = 'field_data_field_eng_center';
  $handler->display->display_options['sorts']['field_eng_center_target_id']['field'] = 'field_eng_center_target_id';
  $handler->display->display_options['sorts']['field_eng_center_target_id']['relationship'] = 'field_center_target_id';
  $handler->display->display_options['sorts']['field_eng_center_target_id']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: News: Areas of impact */
  $handler = $view->new_display('panel_pane', 'News: Areas of impact', 'news_related_impact');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'impact-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_topics_target_id']['id'] = 'field_topics_target_id';
  $handler->display->display_options['relationships']['field_topics_target_id']['table'] = 'field_data_field_topics';
  $handler->display->display_options['relationships']['field_topics_target_id']['field'] = 'field_topics_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_topics_target_id';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = FALSE;
  /* Field: Field: Areas of impact */
  $handler->display->display_options['fields']['field_topics']['id'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['table'] = 'field_data_field_topics';
  $handler->display->display_options['fields']['field_topics']['field'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['label'] = '';
  $handler->display->display_options['fields']['field_topics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topics']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_topics']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_topics']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_topics']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_topics']['delta_offset'] = '0';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_topics_target_id';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['description']['hide_empty'] = TRUE;
  /* Field: Learn more */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_topics_target_id';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Learn more';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = 'Learn more';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Field: Hero image */
  $handler->display->display_options['fields']['field_hero_img']['id'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['table'] = 'field_data_field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['field'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['relationship'] = 'field_topics_target_id';
  $handler->display->display_options['fields']['field_hero_img']['label'] = '';
  $handler->display->display_options['fields']['field_hero_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hero_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hero_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hero_img']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="taxonomy-[tid]">
	<div class="impact-item-info">
		<h3>[field_topics]</h3>
		<p>[description]</p>
<p class="learn-more-button">[name]</p>
	</div>
	<div class="impact-item-image">
		<p>[field_hero_img]</p>		
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Areas of impact (field_topics) */
  $handler->display->display_options['sorts']['field_topics_target_id']['id'] = 'field_topics_target_id';
  $handler->display->display_options['sorts']['field_topics_target_id']['table'] = 'field_data_field_topics';
  $handler->display->display_options['sorts']['field_topics_target_id']['field'] = 'field_topics_target_id';
  $handler->display->display_options['sorts']['field_topics_target_id']['relationship'] = 'field_topics_target_id';
  $handler->display->display_options['sorts']['field_topics_target_id']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $export['taxonomy_news_affiliations'] = $view;

  $view = new view();
  $view->name = 'taxonomy_topic_affiliations';
  $view->description = 'Areas of Impact showcasing related departments and centers.';
  $view->tag = 'Taxonomy views, Impact';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Impact - Related departments and centers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'department-center-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_eng_department_target_id']['id'] = 'field_eng_department_target_id';
  $handler->display->display_options['relationships']['field_eng_department_target_id']['table'] = 'field_data_field_eng_department';
  $handler->display->display_options['relationships']['field_eng_department_target_id']['field'] = 'field_eng_department_target_id';
  /* Field: Taxonomy term: Departments */
  $handler->display->display_options['fields']['field_eng_department']['id'] = 'field_eng_department';
  $handler->display->display_options['fields']['field_eng_department']['table'] = 'field_data_field_eng_department';
  $handler->display->display_options['fields']['field_eng_department']['field'] = 'field_eng_department';
  $handler->display->display_options['fields']['field_eng_department']['label'] = '';
  $handler->display->display_options['fields']['field_eng_department']['element_type'] = '0';
  $handler->display->display_options['fields']['field_eng_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_eng_department']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_eng_department']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_eng_department']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_eng_department']['delta_offset'] = '0';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'engineering_impact' => 'engineering_impact',
  );

  /* Display: Impact: Related department */
  $handler = $view->new_display('panel_pane', 'Impact: Related department', 'impact_related_dept');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_eng_department_target_id']['id'] = 'field_eng_department_target_id';
  $handler->display->display_options['relationships']['field_eng_department_target_id']['table'] = 'field_data_field_eng_department';
  $handler->display->display_options['relationships']['field_eng_department_target_id']['field'] = 'field_eng_department_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Departments */
  $handler->display->display_options['fields']['field_eng_department']['id'] = 'field_eng_department';
  $handler->display->display_options['fields']['field_eng_department']['table'] = 'field_data_field_eng_department';
  $handler->display->display_options['fields']['field_eng_department']['field'] = 'field_eng_department';
  $handler->display->display_options['fields']['field_eng_department']['label'] = '';
  $handler->display->display_options['fields']['field_eng_department']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_eng_department']['element_type'] = '0';
  $handler->display->display_options['fields']['field_eng_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_eng_department']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_eng_department']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_eng_department']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_eng_department']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_eng_department']['delta_offset'] = '0';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_eng_department_target_id';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['text'] = '[tid]';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = FALSE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_eng_department_target_id';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description']['element_type'] = '0';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['description']['hide_empty'] = TRUE;
  /* Field: Learn more */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_eng_department_target_id';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Learn more';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = 'Learn more';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Field: Hero image */
  $handler->display->display_options['fields']['field_hero_img']['id'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['table'] = 'field_data_field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['field'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['relationship'] = 'field_eng_department_target_id';
  $handler->display->display_options['fields']['field_hero_img']['label'] = '';
  $handler->display->display_options['fields']['field_hero_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hero_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hero_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hero_img']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="taxonomy-[tid]" >
	<div class="department-center-item-info">
		<h3>[field_eng_department]</h3>
		<p>[description]</p>
		<p class="learn-more-button">[name]</p>
	</div>
	<div class="department-center-item-image">
		<p>[field_hero_img]</p>
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Departments (field_eng_department) */
  $handler->display->display_options['sorts']['field_eng_department_target_id']['id'] = 'field_eng_department_target_id';
  $handler->display->display_options['sorts']['field_eng_department_target_id']['table'] = 'field_data_field_eng_department';
  $handler->display->display_options['sorts']['field_eng_department_target_id']['field'] = 'field_eng_department_target_id';
  $handler->display->display_options['sorts']['field_eng_department_target_id']['relationship'] = 'field_eng_department_target_id';
  $handler->display->display_options['sorts']['field_eng_department_target_id']['order'] = 'DESC';

  /* Display: Impact: Related center */
  $handler = $view->new_display('panel_pane', 'Impact: Related center', 'impact_related_ctr');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_eng_center_target_id']['id'] = 'field_eng_center_target_id';
  $handler->display->display_options['relationships']['field_eng_center_target_id']['table'] = 'field_data_field_eng_center';
  $handler->display->display_options['relationships']['field_eng_center_target_id']['field'] = 'field_eng_center_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Centers */
  $handler->display->display_options['fields']['field_eng_center']['id'] = 'field_eng_center';
  $handler->display->display_options['fields']['field_eng_center']['table'] = 'field_data_field_eng_center';
  $handler->display->display_options['fields']['field_eng_center']['field'] = 'field_eng_center';
  $handler->display->display_options['fields']['field_eng_center']['label'] = '';
  $handler->display->display_options['fields']['field_eng_center']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_eng_center']['element_type'] = '0';
  $handler->display->display_options['fields']['field_eng_center']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_eng_center']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_eng_center']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_eng_center']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_eng_center']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_eng_center']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_eng_center']['delta_offset'] = '0';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_eng_center_target_id';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = FALSE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_eng_center_target_id';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description']['element_type'] = '0';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['description']['hide_empty'] = TRUE;
  /* Field: Learn more */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_eng_center_target_id';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Learn more';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = 'Learn more';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Field: Hero image */
  $handler->display->display_options['fields']['field_hero_img']['id'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['table'] = 'field_data_field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['field'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['relationship'] = 'field_eng_center_target_id';
  $handler->display->display_options['fields']['field_hero_img']['label'] = '';
  $handler->display->display_options['fields']['field_hero_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hero_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hero_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hero_img']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="[tid]">
	<div class="department-center-item-info">
		<h3>[field_eng_center]</h3>
		<p>[description]</p>
		<p class="learn-more-button">[name]</p>
	</div>
	<div class="department-center-item-image">
		<p>[field_hero_img]</p>		
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Centers (field_eng_center) */
  $handler->display->display_options['sorts']['field_eng_center_target_id']['id'] = 'field_eng_center_target_id';
  $handler->display->display_options['sorts']['field_eng_center_target_id']['table'] = 'field_data_field_eng_center';
  $handler->display->display_options['sorts']['field_eng_center_target_id']['field'] = 'field_eng_center_target_id';
  $handler->display->display_options['sorts']['field_eng_center_target_id']['order'] = 'DESC';
  $export['taxonomy_topic_affiliations'] = $view;

  return $export;
}
