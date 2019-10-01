<?php

/**
 * @file
 * Settings form.
 */

/**
 * Config form shown at admin/config/media/resmushit.
 */
function resmushit_admin($form, &$form_state) {

  $form['resmushit_debug'] = array(
    '#type' => 'select',
    '#title' => t('Show debugging information'),
    '#default_value' => variable_get('resmushit_debug', 0),
    '#description' => t('Additional debugging messages in Watchdog to help debugging (e.g., optimalization successes). Default: No.'),
    '#options' => array(0 => 'No', 1 => 'Yes'),
    '#required' => TRUE,
  );

  $form['resmushit_timeout'] = array(
    '#type' => 'textfield',
    '#title' => t('reSmush.it timeout'),
    '#default_value' => variable_get('resmushit_timeout', RESMUSHIT_TIMEOUT),
    '#size' => 3,
    '#maxlength' => 2,
    '#description' => t('Maximum number of seconds to wait for a response from reSmush.it. Default: %resmushit_timeout.', array('%resmushit_timeout' => RESMUSHIT_TIMEOUT)),
    '#required' => TRUE,
  );

  $form['resmushit_log_size'] = array(
    '#type' => 'textfield',
    '#title' => t('Operation log size'),
    '#default_value' => variable_get('resmushit_log_size', RESMUSHIT_LOG_SIZE),
    '#size' => 4,
    '#maxlength' => 3,
    '#description' => t('Maximum number of log entries to be shown on the module dashboard (successful and unsuccessful optimalization requests). Default: %resmushit_log_size.', array('%resmushit_log_size' => RESMUSHIT_LOG_SIZE)),
    '#required' => TRUE,
  );

  return system_settings_form($form);
}
