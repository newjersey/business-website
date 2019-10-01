<?php
/**
 * @file
 * sbp_content.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function sbp_content_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:sbp_content:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'sbp_content';
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
  $display->uuid = '93c3058e-1e05-4385-b582-66fc6c0647a2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-30d9b107-9ec5-4f5f-8e97-96f1fb789e64';
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
    $pane->uuid = '30d9b107-9ec5-4f5f-8e97-96f1fb789e64';
    $display->content['new-30d9b107-9ec5-4f5f-8e97-96f1fb789e64'] = $pane;
    $display->panels['left'][0] = 'new-30d9b107-9ec5-4f5f-8e97-96f1fb789e64';
    $pane = new stdClass();
    $pane->pid = 'new-18f019af-4d5c-4dd0-858d-d22dd86bfc9c';
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
    $pane->uuid = '18f019af-4d5c-4dd0-858d-d22dd86bfc9c';
    $display->content['new-18f019af-4d5c-4dd0-858d-d22dd86bfc9c'] = $pane;
    $display->panels['right'][0] = 'new-18f019af-4d5c-4dd0-858d-d22dd86bfc9c';
    $pane = new stdClass();
    $pane->pid = 'new-d9fd16eb-c88b-4bbe-941f-55273f7e1369';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_subtitle';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd9fd16eb-c88b-4bbe-941f-55273f7e1369';
    $display->content['new-d9fd16eb-c88b-4bbe-941f-55273f7e1369'] = $pane;
    $display->panels['right'][1] = 'new-d9fd16eb-c88b-4bbe-941f-55273f7e1369';
    $pane = new stdClass();
    $pane->pid = 'new-6fce131b-b2eb-46be-8be9-8b632b7fb69b';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_featured_resources';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => FALSE,
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
    $pane->uuid = '6fce131b-b2eb-46be-8be9-8b632b7fb69b';
    $display->content['new-6fce131b-b2eb-46be-8be9-8b632b7fb69b'] = $pane;
    $display->panels['right'][2] = 'new-6fce131b-b2eb-46be-8be9-8b632b7fb69b';
    $pane = new stdClass();
    $pane->pid = 'new-dda2934b-1914-42f2-8913-fbd680d8f8bc';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'dda2934b-1914-42f2-8913-fbd680d8f8bc';
    $display->content['new-dda2934b-1914-42f2-8913-fbd680d8f8bc'] = $pane;
    $display->panels['right'][3] = 'new-dda2934b-1914-42f2-8913-fbd680d8f8bc';
    $pane = new stdClass();
    $pane->pid = 'new-8d03f046-06ff-47da-9d39-f0f69af333e8';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_related_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '8d03f046-06ff-47da-9d39-f0f69af333e8';
    $display->content['new-8d03f046-06ff-47da-9d39-f0f69af333e8'] = $pane;
    $display->panels['right'][4] = 'new-8d03f046-06ff-47da-9d39-f0f69af333e8';
    $pane = new stdClass();
    $pane->pid = 'new-9a2341cb-b2f1-4231-a0b9-2e42ed285491';
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
    $pane->uuid = '9a2341cb-b2f1-4231-a0b9-2e42ed285491';
    $display->content['new-9a2341cb-b2f1-4231-a0b9-2e42ed285491'] = $pane;
    $display->panels['top'][0] = 'new-9a2341cb-b2f1-4231-a0b9-2e42ed285491';
    $pane = new stdClass();
    $pane->pid = 'new-92f1e649-b07c-450f-ba59-4951c780d036';
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
    $pane->uuid = '92f1e649-b07c-450f-ba59-4951c780d036';
    $display->content['new-92f1e649-b07c-450f-ba59-4951c780d036'] = $pane;
    $display->panels['top'][1] = 'new-92f1e649-b07c-450f-ba59-4951c780d036';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-18f019af-4d5c-4dd0-858d-d22dd86bfc9c';
  $panelizer->display = $display;
  $export['node:sbp_content:default'] = $panelizer;

  return $export;
}
