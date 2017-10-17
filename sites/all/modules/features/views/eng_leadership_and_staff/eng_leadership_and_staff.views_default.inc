<?php
/**
 * @file
 * eng_leadership_and_staff.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function eng_leadership_and_staff_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'eng_leadership_and_staff';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Leadership and Staff';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'staff-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit this profile';
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['label'] = '';
  $handler->display->display_options['fields']['field_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['field_name']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: Content: Degree information */
  $handler->display->display_options['fields']['field_degree_information']['id'] = 'field_degree_information';
  $handler->display->display_options['fields']['field_degree_information']['table'] = 'field_data_field_degree_information';
  $handler->display->display_options['fields']['field_degree_information']['field'] = 'field_degree_information';
  $handler->display->display_options['fields']['field_degree_information']['label'] = '';
  $handler->display->display_options['fields']['field_degree_information']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_degree_information']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_degree_information']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_degree_information']['delta_offset'] = '0';
  /* Field: Executive title */
  $handler->display->display_options['fields']['field_company_information']['id'] = 'field_company_information';
  $handler->display->display_options['fields']['field_company_information']['table'] = 'field_data_field_company_information';
  $handler->display->display_options['fields']['field_company_information']['field'] = 'field_company_information';
  $handler->display->display_options['fields']['field_company_information']['ui_name'] = 'Executive title';
  $handler->display->display_options['fields']['field_company_information']['label'] = '';
  $handler->display->display_options['fields']['field_company_information']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['field_company_information_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_company_information_1']['element_default_classes'] = FALSE;
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
  $handler->display->display_options['fields']['field_company_information_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_company_information_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_company_information_2']['settings'] = array(
    'view_mode' => 'paragraphs_editor_preview',
  );
  $handler->display->display_options['fields']['field_company_information_2']['delta_offset'] = '0';
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
    'advisory_council_member' => 'advisory_council_member',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    461 => '461',
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'tags';

  /* Display: Advisory Council */
  $handler = $view->new_display('block', 'Advisory Council', 'leadership_staff_advisory_council');
  $handler->display->display_options['block_description'] = 'Leadership and Staff: Advisory Council';

  /* Display: Dean */
  $handler = $view->new_display('block', 'Dean', 'leadership_staff_dean');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'engineering_staff_tags' => 'engineering_staff_tags',
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
    'engineering_impact' => 0,
    'interdisciplinary_programs' => 0,
    'engineering_interdisciplinary_research' => 0,
    'eng_news_partners' => 0,
    'engineering_news_type' => 0,
    'student_status' => 0,
    'tags' => 0,
    'user_mention_terms' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['field_profile_photo']['type'] = 'full';
  $handler->display->display_options['fields']['field_profile_photo']['settings'] = array(
    'link' => '0',
  );
  /* Field: First name */
  $handler->display->display_options['fields']['field_name_given']['id'] = 'field_name_given';
  $handler->display->display_options['fields']['field_name_given']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name_given']['field'] = 'field_name_given';
  $handler->display->display_options['fields']['field_name_given']['ui_name'] = 'First name';
  $handler->display->display_options['fields']['field_name_given']['label'] = '';
  $handler->display->display_options['fields']['field_name_given']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_name_given']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_name_given']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_name_given']['hide_empty'] = TRUE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['label'] = '';
  $handler->display->display_options['fields']['field_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['field_name']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<em>Edit [field_name_given]\'s profile</em>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = TRUE;
  /* Field: Content: Administrative title */
  $handler->display->display_options['fields']['field_staff_admin_title']['id'] = 'field_staff_admin_title';
  $handler->display->display_options['fields']['field_staff_admin_title']['table'] = 'field_data_field_staff_admin_title';
  $handler->display->display_options['fields']['field_staff_admin_title']['field'] = 'field_staff_admin_title';
  $handler->display->display_options['fields']['field_staff_admin_title']['label'] = '';
  $handler->display->display_options['fields']['field_staff_admin_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_staff_admin_title']['element_type'] = '0';
  $handler->display->display_options['fields']['field_staff_admin_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_admin_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_staff_admin_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_staff_admin_title']['delta_offset'] = '0';
  /* Field: Content: Office room */
  $handler->display->display_options['fields']['field_office_room']['id'] = 'field_office_room';
  $handler->display->display_options['fields']['field_office_room']['table'] = 'field_data_field_office_room';
  $handler->display->display_options['fields']['field_office_room']['field'] = 'field_office_room';
  $handler->display->display_options['fields']['field_office_room']['label'] = '';
  $handler->display->display_options['fields']['field_office_room']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_office_room']['element_type'] = '0';
  $handler->display->display_options['fields']['field_office_room']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_office_room']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_office_room']['element_default_classes'] = FALSE;
  /* Field: Content: Building */
  $handler->display->display_options['fields']['field_building']['id'] = 'field_building';
  $handler->display->display_options['fields']['field_building']['table'] = 'field_data_field_building';
  $handler->display->display_options['fields']['field_building']['field'] = 'field_building';
  $handler->display->display_options['fields']['field_building']['label'] = '';
  $handler->display->display_options['fields']['field_building']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_building']['element_type'] = '0';
  $handler->display->display_options['fields']['field_building']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_building']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_building']['element_default_classes'] = FALSE;
  /* Field: Content: Institution */
  $handler->display->display_options['fields']['field_institution']['id'] = 'field_institution';
  $handler->display->display_options['fields']['field_institution']['table'] = 'field_data_field_institution';
  $handler->display->display_options['fields']['field_institution']['field'] = 'field_institution';
  $handler->display->display_options['fields']['field_institution']['label'] = '';
  $handler->display->display_options['fields']['field_institution']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_institution']['element_type'] = '0';
  $handler->display->display_options['fields']['field_institution']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_institution']['element_default_classes'] = FALSE;
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['label'] = '';
  $handler->display->display_options['fields']['field_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_city']['element_type'] = '0';
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_city']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_city']['element_default_classes'] = FALSE;
  /* Field: Content: State */
  $handler->display->display_options['fields']['field_state']['id'] = 'field_state';
  $handler->display->display_options['fields']['field_state']['table'] = 'field_data_field_state';
  $handler->display->display_options['fields']['field_state']['field'] = 'field_state';
  $handler->display->display_options['fields']['field_state']['label'] = '';
  $handler->display->display_options['fields']['field_state']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_state']['element_type'] = '0';
  $handler->display->display_options['fields']['field_state']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_state']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_state']['element_default_classes'] = FALSE;
  /* Field: Content: Zip code */
  $handler->display->display_options['fields']['field_zip_code']['id'] = 'field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['table'] = 'field_data_field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['field'] = 'field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['label'] = '';
  $handler->display->display_options['fields']['field_zip_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zip_code']['element_type'] = '0';
  $handler->display->display_options['fields']['field_zip_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_zip_code']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_zip_code']['element_default_classes'] = FALSE;
  /* Field: div.image */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'div.image';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="image">
	[field_profile_photo]
	[edit_node]
