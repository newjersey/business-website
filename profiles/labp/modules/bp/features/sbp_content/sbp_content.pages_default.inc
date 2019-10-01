<?php
/**
 * @file
 * sbp_content.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function sbp_content_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_96b801a5-5b51-4209-bd26-98a23725ee29';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -98;
  $handler->conf = array(
    'title' => 'Business Portal Content',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'business-portal-content',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'sbp_content' => 'sbp_content',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '866552dc-9fbd-4c4b-91ad-ecf056612a0a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-dc16f38f-fc12-444a-8a34-dce2e5ac92c1';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'sbp_business_portal_content-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dc16f38f-fc12-444a-8a34-dce2e5ac92c1';
    $display->content['new-dc16f38f-fc12-444a-8a34-dce2e5ac92c1'] = $pane;
    $display->panels['left'][0] = 'new-dc16f38f-fc12-444a-8a34-dce2e5ac92c1';
    $pane = new stdClass();
    $pane->pid = 'new-c9091a16-2ba2-43d7-adef-e889007940a2';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_content_components';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'field_collection_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'edit' => 'Edit',
        'delete' => 'Delete',
        'add' => 'Add',
        'description' => 1,
        'view_mode' => 'full',
      ),
      'context' => array(),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c9091a16-2ba2-43d7-adef-e889007940a2';
    $display->content['new-c9091a16-2ba2-43d7-adef-e889007940a2'] = $pane;
    $display->panels['right'][0] = 'new-c9091a16-2ba2-43d7-adef-e889007940a2';
    $pane = new stdClass();
    $pane->pid = 'new-4b219889-8183-466b-853f-825638d3265a';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'sbp_business_portal_content-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4b219889-8183-466b-853f-825638d3265a';
    $display->content['new-4b219889-8183-466b-853f-825638d3265a'] = $pane;
    $display->panels['right'][1] = 'new-4b219889-8183-466b-853f-825638d3265a';
    $pane = new stdClass();
    $pane->pid = 'new-26dd6df9-ea3b-4448-a636-789a803ef18d';
    $pane->panel = 'top';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => array(),
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '26dd6df9-ea3b-4448-a636-789a803ef18d';
    $display->content['new-26dd6df9-ea3b-4448-a636-789a803ef18d'] = $pane;
    $display->panels['top'][0] = 'new-26dd6df9-ea3b-4448-a636-789a803ef18d';
    $pane = new stdClass();
    $pane->pid = 'new-36631d1a-152f-48f6-a5ac-aa11df212655';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_subtitle';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => array(),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '36631d1a-152f-48f6-a5ac-aa11df212655';
    $display->content['new-36631d1a-152f-48f6-a5ac-aa11df212655'] = $pane;
    $display->panels['top'][1] = 'new-36631d1a-152f-48f6-a5ac-aa11df212655';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_96b801a5-5b51-4209-bd26-98a23725ee29'] = $handler;

  return $export;
}
