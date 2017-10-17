<?php
/**
 * @file
 * eng_advisory_council_member.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function eng_advisory_council_member_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-advisory_council_member-body'.
  $field_instances['node-advisory_council_member-body'] = array(
    'bundle' => 'advisory_council_member',
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
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'context' => '',
      'display_summary' => TRUE,
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-advisory_council_member-field_center'.
  $field_instances['node-advisory_council_member-field_center'] = array(
    'bundle' => 'advisory_council_member',
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
    'field_name' => 'field_center',
    'label' => 'Center',
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
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'node-advisory_council_member-field_company_information'.
  $field_instances['node-advisory_council_member-field_company_information'] = array(
    'bundle' => 'advisory_council_member',
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
    'field_name' => 'field_company_information',
    'label' => 'Institution information',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'body' => -1,
        'eng_paragraph_company' => 'eng_paragraph_company',
        'eng_paragraph_degree' => -1,
      ),
      'bundle_weights' => array(
        'body' => 2,
        'eng_paragraph_company' => 3,
        'eng_paragraph_degree' => 4,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Institution',
      'title_multiple' => 'Institutions',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'node-advisory_council_member-field_degree_information'.
  $field_instances['node-advisory_council_member-field_degree_information'] = array(
    'bundle' => 'advisory_council_member',
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
    'field_name' => 'field_degree_information',
    'label' => 'Degree information',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'body' => -1,
        'eng_paragraph_company' => -1,
        'eng_paragraph_degree' => 'eng_paragraph_degree',
        'news_author' => -1,
        'news_img_3col' => -1,
        'news_img_4col' => -1,
        'news_img_6col' => -1,
        'news_img_8col' => -1,
        'news_img_9col' => -1,
        'news_img_12col' => -1,
        'news_lede' => -1,
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
        'news_text_12col' => -1,
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
        'body' => 2,
        'eng_paragraph_company' => 3,
        'eng_paragraph_degree' => 4,
        'news_author' => 9,
        'news_img_3col' => 11,
        'news_img_4col' => 12,
        'news_img_6col' => 13,
        'news_img_8col' => 14,
        'news_img_9col' => 15,
        'news_img_12col' => 10,
        'news_lede' => 16,
        'news_pull_quote_3col' => 18,
        'news_pull_quote_4col' => 19,
        'news_pull_quote_6col' => 20,
        'news_pull_quote_8col' => 21,
        'news_pull_quote_9col' => 22,
        'news_pull_quote_12col' => 17,
        'news_text_3col' => 24,
        'news_text_4col' => 25,
        'news_text_6col' => 26,
        'news_text_8col' => 27,
        'news_text_9col' => 28,
        'news_text_12col' => 23,
        'news_video_3col' => 30,
        'news_video_4col' => 31,
        'news_video_6col' => 32,
        'news_video_8col' => 33,
        'news_video_9col' => 34,
        'news_video_12col' => 29,
        'page_img_3col' => 36,
        'page_img_4col' => 37,
        'page_img_6col' => 38,
        'page_img_8col' => 39,
        'page_img_9col' => 40,
        'page_img_12col' => 35,
        'page_text_3col' => 42,
        'page_text_4col' => 43,
        'page_text_6col' => 44,
        'page_text_8col' => 45,
        'page_text_9col' => 46,
        'page_text_12col' => 41,
        'page_video_3col' => 48,
        'page_video_4col' => 49,
        'page_video_6col' => 50,
        'page_video_8col' => 51,
        'page_video_9col' => 52,
        'page_video_12col' => 47,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Degree',
      'title_multiple' => 'Degrees',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-advisory_council_member-field_department'.
  $field_instances['node-advisory_council_member-field_department'] = array(
    'bundle' => 'advisory_council_member',
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
    'field_name' => 'field_department',
    'label' => 'Department',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-advisory_council_member-field_name'.
  $field_instances['node-advisory_council_member-field_name'] = array(
    'bundle' => 'advisory_council_member',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'name',
        'settings' => array(
          'format' => 'default',
          'markup' => 0,
          'multiple' => 'default',
          'multiple_and' => 'text',
          'multiple_delimiter' => ', ',
          'multiple_delimiter_precedes_last' => 'never',
          'multiple_el_al_first' => 1,
          'multiple_el_al_min' => 3,
          'output' => 'default',
        ),
        'type' => 'name_formatter',
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
    'field_name' => 'field_name',
    'label' => 'Name',
    'required' => 1,
    'settings' => array(
      'component_css' => '',
      'component_layout' => 'default',
      'components' => array(
        'credentials' => 0,
        'family' => 0,
        'generational' => 0,
        'given' => 0,
        'middle' => 0,
        'title' => 0,
      ),
      'credentials_inline' => 0,
      'field_type' => array(
        'credentials' => 'text',
        'family' => 'text',
        'generational' => 'select',
        'given' => 'text',
        'middle' => 'text',
        'title' => 'select',
      ),
      'generational_field' => 'select',
      'inline_css' => array(
        'credentials' => '',
        'family' => '',
        'generational' => '',
        'given' => '',
        'middle' => '',
        'title' => '',
      ),
      'labels' => array(
        'credentials' => '',
        'family' => '',
        'generational' => '',
        'given' => '',
        'middle' => '',
        'title' => '',
      ),
      'minimum_components' => array(
        'credentials' => 0,
        'family' => 0,
        'generational' => 0,
        'given' => 0,
        'middle' => 0,
        'title' => 0,
      ),
      'override_format' => 'default',
      'show_component_required_marker' => 0,
      'size' => array(
        'credentials' => 35,
        'family' => 20,
        'generational' => 5,
        'given' => 20,
        'middle' => 20,
        'title' => 6,
      ),
      'title_display' => array(
        'credentials' => 'description',
        'family' => 'description',
        'generational' => 'description',
        'given' => 'description',
        'middle' => 'description',
        'title' => 'description',
      ),
      'title_field' => 'select',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'name',
      'settings' => array(),
      'type' => 'name_widget',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'node-advisory_council_member-field_profile_photo'.
  $field_instances['node-advisory_council_member-field_profile_photo'] = array(
    'bundle' => 'advisory_council_member',
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
    'field_name' => 'field_profile_photo',
    'label' => 'Profile photo',
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
        'context' => 'sdl_editor_representation',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-eng_paragraph_company-field_company'.
  $field_instances['paragraphs_item-eng_paragraph_company-field_company'] = array(
    'bundle' => 'eng_paragraph_company',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
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
    'field_name' => 'field_company',
    'label' => 'Institution',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-eng_paragraph_company-field_company_location'.
  $field_instances['paragraphs_item-eng_paragraph_company-field_company_location'] = array(
    'bundle' => 'eng_paragraph_company',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_company_location',
    'label' => 'Institution location',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-eng_paragraph_company-field_company_title'.
  $field_instances['paragraphs_item-eng_paragraph_company-field_company_title'] = array(
    'bundle' => 'eng_paragraph_company',
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
        'weight' => 1,
      ),
      'token' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_company_title',
    'label' => 'Title',
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
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-eng_paragraph_degree-field_degree_department'.
  $field_instances['paragraphs_item-eng_paragraph_degree-field_degree_department'] = array(
    'bundle' => 'eng_paragraph_degree',
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
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_degree_department',
    'label' => 'Department',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-eng_paragraph_degree-field_degree_type'.
  $field_instances['paragraphs_item-eng_paragraph_degree-field_degree_type'] = array(
    'bundle' => 'eng_paragraph_degree',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_degree_type',
    'label' => 'Degree type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-eng_paragraph_degree-field_degree_year'.
  $field_instances['paragraphs_item-eng_paragraph_degree-field_degree_year'] = array(
    'bundle' => 'eng_paragraph_degree',
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
      'token' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_degree_year',
    'label' => 'Degree year',
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
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Center');
  t('Degree information');
  t('Degree type');
  t('Degree year');
  t('Department');
  t('Institution');
  t('Institution information');
  t('Institution location');
  t('Name');
  t('Profile photo');
  t('Title');

  return $field_instances;
}