</div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: div.info */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'div.info';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<div class="info">';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  /* Field: Name, title, address, city, state, zip */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Name, title, address, city, state, zip';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '	<h3>[field_name]</h3>
	<h4>[field_staff_admin_title]</h4>
	<p class="office">
		<strong>Address:</strong> <br />
		[field_office_room] [field_building] <br />
		[field_institution] <br />
		[field_city], [field_state] [field_zip_code]
	</p>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: Content: Telephone */
  $handler->display->display_options['fields']['field_telephone']['id'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['table'] = 'field_data_field_telephone';
  $handler->display->display_options['fields']['field_telephone']['field'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['label'] = '';
  $handler->display->display_options['fields']['field_telephone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_telephone']['alter']['text'] = '<p class="phone"><strong>Phone:</strong> [field_telephone]</p>';
  $handler->display->display_options['fields']['field_telephone']['element_type'] = '0';
  $handler->display->display_options['fields']['field_telephone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_telephone']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_telephone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_telephone']['hide_empty'] = TRUE;
  /* Field: Content: Fax */
  $handler->display->display_options['fields']['field_fax']['id'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['table'] = 'field_data_field_fax';
  $handler->display->display_options['fields']['field_fax']['field'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['label'] = '';
  $handler->display->display_options['fields']['field_fax']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fax']['alter']['text'] = '<p class="fax"><strong>Fax:</strong> [field_fax]</p>';
  $handler->display->display_options['fields']['field_fax']['element_type'] = '0';
  $handler->display->display_options['fields']['field_fax']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fax']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_fax']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_fax']['hide_empty'] = TRUE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['text'] = '<p class="email"><strong>Email:</strong> [field_email]</p>';
  $handler->display->display_options['fields']['field_email']['element_type'] = '0';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_email']['hide_empty'] = TRUE;
  /* Field: end.div.info */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'end.div.info';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'term_node_tid';
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
    'staff' => 'staff',
  );
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    478 => '478',
    479 => '479',
    480 => '480',
    481 => '481',
    482 => '482',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'engineering_staff_tags';
  $handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '0';
  $handler->display->display_options['block_description'] = 'Leadership and Staff: Dean';

  /* Display: Administrative */
  $handler = $view->new_display('block', 'Administrative', 'leadership_staff_administrative');
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['field_profile_photo']['type'] = 'full';
  $handler->display->display_options['fields']['field_profile_photo']['settings'] = array(
    'link' => '0',
  );
  /* Field: First name */
  $handler->display->display_options['fields']['field_name_given']['id'] = 'field_name_given';
  $handler->display->display_options['fields']['field_name_given']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name_given']['field'] = 'field_name_given';
  $handler->display->display_options['fields']['field_name_given']['ui_name'] = 'First name';
  $handler->display->display_options['fields']['field_name_given']['label'] = '';
  $handler->display->display_options['fields']['field_name_given']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_name_given']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_name_given']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<em>Edit [field_name_given]\'s profile</em>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['label'] = '';
  $handler->display->display_options['fields']['field_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['field_name']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: Content: Administrative title */
  $handler->display->display_options['fields']['field_staff_admin_title']['id'] = 'field_staff_admin_title';
  $handler->display->display_options['fields']['field_staff_admin_title']['table'] = 'field_data_field_staff_admin_title';
  $handler->display->display_options['fields']['field_staff_admin_title']['field'] = 'field_staff_admin_title';
  $handler->display->display_options['fields']['field_staff_admin_title']['label'] = '';
  $handler->display->display_options['fields']['field_staff_admin_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_staff_admin_title']['element_type'] = '0';
  $handler->display->display_options['fields']['field_staff_admin_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_admin_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_staff_admin_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_staff_admin_title']['delta_offset'] = '0';
  /* Field: Content: Office room */
  $handler->display->display_options['fields']['field_office_room']['id'] = 'field_office_room';
  $handler->display->display_options['fields']['field_office_room']['table'] = 'field_data_field_office_room';
  $handler->display->display_options['fields']['field_office_room']['field'] = 'field_office_room';
  $handler->display->display_options['fields']['field_office_room']['label'] = '';
  $handler->display->display_options['fields']['field_office_room']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_office_room']['element_type'] = '0';
  $handler->display->display_options['fields']['field_office_room']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_office_room']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_office_room']['element_default_classes'] = FALSE;
  /* Field: Content: Building */
  $handler->display->display_options['fields']['field_building']['id'] = 'field_building';
  $handler->display->display_options['fields']['field_building']['table'] = 'field_data_field_building';
  $handler->display->display_options['fields']['field_building']['field'] = 'field_building';
  $handler->display->display_options['fields']['field_building']['label'] = '';
  $handler->display->display_options['fields']['field_building']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_building']['element_type'] = '0';
  $handler->display->display_options['fields']['field_building']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_building']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_building']['element_default_classes'] = FALSE;
  /* Field: Content: Institution */
  $handler->display->display_options['fields']['field_institution']['id'] = 'field_institution';
  $handler->display->display_options['fields']['field_institution']['table'] = 'field_data_field_institution';
  $handler->display->display_options['fields']['field_institution']['field'] = 'field_institution';
  $handler->display->display_options['fields']['field_institution']['label'] = '';
  $handler->display->display_options['fields']['field_institution']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_institution']['element_type'] = '0';
  $handler->display->display_options['fields']['field_institution']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_institution']['element_default_classes'] = FALSE;
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['label'] = '';
  $handler->display->display_options['fields']['field_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_city']['element_type'] = '0';
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_city']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_city']['element_default_classes'] = FALSE;
  /* Field: Content: State */
  $handler->display->display_options['fields']['field_state']['id'] = 'field_state';
  $handler->display->display_options['fields']['field_state']['table'] = 'field_data_field_state';
  $handler->display->display_options['fields']['field_state']['field'] = 'field_state';
  $handler->display->display_options['fields']['field_state']['label'] = '';
  $handler->display->display_options['fields']['field_state']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_state']['element_type'] = '0';
  $handler->display->display_options['fields']['field_state']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_state']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_state']['element_default_classes'] = FALSE;
  /* Field: Content: Zip code */
  $handler->display->display_options['fields']['field_zip_code']['id'] = 'field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['table'] = 'field_data_field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['field'] = 'field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['label'] = '';
  $handler->display->display_options['fields']['field_zip_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zip_code']['element_type'] = '0';
  $handler->display->display_options['fields']['field_zip_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_zip_code']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_zip_code']['element_default_classes'] = FALSE;
  /* Field: div.image */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'div.image';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="image">
	[field_profile_photo]
	[edit_node]
