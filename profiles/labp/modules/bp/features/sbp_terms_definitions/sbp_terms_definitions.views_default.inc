<?php
/**
 * @file
 * sbp_terms_definitions.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sbp_terms_definitions_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'terms_definitions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Terms & Definitions';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_term_definitions_grouping',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Term & Definitions Grouping */
  $handler->display->display_options['fields']['field_term_definitions_grouping']['id'] = 'field_term_definitions_grouping';
  $handler->display->display_options['fields']['field_term_definitions_grouping']['table'] = 'field_data_field_term_definitions_grouping';
  $handler->display->display_options['fields']['field_term_definitions_grouping']['field'] = 'field_term_definitions_grouping';
  $handler->display->display_options['fields']['field_term_definitions_grouping']['label'] = '';
  $handler->display->display_options['fields']['field_term_definitions_grouping']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_term_definitions_grouping']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_term_definitions_grouping']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Sort criterion: Taxonomy term: Term &amp; Definitions Grouping (field_term_definitions_grouping) */
  $handler->display->display_options['sorts']['field_term_definitions_grouping_tid']['id'] = 'field_term_definitions_grouping_tid';
  $handler->display->display_options['sorts']['field_term_definitions_grouping_tid']['table'] = 'field_data_field_term_definitions_grouping';
  $handler->display->display_options['sorts']['field_term_definitions_grouping_tid']['field'] = 'field_term_definitions_grouping_tid';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Contextual filter: Taxonomy term: Term &amp; Definitions Grouping (field_term_definitions_grouping) */
  $handler->display->display_options['arguments']['field_term_definitions_grouping_tid']['id'] = 'field_term_definitions_grouping_tid';
  $handler->display->display_options['arguments']['field_term_definitions_grouping_tid']['table'] = 'field_data_field_term_definitions_grouping';
  $handler->display->display_options['arguments']['field_term_definitions_grouping_tid']['field'] = 'field_term_definitions_grouping_tid';
  $handler->display->display_options['arguments']['field_term_definitions_grouping_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_term_definitions_grouping_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_term_definitions_grouping_tid']['default_argument_options']['code'] = 'if (!empty($_GET[\'field_term_definitions_grouping_tid\']) 
and is_numeric($_GET[\'field_term_definitions_grouping_tid\'])) {
  return $_GET[\'field_term_definitions_grouping_tid\'];
} else {
  return 801;
}';
  $handler->display->display_options['arguments']['field_term_definitions_grouping_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_term_definitions_grouping_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_term_definitions_grouping_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'terms_definitions' => 'terms_definitions',
  );
  $export['terms_definitions'] = $view;

  return $export;
}
