<?php
/**
 * @file
 * sbp_permits.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function sbp_permits_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:sbp_permit:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'sbp_permit';
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
  $display->uuid = '0336d8f1-2c8c-4aeb-b2ee-f4f870d9aec1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d4ac75f6-deb7-4d33-a629-7566836d45cf';
    $pane->panel = 'left';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'vid:9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'fieldable_panels_pane' => (object) array(
        'bundle' => 'hero',
        'language' => 'und',
        'is_new' => TRUE,
        'title' => '',
        'link' => 0,
        'path' => '',
        'reusable' => 0,
        'admin_title' => '',
        'admin_description' => '',
        'category' => 'Reusable panes',
        'vid' => '9',
        'current_vid' => '',
        'revision' => 1,
        'fpid' => '7',
        'field_background' => array(
          'und' => array(
            0 => array(
              'value' => 0,
            ),
          ),
        ),
        'field_background_color' => array(
          'und' => array(
            0 => array(
              'value' => 'ffffff',
            ),
          ),
        ),
        'field_background_image' => array(
          'und' => array(),
        ),
        'field_calls_to_action' => array(
          'und' => array(),
        ),
        'field_icon' => array(
          'und' => array(),
        ),
        'field_line_and_subtitle_color' => array(
          'und' => array(
            0 => array(
              'value' => 'ffffff',
            ),
          ),
        ),
        'field_subtitle_1' => array(
          'und' => array(),
        ),
        'field_subtitle_2' => array(
          'und' => array(),
        ),
        'field_width' => array(
          'und' => array(),
        ),
        'log' => '',
        'created' => 1460513807,
        'timestamp' => 1460513807,
        'changed' => 1460513807,
        'uuid' => '',
        'uid' => '1',
        'vuuid' => '',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd4ac75f6-deb7-4d33-a629-7566836d45cf';
    $display->content['new-d4ac75f6-deb7-4d33-a629-7566836d45cf'] = $pane;
    $display->panels['left'][0] = 'new-d4ac75f6-deb7-4d33-a629-7566836d45cf';
    $pane = new stdClass();
    $pane->pid = 'new-68144c7f-16b7-4469-a839-22b7465d8e4d';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_industry_tag';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '68144c7f-16b7-4469-a839-22b7465d8e4d';
    $display->content['new-68144c7f-16b7-4469-a839-22b7465d8e4d'] = $pane;
    $display->panels['right'][0] = 'new-68144c7f-16b7-4469-a839-22b7465d8e4d';
    $pane = new stdClass();
    $pane->pid = 'new-ffc6bda0-c904-4317-8865-ed688a104919';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_permit_license_name';
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
    $pane->uuid = 'ffc6bda0-c904-4317-8865-ed688a104919';
    $display->content['new-ffc6bda0-c904-4317-8865-ed688a104919'] = $pane;
    $display->panels['right'][1] = 'new-ffc6bda0-c904-4317-8865-ed688a104919';
    $pane = new stdClass();
    $pane->pid = 'new-539c8395-493d-46f3-b5ad-b97a57409203';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '539c8395-493d-46f3-b5ad-b97a57409203';
    $display->content['new-539c8395-493d-46f3-b5ad-b97a57409203'] = $pane;
    $display->panels['right'][2] = 'new-539c8395-493d-46f3-b5ad-b97a57409203';
    $pane = new stdClass();
    $pane->pid = 'new-990d4d3c-e23a-4524-a120-8ebb38e503a8';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_apply_online';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'link_default',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '990d4d3c-e23a-4524-a120-8ebb38e503a8';
    $display->content['new-990d4d3c-e23a-4524-a120-8ebb38e503a8'] = $pane;
    $display->panels['right'][3] = 'new-990d4d3c-e23a-4524-a120-8ebb38e503a8';
    $pane = new stdClass();
    $pane->pid = 'new-18afba2f-3ee4-473a-8e12-de608121477c';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_information';
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
    $pane->uuid = '18afba2f-3ee4-473a-8e12-de608121477c';
    $display->content['new-18afba2f-3ee4-473a-8e12-de608121477c'] = $pane;
    $display->panels['right'][4] = 'new-18afba2f-3ee4-473a-8e12-de608121477c';
    $pane = new stdClass();
    $pane->pid = 'new-2649e032-06f1-491f-bdd5-486a87a12c7c';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_cost';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '2649e032-06f1-491f-bdd5-486a87a12c7c';
    $display->content['new-2649e032-06f1-491f-bdd5-486a87a12c7c'] = $pane;
    $display->panels['right'][5] = 'new-2649e032-06f1-491f-bdd5-486a87a12c7c';
    $pane = new stdClass();
    $pane->pid = 'new-6f250db2-1541-4d6c-bab7-0ec4047878a9';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_permit_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '6f250db2-1541-4d6c-bab7-0ec4047878a9';
    $display->content['new-6f250db2-1541-4d6c-bab7-0ec4047878a9'] = $pane;
    $display->panels['right'][6] = 'new-6f250db2-1541-4d6c-bab7-0ec4047878a9';
    $pane = new stdClass();
    $pane->pid = 'new-89ecc88e-13fa-4e4e-9900-4951d943f893';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_issuing_department';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '89ecc88e-13fa-4e4e-9900-4951d943f893';
    $display->content['new-89ecc88e-13fa-4e4e-9900-4951d943f893'] = $pane;
    $display->panels['right'][7] = 'new-89ecc88e-13fa-4e4e-9900-4951d943f893';
    $pane = new stdClass();
    $pane->pid = 'new-65569ec0-5454-43ef-a0c5-fb71fcc3c58f';
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '65569ec0-5454-43ef-a0c5-fb71fcc3c58f';
    $display->content['new-65569ec0-5454-43ef-a0c5-fb71fcc3c58f'] = $pane;
    $display->panels['right'][8] = 'new-65569ec0-5454-43ef-a0c5-fb71fcc3c58f';
    $pane = new stdClass();
    $pane->pid = 'new-85b9811f-eeed-4718-b59e-6b6960c821bd';
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
    $pane->uuid = '85b9811f-eeed-4718-b59e-6b6960c821bd';
    $display->content['new-85b9811f-eeed-4718-b59e-6b6960c821bd'] = $pane;
    $display->panels['top'][0] = 'new-85b9811f-eeed-4718-b59e-6b6960c821bd';
    $pane = new stdClass();
    $pane->pid = 'new-0757e8a1-037a-4ff4-891d-7e3fd7d0a68d';
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
    $pane->uuid = '0757e8a1-037a-4ff4-891d-7e3fd7d0a68d';
    $display->content['new-0757e8a1-037a-4ff4-891d-7e3fd7d0a68d'] = $pane;
    $display->panels['top'][1] = 'new-0757e8a1-037a-4ff4-891d-7e3fd7d0a68d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-68144c7f-16b7-4469-a839-22b7465d8e4d';
  $panelizer->display = $display;
  $export['node:sbp_permit:default'] = $panelizer;

  return $export;
}