</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: div.info */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'div.info';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<div class="info">';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  /* Field: Name, title, address, city, state, zip */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Name, title, address, city, state, zip';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '	<h3>[field_name]</h3>
	<h4>[field_staff_admin_title]</h4>
	<p class="office">
		<strong>Address:</strong> <br />
		[field_office_room] [field_building] <br />
		[field_institution] <br />
		[field_city], [field_state] [field_zip_code]
	</p>';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Telephone */
  $handler->display->display_options['fields']['field_telephone']['id'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['table'] = 'field_data_field_telephone';
  $handler->display->display_options['fields']['field_telephone']['field'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['label'] = '';
  $handler->display->display_options['fields']['field_telephone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_telephone']['alter']['text'] = '<p class="phone"><strong>Phone:</strong> [field_telephone]</p>';
  $handler->display->display_options['fields']['field_telephone']['element_type'] = '0';
  $handler->display->display_options['fields']['field_telephone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_telephone']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_telephone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_telephone']['hide_empty'] = TRUE;
  /* Field: Content: Fax */
  $handler->display->display_options['fields']['field_fax']['id'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['table'] = 'field_data_field_fax';
  $handler->display->display_options['fields']['field_fax']['field'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['label'] = '';
  $handler->display->display_options['fields']['field_fax']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fax']['alter']['text'] = '<p class="fax"><strong>Fax:</strong> [field_fax]</p>';
  $handler->display->display_options['fields']['field_fax']['element_type'] = '0';
  $handler->display->display_options['fields']['field_fax']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fax']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_fax']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_fax']['hide_empty'] = TRUE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['text'] = '<p class="email"><strong>Email:</strong> [field_email]</p>';
  $handler->display->display_options['fields']['field_email']['element_type'] = '0';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_email']['hide_empty'] = TRUE;
  /* Field: end.div.info */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'end.div.info';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Name Components: Family */
  $handler->display->display_options['sorts']['field_name_family']['id'] = 'field_name_family';
  $handler->display->display_options['sorts']['field_name_family']['table'] = 'field_data_field_name';
  $handler->display->display_options['sorts']['field_name_family']['field'] = 'field_name_family';
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
    'staff' => 'staff',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    29 => '29',
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'engineering_staff_tags';
  $handler->display->display_options['block_description'] = 'Leadership and Staff: Administrative';

  /* Display: Communications */
  $handler = $view->new_display('block', 'Communications', 'leadership_staff_communications');
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['field_profile_photo']['type'] = 'full';
  $handler->display->display_options['fields']['field_profile_photo']['settings'] = array(
    'link' => '0',
  );
  /* Field: First name */
  $handler->display->display_options['fields']['field_name_given']['id'] = 'field_name_given';
  $handler->display->display_options['fields']['field_name_given']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name_given']['field'] = 'field_name_given';
  $handler->display->display_options['fields']['field_name_given']['ui_name'] = 'First name';
  $handler->display->display_options['fields']['field_name_given']['label'] = '';
  $handler->display->display_options['fields']['field_name_given']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_name_given']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_name_given']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<em>Edit [field_name_given]\'s profile</em>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['label'] = '';
  $handler->display->display_options['fields']['field_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['field_name']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: Content: Administrative title */
  $handler->display->display_options['fields']['field_staff_admin_title']['id'] = 'field_staff_admin_title';
  $handler->display->display_options['fields']['field_staff_admin_title']['table'] = 'field_data_field_staff_admin_title';
  $handler->display->display_options['fields']['field_staff_admin_title']['field'] = 'field_staff_admin_title';
  $handler->display->display_options['fields']['field_staff_admin_title']['label'] = '';
  $handler->display->display_options['fields']['field_staff_admin_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_staff_admin_title']['element_type'] = '0';
  $handler->display->display_options['fields']['field_staff_admin_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_admin_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_staff_admin_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_staff_admin_title']['delta_offset'] = '0';
  /* Field: Content: Office room */
  $handler->display->display_options['fields']['field_office_room']['id'] = 'field_office_room';
  $handler->display->display_options['fields']['field_office_room']['table'] = 'field_data_field_office_room';
  $handler->display->display_options['fields']['field_office_room']['field'] = 'field_office_room';
  $handler->display->display_options['fields']['field_office_room']['label'] = '';
  $handler->display->display_options['fields']['field_office_room']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_office_room']['element_type'] = '0';
  $handler->display->display_options['fields']['field_office_room']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_office_room']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_office_room']['element_default_classes'] = FALSE;
  /* Field: Content: Building */
  $handler->display->display_options['fields']['field_building']['id'] = 'field_building';
  $handler->display->display_options['fields']['field_building']['table'] = 'field_data_field_building';
  $handler->display->display_options['fields']['field_building']['field'] = 'field_building';
  $handler->display->display_options['fields']['field_building']['label'] = '';
  $handler->display->display_options['fields']['field_building']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_building']['element_type'] = '0';
  $handler->display->display_options['fields']['field_building']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_building']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_building']['element_default_classes'] = FALSE;
  /* Field: Content: Institution */
  $handler->display->display_options['fields']['field_institution']['id'] = 'field_institution';
  $handler->display->display_options['fields']['field_institution']['table'] = 'field_data_field_institution';
  $handler->display->display_options['fields']['field_institution']['field'] = 'field_institution';
  $handler->display->display_options['fields']['field_institution']['label'] = '';
  $handler->display->display_options['fields']['field_institution']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_institution']['element_type'] = '0';
  $handler->display->display_options['fields']['field_institution']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_institution']['element_default_classes'] = FALSE;
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['label'] = '';
  $handler->display->display_options['fields']['field_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_city']['element_type'] = '0';
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_city']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_city']['element_default_classes'] = FALSE;
  /* Field: Content: State */
  $handler->display->display_options['fields']['field_state']['id'] = 'field_state';
  $handler->display->display_options['fields']['field_state']['table'] = 'field_data_field_state';
  $handler->display->display_options['fields']['field_state']['field'] = 'field_state';
  $handler->display->display_options['fields']['field_state']['label'] = '';
  $handler->display->display_options['fields']['field_state']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_state']['element_type'] = '0';
  $handler->display->display_options['fields']['field_state']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_state']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_state']['element_default_classes'] = FALSE;
  /* Field: Content: Zip code */
  $handler->display->display_options['fields']['field_zip_code']['id'] = 'field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['table'] = 'field_data_field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['field'] = 'field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['label'] = '';
  $handler->display->display_options['fields']['field_zip_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zip_code']['element_type'] = '0';
  $handler->display->display_options['fields']['field_zip_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_zip_code']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_zip_code']['element_default_classes'] = FALSE;
  /* Field: div.image */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'div.image';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="image">
	[field_profile_photo]
	[edit_node]
