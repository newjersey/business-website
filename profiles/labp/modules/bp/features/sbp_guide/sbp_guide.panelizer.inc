<?php
/**
 * @file
 * sbp_guide.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function sbp_guide_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:sbp_guide:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'sbp_guide';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
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
  $display->title = '%node:title';
  $display->uuid = '1f35f229-4c22-4946-9e94-11962ea04afe';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-107e7fa8-8a04-4ed7-ad28-358390f0b557';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '107e7fa8-8a04-4ed7-ad28-358390f0b557';
    $display->content['new-107e7fa8-8a04-4ed7-ad28-358390f0b557'] = $pane;
    $display->panels['left'][0] = 'new-107e7fa8-8a04-4ed7-ad28-358390f0b557';
    $pane = new stdClass();
    $pane->pid = 'new-94904c1c-42fc-49ed-b971-a62fe087d5a1';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'quickedit' => array(
          'editor' => 'plain_text',
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '94904c1c-42fc-49ed-b971-a62fe087d5a1';
    $display->content['new-94904c1c-42fc-49ed-b971-a62fe087d5a1'] = $pane;
    $display->panels['right'][0] = 'new-94904c1c-42fc-49ed-b971-a62fe087d5a1';
    $pane = new stdClass();
    $pane->pid = 'new-24194630-6bcd-48e2-81db-2c364f72ecc8';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_content_components';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'field_collection_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'add' => 'Add',
        'delete' => 'Delete',
        'description' => TRUE,
        'edit' => 'Edit',
        'quickedit' => array(
          'editor' => 'form',
        ),
        'view_mode' => 'full',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '24194630-6bcd-48e2-81db-2c364f72ecc8';
    $display->content['new-24194630-6bcd-48e2-81db-2c364f72ecc8'] = $pane;
    $display->panels['right'][1] = 'new-24194630-6bcd-48e2-81db-2c364f72ecc8';
    $pane = new stdClass();
    $pane->pid = 'new-59675d29-5ab0-4742-8879-742567035d49';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_document';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'file_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'quickedit' => array(
          'editor' => 'form',
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '59675d29-5ab0-4742-8879-742567035d49';
    $display->content['new-59675d29-5ab0-4742-8879-742567035d49'] = $pane;
    $display->panels['right'][2] = 'new-59675d29-5ab0-4742-8879-742567035d49';
    $pane = new stdClass();
    $pane->pid = 'new-a414eb2d-b879-49a9-90e2-458a55bc6bc3';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_heading';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'quickedit' => array(
          'editor' => 'plain_text',
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'a414eb2d-b879-49a9-90e2-458a55bc6bc3';
    $display->content['new-a414eb2d-b879-49a9-90e2-458a55bc6bc3'] = $pane;
    $display->panels['right'][3] = 'new-a414eb2d-b879-49a9-90e2-458a55bc6bc3';
    $pane = new stdClass();
    $pane->pid = 'new-fc9a8b68-7971-4009-9916-fe298dd5e7fe';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'quickedit' => array(
          'editor' => 'plain_text',
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'fc9a8b68-7971-4009-9916-fe298dd5e7fe';
    $display->content['new-fc9a8b68-7971-4009-9916-fe298dd5e7fe'] = $pane;
    $display->panels['right'][4] = 'new-fc9a8b68-7971-4009-9916-fe298dd5e7fe';
    $pane = new stdClass();
    $pane->pid = 'new-d86ec7d1-bd18-4f71-b4e8-b72115e10295';
    $pane->panel = 'top';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd86ec7d1-bd18-4f71-b4e8-b72115e10295';
    $display->content['new-d86ec7d1-bd18-4f71-b4e8-b72115e10295'] = $pane;
    $display->panels['top'][0] = 'new-d86ec7d1-bd18-4f71-b4e8-b72115e10295';
    $pane = new stdClass();
    $pane->pid = 'new-14d038ec-3dc2-4679-b7eb-a6e7ee1e76b1';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_hero';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'field_collection_fields',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '14d038ec-3dc2-4679-b7eb-a6e7ee1e76b1';
    $display->content['new-14d038ec-3dc2-4679-b7eb-a6e7ee1e76b1'] = $pane;
    $display->panels['top'][1] = 'new-14d038ec-3dc2-4679-b7eb-a6e7ee1e76b1';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-94904c1c-42fc-49ed-b971-a62fe087d5a1';
  $panelizer->display = $display;
  $export['node:sbp_guide:default'] = $panelizer;

  return $export;
}
