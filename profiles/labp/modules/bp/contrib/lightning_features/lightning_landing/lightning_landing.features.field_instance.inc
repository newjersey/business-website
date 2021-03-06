<?php
/**
 * @file
 * lightning_landing.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function lightning_landing_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-landing-field_landing_identifiers'.
  $field_instances['node-landing-field_landing_identifiers'] = array(
    'bundle' => 'landing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Apply a taxonomy term to be used to sort and help identify <em>landing pages</em> created on the site.',
    'display' => array(
      'alternate' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'thumbnail' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_landing_identifiers',
    'label' => 'Identifiers',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'node-landing-field_landing_tags'.
  $field_instances['node-landing-field_landing_tags'] = array(
    'bundle' => 'landing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Additional taxonomy term reference for general tagging to help aggregate landing pages with other tagged content (e.g. Articles).',
    'display' => array(
      'alternate' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'thumbnail' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_landing_tags',
    'label' => 'Tags',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 43,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional taxonomy term reference for general tagging to help aggregate landing pages with other tagged content (e.g. Articles).');
  t('Apply a taxonomy term to be used to sort and help identify <em>landing pages</em> created on the site.');
  t('Identifiers');
  t('Tags');

  return $field_instances;
}