</div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: div.info */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'div.info';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="info">';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: Name, title, address, city, state, zip */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Name, title, address, city, state, zip';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '	<h3>[field_name]</h3>
	<h4>[field_staff_admin_title]</h4>
	<p class="office">
		<strong>Address:</strong> <br />
		[field_office_room] [field_building] <br />
		[field_institution] <br />
		[field_city], [field_state] [field_zip_code]
	</p>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  /* Field: Content: Telephone */
  $handler->display->display_options['fields']['field_telephone']['id'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['table'] = 'field_data_field_telephone';
  $handler->display->display_options['fields']['field_telephone']['field'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['label'] = '';
  $handler->display->display_options['fields']['field_telephone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_telephone']['alter']['text'] = '<p class="phone"><strong>Phone:</strong> [field_telephone]</p>';
  $handler->display->display_options['fields']['field_telephone']['element_type'] = '0';
  $handler->display->display_options['fields']['field_telephone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_telephone']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_telephone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_telephone']['hide_empty'] = TRUE;
  /* Field: Content: Fax */
  $handler->display->display_options['fields']['field_fax']['id'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['table'] = 'field_data_field_fax';
  $handler->display->display_options['fields']['field_fax']['field'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['label'] = '';
  $handler->display->display_options['fields']['field_fax']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fax']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fax']['alter']['text'] = '<p class="fax"><strong>Fax:</strong> [field_fax]</p>';
  $handler->display->display_options['fields']['field_fax']['element_type'] = '0';
  $handler->display->display_options['fields']['field_fax']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fax']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_fax']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_fax']['hide_empty'] = TRUE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['text'] = '<p class="email"><strong>Email:</strong> [field_email]</p>';
  $handler->display->display_options['fields']['field_email']['element_type'] = '0';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_email']['hide_empty'] = TRUE;
  /* Field: end.div.info */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'end.div.info';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Name Components: Family */
  $handler->display->display_options['sorts']['field_name_family']['id'] = 'field_name_family';
  $handler->display->display_options['sorts']['field_name_family']['table'] = 'field_data_field_name';
  $handler->display->display_options['sorts']['field_name_family']['field'] = 'field_name_family';
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
    'staff' => 'staff',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    30 => '30',
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'engineering_staff_tags';
  $handler->display->display_options['block_description'] = 'Leadership and Staff: Communications';

  /* Display: Development */
  $handler = $view->new_display('block', 'Development', 'leadership_staff_development');
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
    'link' => '0',
  );
  /* Field: First name */
  $handler->display->display_options['fields']['field_name_given']['id'] = 'field_name_given';
  $handler->display->display_options['fields']['field_name_given']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name_given']['field'] = 'field_name_given';
  $handler->display->display_options['fields']['field_name_given']['ui_name'] = 'First name';
  $handler->display->display_options['fields']['field_name_given']['label'] = '';
  $handler->display->display_options['fields']['field_name_given']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_name_given']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_name_given']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<em>Edit [field_name_given]\'s profile</em>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['label'] = '';
  $handler->display->display_options['fields']['field_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['field_name']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: Content: Administrative title */
  $handler->display->display_options['fields']['field_staff_admin_title']['id'] = 'field_staff_admin_title';
  $handler->display->display_options['fields']['field_staff_admin_title']['table'] = 'field_data_field_staff_admin_title';
  $handler->display->display_options['fields']['field_staff_admin_title']['field'] = 'field_staff_admin_title';
  $handler->display->display_options['fields']['field_staff_admin_title']['label'] = '';
  $handler->display->display_options['fields']['field_staff_admin_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_staff_admin_title']['element_type'] = '0';
  $handler->display->display_options['fields']['field_staff_admin_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_admin_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_staff_admin_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_staff_admin_title']['delta_offset'] = '0';
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
  $handler->display->display_options['fields']['field_building']['element_default_classes'] = FALSE;
  /* Field: Content: Institution */
  $handler->display->display_options['fields']['field_institution']['id'] = 'field_institution';
  $handler->display->display_options['fields']['field_institution']['table'] = 'field_data_field_institution';
  $handler->display->display_options['fields']['field_institution']['field'] = 'field_institution';
  $handler->display->display_options['fields']['field_institution']['label'] = '';
  $handler->display->display_options['fields']['field_institution']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_institution']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution']['element_default_classes'] = FALSE;
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
  /* Field: div.image */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'div.image';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="image">
	[field_profile_photo]
        [edit_node]
