<?php
/**
 * @file
 * eng_tv_displays_and_posters.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function eng_tv_displays_and_posters_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'tv_displays';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'TV displays';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'poster';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Featured image */
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
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<p>[field_hero_img]</p>';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
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
    'poster' => 'poster',
  );

  /* Display: ACE */
  $handler = $view->new_display('panel_pane', 'ACE', 'display_ace');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Featured image */
  $handler->display->display_options['fields']['field_hero_img']['id'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['table'] = 'field_data_field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['field'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['label'] = '';
  $handler->display->display_options['fields']['field_hero_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hero_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_img']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_hero_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hero_img']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="poster">
	<p>[field_hero_img]</p>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
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
    'poster' => 'poster',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    566 => '566',
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'televisions';

  /* Display: Friend Center */
  $handler = $view->new_display('panel_pane', 'Friend Center', 'display_friend');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Featured image */
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
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="poster">
	<p>[field_hero_img]</p>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
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
    'poster' => 'poster',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    564 => '564',
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'televisions';

  /* Display: Lobby */
  $handler = $view->new_display('panel_pane', 'Lobby', 'display_lobby');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Featured image */
  $handler->display->display_options['fields']['field_hero_img']['id'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['table'] = 'field_data_field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['field'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['label'] = '';
  $handler->display->display_options['fields']['field_hero_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hero_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_img']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_hero_img']['element_wrapper_class'] = 'test';
  $handler->display->display_options['fields']['field_hero_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hero_img']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<p>[field_hero_img]</p>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
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
    'poster' => 'poster',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    563 => '563',
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'televisions';

  /* Display: MAE */
  $handler = $view->new_display('panel_pane', 'MAE', 'display_mae');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Featured image */
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
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="poster">
	<p>[field_hero_img]</p>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
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
    'poster' => 'poster',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    565 => '565',
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'televisions';

  /* Display: Safety */
  $handler = $view->new_display('panel_pane', 'Safety', 'display_safety');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Featured image */
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
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="poster">
	<p>[field_hero_img]</p>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
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
    'poster' => 'poster',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    562 => '562',
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'televisions';

  /* Display: News */
  $handler = $view->new_display('panel_pane', 'News', 'display_news');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['ui_name'] = 'Summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_summary']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_summary']['hide_empty'] = TRUE;
  /* Field: Featured image */
  $handler->display->display_options['fields']['field_hero_img']['id'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['table'] = 'field_data_field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['field'] = 'field_hero_img';
  $handler->display->display_options['fields']['field_hero_img']['ui_name'] = 'Featured image';
  $handler->display->display_options['fields']['field_hero_img']['label'] = '';
  $handler->display->display_options['fields']['field_hero_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hero_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hero_img']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_hero_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hero_img']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Impact */
  $handler->display->display_options['fields']['field_topics']['id'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['table'] = 'field_data_field_topics';
  $handler->display->display_options['fields']['field_topics']['field'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['ui_name'] = 'Impact';
  $handler->display->display_options['fields']['field_topics']['label'] = 'Impact';
  $handler->display->display_options['fields']['field_topics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_topics']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_topics']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_topics']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_topics']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="image">
	<p>[field_hero_img]</p>
</div>
<div class="info">
	<h2>[title]</h2>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Publish date (field_publish_date) */
  $handler->display->display_options['sorts']['field_publish_date_value']['id'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['sorts']['field_publish_date_value']['field'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['order'] = 'DESC';
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
    'news' => 'news',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    35 => '35',
    440 => '440',
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'engineering_news_type';

  /* Display: Events */
  $handler = $view->new_display('panel_pane', 'Events', 'display_events');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'event-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Areas of Impact */
  $handler->display->display_options['fields']['field_event_impact']['id'] = 'field_event_impact';
  $handler->display->display_options['fields']['field_event_impact']['table'] = 'field_data_field_event_impact';
  $handler->display->display_options['fields']['field_event_impact']['field'] = 'field_event_impact';
  $handler->display->display_options['fields']['field_event_impact']['label'] = '';
  $handler->display->display_options['fields']['field_event_impact']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_impact']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_impact']['alter']['text'] = 'Impact: [field_event_impact]';
  $handler->display->display_options['fields']['field_event_impact']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_impact']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_impact']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_event_impact']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_event_impact']['delta_offset'] = '0';
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
  $handler->display->display_options['fields']['field_event_time']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_time']['delta_offset'] = '0';
  /* Field: Day */
  $handler->display->display_options['fields']['field_event_time_1']['id'] = 'field_event_time_1';
  $handler->display->display_options['fields']['field_event_time_1']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['fields']['field_event_time_1']['field'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time_1']['ui_name'] = 'Day';
  $handler->display->display_options['fields']['field_event_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_time_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_time_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_time_1']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'd',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_event_time_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_time_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_event_time_1']['delta_offset'] = '';
  /* Field: Time */
  $handler->display->display_options['fields']['field_event_time_2']['id'] = 'field_event_time_2';
  $handler->display->display_options['fields']['field_event_time_2']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['fields']['field_event_time_2']['field'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time_2']['ui_name'] = 'Time';
  $handler->display->display_options['fields']['field_event_time_2']['label'] = '';
  $handler->display->display_options['fields']['field_event_time_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_time_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_time_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_time_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_event_time_2']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'g:i a',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_event_time_2']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_time_2']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_event_time_2']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_event_time_2']['delta_reversed'] = TRUE;
  /* Field: Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['ui_name'] = 'Location';
  $handler->display->display_options['fields']['field_event_location']['label'] = '';
  $handler->display->display_options['fields']['field_event_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_location']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_location']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_event_location']['type'] = 'link_title_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '	<p class="month">[field_event_time]</span>
	<p class="day">
		<span>[field_event_time_1]</span>
		<img src="/sites/all/themes/engineering/images/backgrounds/prism-bg.jpg" />
	</span>
	<p class="time">[field_event_time_2]</p>
	<h2>
		<span>[title]</span>
		<img src="/sites/all/themes/engineering/images/backgrounds/prism-bg.jpg" />
	</h2>
	<p class="location">[field_event_location]</p>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Event date and time -  start date (field_event_time) */
  $handler->display->display_options['sorts']['field_event_time_value']['id'] = 'field_event_time_value';
  $handler->display->display_options['sorts']['field_event_time_value']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['sorts']['field_event_time_value']['field'] = 'field_event_time_value';
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
  $handler->display->display_options['filters']['field_event_time_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_event_time_value']['default_to_date'] = '+100 day';
  $export['tv_displays'] = $view;

  return $export;
}
