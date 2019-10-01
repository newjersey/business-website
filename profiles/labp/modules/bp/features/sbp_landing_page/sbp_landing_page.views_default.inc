<?php
/**
 * @file
 * sbp_landing_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sbp_landing_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sbp_landing_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'SBP Landing Page';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
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
    'sbp_landing_page' => 'sbp_landing_page',
  );

  /* Display: Landing Page Featured Content */
  $handler = $view->new_display('panel_pane', 'Landing Page Featured Content', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Content */
  $handler->display->display_options['fields']['field_content']['id'] = 'field_content';
  $handler->display->display_options['fields']['field_content']['table'] = 'field_data_field_content';
  $handler->display->display_options['fields']['field_content']['field'] = 'field_content';
  $handler->display->display_options['fields']['field_content']['label'] = '';
  $handler->display->display_options['fields']['field_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_content']['settings'] = array(
    'view_mode' => 'teaser',
    'links' => 0,
  );
  $handler->display->display_options['fields']['field_content']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_content']['delta_offset'] = '0';
  $export['sbp_landing_page'] = $view;

  return $export;
}