</div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: div.info */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'div.info';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="info">';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: Name, title, address, city, state, zip */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Name, title, address, city, state, zip';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '	<h3>[field_name]</h3>
	<h4>[field_staff_admin_title]</h4>
	<p class="office">
		<strong>Address:</strong> <br />
		[field_office_room] [field_building] <br />
		[field_institution] <br />
		[field_city], [field_state] [field_zip_code]
	</p>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
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
  /* Field: Content: Fax */
  $handler->display->display_options['fields']['field_fax']['id'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['table'] = 'field_data_field_fax';
  $handler->display->display_options['fields']['field_fax']['field'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['label'] = '';
  $handler->display->display_options['fields']['field_fax']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fax']['alter']['text'] = '<p class="fax"><strong>Fax:</strong> [field_fax]</p>';
  $handler->display->display_options['fields']['field_fax']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fax']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_fax']['hide_empty'] = TRUE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['text'] = '<p class="email"><strong>Email:</strong> [field_email]</p>';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_email']['hide_empty'] = TRUE;
  /* Field: end.div.info */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'end.div.info';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Name Components: Family */
  $handler->display->display_options['sorts']['field_name_family']['id'] = 'field_name_family';
  $handler->display->display_options['sorts']['field_name_family']['table'] = 'field_data_field_name';
  $handler->display->display_options['sorts']['field_name_family']['field'] = 'field_name_family';
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
    'staff' => 'staff',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    28 => '28',
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'engineering_staff_tags';
  $handler->display->display_options['block_description'] = 'Leadership and Staff: Development';

  /* Display: Machine Shop */
  $handler = $view->new_display('block', 'Machine Shop', 'leadership_staff_machine_shop');
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
    'link' => '0',
  );
  /* Field: First name */
  $handler->display->display_options['fields']['field_name_given']['id'] = 'field_name_given';
  $handler->display->display_options['fields']['field_name_given']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name_given']['field'] = 'field_name_given';
  $handler->display->display_options['fields']['field_name_given']['ui_name'] = 'First name';
  $handler->display->display_options['fields']['field_name_given']['label'] = '';
  $handler->display->display_options['fields']['field_name_given']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_name_given']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_name_given']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<em>Edit [field_name_given]\'s profile</em>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['label'] = '';
  $handler->display->display_options['fields']['field_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['field_name']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: Content: Administrative title */
  $handler->display->display_options['fields']['field_staff_admin_title']['id'] = 'field_staff_admin_title';
  $handler->display->display_options['fields']['field_staff_admin_title']['table'] = 'field_data_field_staff_admin_title';
  $handler->display->display_options['fields']['field_staff_admin_title']['field'] = 'field_staff_admin_title';
  $handler->display->display_options['fields']['field_staff_admin_title']['label'] = '';
  $handler->display->display_options['fields']['field_staff_admin_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_staff_admin_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_admin_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_staff_admin_title']['delta_offset'] = '0';
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
  $handler->display->display_options['fields']['field_building']['element_default_classes'] = FALSE;
  /* Field: Content: Institution */
  $handler->display->display_options['fields']['field_institution']['id'] = 'field_institution';
  $handler->display->display_options['fields']['field_institution']['table'] = 'field_data_field_institution';
  $handler->display->display_options['fields']['field_institution']['field'] = 'field_institution';
  $handler->display->display_options['fields']['field_institution']['label'] = '';
  $handler->display->display_options['fields']['field_institution']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_institution']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution']['element_default_classes'] = FALSE;
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
  /* Field: div.image */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'div.image';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="image">
	[field_profile_photo]
        [edit_node]
