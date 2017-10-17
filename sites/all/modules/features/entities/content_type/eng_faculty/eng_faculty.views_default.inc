<?php
/**
 * @file
 * eng_faculty.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function eng_faculty_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'primary_affiliations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Primary affiliations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    7 => '7',
    5 => '5',
    4 => '4',
    9 => '9',
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Sort criterion: Taxonomy vocabulary: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['expose']['label'] = 'Name';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
    3 => 'AND',
    4 => 'AND',
    5 => 'AND',
  );
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    11 => '11',
    12 => '12',
    5 => '5',
    4 => '4',
    15 => '15',
  );
  $handler->display->display_options['filters']['vid']['group'] = 1;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_6']['id'] = 'name_6';
  $handler->display->display_options['filters']['name_6']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_6']['field'] = 'name';
  $handler->display->display_options['filters']['name_6']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['name_6']['value'] = 'program';
  $handler->display->display_options['filters']['name_6']['group'] = 1;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'word';
  $handler->display->display_options['filters']['name']['value'] = 'chemical civil computer electrical mechanical operations andlinger information keller materials architecture sigle environmental';
  $handler->display->display_options['filters']['name']['group'] = 1;
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid_1']['id'] = 'vid_1';
  $handler->display->display_options['filters']['vid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid_1']['field'] = 'vid';
  $handler->display->display_options['filters']['vid_1']['value'] = array(
    11 => '11',
    12 => '12',
    15 => '15',
  );
  $handler->display->display_options['filters']['vid_1']['group'] = 2;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_3']['id'] = 'name_3';
  $handler->display->display_options['filters']['name_3']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_3']['field'] = 'name';
  $handler->display->display_options['filters']['name_3']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['name_3']['value'] = 'school';
  $handler->display->display_options['filters']['name_3']['group'] = 2;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_1']['id'] = 'name_1';
  $handler->display->display_options['filters']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_1']['field'] = 'name';
  $handler->display->display_options['filters']['name_1']['operator'] = 'allwords';
  $handler->display->display_options['filters']['name_1']['value'] = 'applied';
  $handler->display->display_options['filters']['name_1']['group'] = 2;
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid_2']['id'] = 'vid_2';
  $handler->display->display_options['filters']['vid_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid_2']['field'] = 'vid';
  $handler->display->display_options['filters']['vid_2']['value'] = array(
    11 => '11',
    12 => '12',
    15 => '15',
  );
  $handler->display->display_options['filters']['vid_2']['group'] = 3;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_2']['id'] = 'name_2';
  $handler->display->display_options['filters']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_2']['field'] = 'name';
  $handler->display->display_options['filters']['name_2']['operator'] = 'allwords';
  $handler->display->display_options['filters']['name_2']['value'] = 'Applied and Computational Mathematics';
  $handler->display->display_options['filters']['name_2']['group'] = 3;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_5']['id'] = 'name_5';
  $handler->display->display_options['filters']['name_5']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_5']['field'] = 'name';
  $handler->display->display_options['filters']['name_5']['operator'] = 'starts';
  $handler->display->display_options['filters']['name_5']['value'] = 'program';
  $handler->display->display_options['filters']['name_5']['group'] = 3;
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid_3']['id'] = 'vid_3';
  $handler->display->display_options['filters']['vid_3']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid_3']['field'] = 'vid';
  $handler->display->display_options['filters']['vid_3']['value'] = array(
    12 => '12',
  );
  $handler->display->display_options['filters']['vid_3']['group'] = 4;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_7']['id'] = 'name_7';
  $handler->display->display_options['filters']['name_7']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_7']['field'] = 'name';
  $handler->display->display_options['filters']['name_7']['operator'] = 'contains';
  $handler->display->display_options['filters']['name_7']['value'] = 'woodrow';
  $handler->display->display_options['filters']['name_7']['group'] = 4;
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid_4']['id'] = 'vid_4';
  $handler->display->display_options['filters']['vid_4']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid_4']['field'] = 'vid';
  $handler->display->display_options['filters']['vid_4']['value'] = array(
    11 => '11',
    12 => '12',
  );
  $handler->display->display_options['filters']['vid_4']['group'] = 5;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_4']['id'] = 'name_4';
  $handler->display->display_options['filters']['name_4']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_4']['field'] = 'name';
  $handler->display->display_options['filters']['name_4']['operator'] = 'allwords';
  $handler->display->display_options['filters']['name_4']['value'] = 'Princeton Neuroscience Institute';
  $handler->display->display_options['filters']['name_4']['group'] = 5;
  $handler->display->display_options['filters']['name_4']['expose']['operator_id'] = 'name_4_op';
  $handler->display->display_options['filters']['name_4']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name_4']['expose']['operator'] = 'name_4_op';
  $handler->display->display_options['filters']['name_4']['expose']['identifier'] = 'name_4';

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Non-eng faculty department */
  $handler = $view->new_display('entityreference', 'Non-eng faculty department', 'entityreference_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    4 => '4',
    5 => '5',
  );
  $handler->display->display_options['filters']['vid']['group'] = 1;
  $export['primary_affiliations'] = $view;

  return $export;
}