</div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: div.info */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'div.info';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="info">';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: Name, title, address, city, state, zip */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Name, title, address, city, state, zip';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<h3>[field_name]</h3>
	<h4>[field_staff_admin_title]</h4>
	<p class="office">
		<strong>Address:</strong> <br />
		[field_office_room] [field_building] <br />
		[field_institution] <br />
		[field_city], [field_state] [field_zip_code]
	</p>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
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
  /* Field: Content: Fax */
  $handler->display->display_options['fields']['field_fax']['id'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['table'] = 'field_data_field_fax';
  $handler->display->display_options['fields']['field_fax']['field'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['label'] = '';
  $handler->display->display_options['fields']['field_fax']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fax']['alter']['text'] = '<p class="fax"><strong>Fax:</strong> [field_fax]</p>';
  $handler->display->display_options['fields']['field_fax']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fax']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_fax']['hide_empty'] = TRUE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['text'] = '<p class="email"><strong>Email:</strong> [field_email]</p>';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_email']['hide_empty'] = TRUE;
  /* Field: end.div.info */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'end.div.info';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Name Components: Family */
  $handler->display->display_options['sorts']['field_name_family']['id'] = 'field_name_family';
  $handler->display->display_options['sorts']['field_name_family']['table'] = 'field_data_field_name';
  $handler->display->display_options['sorts']['field_name_family']['field'] = 'field_name_family';
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
    'staff' => 'staff',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    33 => '33',
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'engineering_staff_tags';
  $handler->display->display_options['block_description'] = 'Leadership and Staff: Machine Shop';

  /* Display: Mail, Receiving, and Stockroom */
  $handler = $view->new_display('block', 'Mail, Receiving, and Stockroom', 'leadership_staff_mail_room');
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
    'link' => '0',
  );
  /* Field: First name */
  $handler->display->display_options['fields']['field_name_given']['id'] = 'field_name_given';
  $handler->display->display_options['fields']['field_name_given']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name_given']['field'] = 'field_name_given';
  $handler->display->display_options['fields']['field_name_given']['ui_name'] = 'First name';
  $handler->display->display_options['fields']['field_name_given']['label'] = '';
  $handler->display->display_options['fields']['field_name_given']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_name_given']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_name_given']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<em>Edit [field_name_given]\'s profile</em>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['label'] = '';
  $handler->display->display_options['fields']['field_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['field_name']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: Content: Administrative title */
  $handler->display->display_options['fields']['field_staff_admin_title']['id'] = 'field_staff_admin_title';
  $handler->display->display_options['fields']['field_staff_admin_title']['table'] = 'field_data_field_staff_admin_title';
  $handler->display->display_options['fields']['field_staff_admin_title']['field'] = 'field_staff_admin_title';
  $handler->display->display_options['fields']['field_staff_admin_title']['label'] = '';
  $handler->display->display_options['fields']['field_staff_admin_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_staff_admin_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_admin_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_staff_admin_title']['delta_offset'] = '0';
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
  $handler->display->display_options['fields']['field_building']['element_default_classes'] = FALSE;
  /* Field: Content: Institution */
  $handler->display->display_options['fields']['field_institution']['id'] = 'field_institution';
  $handler->display->display_options['fields']['field_institution']['table'] = 'field_data_field_institution';
  $handler->display->display_options['fields']['field_institution']['field'] = 'field_institution';
  $handler->display->display_options['fields']['field_institution']['label'] = '';
  $handler->display->display_options['fields']['field_institution']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_institution']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution']['element_default_classes'] = FALSE;
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
  /* Field: div.image */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'div.image';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="image">
	[field_profile_photo]
        [edit_node]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: div.info */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'div.info';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="info">';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: Name, title, address, city, state, zip */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Name, title, address, city, state, zip';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '	<h3>[field_name]</h3>
	<h4>[field_staff_admin_title]</h4>
	<p class="office">
		<strong>Address:</strong> <br />
		[field_office_room] [field_building] <br />
		[field_institution] <br />
		[field_city], [field_state] [field_zip_code]
	</p>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
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
  /* Field: Content: Fax */
  $handler->display->display_options['fields']['field_fax']['id'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['table'] = 'field_data_field_fax';
  $handler->display->display_options['fields']['field_fax']['field'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['label'] = '';
  $handler->display->display_options['fields']['field_fax']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fax']['alter']['text'] = '<p class="fax"><strong>Fax:</strong> [field_fax]</p>';
  $handler->display->display_options['fields']['field_fax']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fax']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_fax']['hide_empty'] = TRUE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['text'] = '<p class="email"><strong>Email:</strong> [field_email]</p>';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_email']['hide_empty'] = TRUE;
  /* Field: end.div.info */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'end.div.info';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Name Components: Family */
  $handler->display->display_options['sorts']['field_name_family']['id'] = 'field_name_family';
  $handler->display->display_options['sorts']['field_name_family']['table'] = 'field_data_field_name';
  $handler->display->display_options['sorts']['field_name_family']['field'] = 'field_name_family';
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
    'staff' => 'staff',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    32 => '32',
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'engineering_staff_tags';
  $handler->display->display_options['block_description'] = 'Leadership and Staff: Mail Room';

  /* Display: Technical Services */
  $handler = $view->new_display('block', 'Technical Services', 'leadership_staff_technical_services');
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
    'link' => '0',
  );
  /* Field: First name */
  $handler->display->display_options['fields']['field_name_given']['id'] = 'field_name_given';
  $handler->display->display_options['fields']['field_name_given']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name_given']['field'] = 'field_name_given';
  $handler->display->display_options['fields']['field_name_given']['ui_name'] = 'First name';
  $handler->display->display_options['fields']['field_name_given']['label'] = '';
  $handler->display->display_options['fields']['field_name_given']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_name_given']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_name_given']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<em>Edit [field_name_given]\'s profile</em>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['label'] = '';
  $handler->display->display_options['fields']['field_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['field_name']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: Content: Administrative title */
  $handler->display->display_options['fields']['field_staff_admin_title']['id'] = 'field_staff_admin_title';
  $handler->display->display_options['fields']['field_staff_admin_title']['table'] = 'field_data_field_staff_admin_title';
  $handler->display->display_options['fields']['field_staff_admin_title']['field'] = 'field_staff_admin_title';
  $handler->display->display_options['fields']['field_staff_admin_title']['label'] = '';
  $handler->display->display_options['fields']['field_staff_admin_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_staff_admin_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_admin_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_staff_admin_title']['delta_offset'] = '0';
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
  $handler->display->display_options['fields']['field_building']['element_default_classes'] = FALSE;
  /* Field: Content: Institution */
  $handler->display->display_options['fields']['field_institution']['id'] = 'field_institution';
  $handler->display->display_options['fields']['field_institution']['table'] = 'field_data_field_institution';
  $handler->display->display_options['fields']['field_institution']['field'] = 'field_institution';
  $handler->display->display_options['fields']['field_institution']['label'] = '';
  $handler->display->display_options['fields']['field_institution']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_institution']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution']['element_default_classes'] = FALSE;
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
  /* Field: div.image */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'div.image';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="image">
	[field_profile_photo]
        [edit_node]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: div.info */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'div.info';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="info">';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: Name, title, address, city, state, zip */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Name, title, address, city, state, zip';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '	<h3>[field_name]</h3>
	<h4>[field_staff_admin_title]</h4>
	<p class="office">
		<strong>Address:</strong> <br />
		[field_office_room] [field_building] <br />
		[field_institution] <br />
		[field_city], [field_state] [field_zip_code]
	</p>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
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
  /* Field: Content: Fax */
  $handler->display->display_options['fields']['field_fax']['id'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['table'] = 'field_data_field_fax';
  $handler->display->display_options['fields']['field_fax']['field'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['label'] = '';
  $handler->display->display_options['fields']['field_fax']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fax']['alter']['text'] = '<p class="fax"><strong>Fax:</strong> [field_fax]</p>';
  $handler->display->display_options['fields']['field_fax']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fax']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_fax']['hide_empty'] = TRUE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['text'] = '<p class="email"><strong>Email:</strong> [field_email]</p>';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_email']['hide_empty'] = TRUE;
  /* Field: end.div.info */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'end.div.info';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Name Components: Family */
  $handler->display->display_options['sorts']['field_name_family']['id'] = 'field_name_family';
  $handler->display->display_options['sorts']['field_name_family']['table'] = 'field_data_field_name';
  $handler->display->display_options['sorts']['field_name_family']['field'] = 'field_name_family';
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
    'staff' => 'staff',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    31 => '31',
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'engineering_staff_tags';
  $handler->display->display_options['block_description'] = 'Leadership and Staff: Technical Services';
  $export['eng_leadership_and_staff'] = $view;

  return $export;
}
