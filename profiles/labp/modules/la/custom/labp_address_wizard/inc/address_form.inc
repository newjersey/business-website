<?php
/**
 * @file
 * Form for address lookup.
 */

/**
 * Returns the render array for the form.
 */
function labp_address_wizard_address_input($form, &$form_state) {
  $form['streetAddress'] = array(
    '#type' => 'textfield',
    '#title' => t(''),
    '#required' => TRUE,
    '#description' => 'Example: "14410 Sylvan St" or "Sunset Blvd / Vermont Ave"',
    '#size' => 20,
    '#maxlength' => 150,
    '#attributes' => array('placeholder'=>"Enter your address..."),
  );
  $form['lookup'] = array(
    '#type' => 'item',
    '#markup' => 'Search',
    '#id' => 'form-address-lookup',
    '#attributes' => array('class'=>array('wizard__address_button')),
    //'#field_prefix' => '<div class="wizard__address_buttons">',
    //'#field_suffix' => '</div>',
  );
  $form['#attributes'] = array('onsubmit' => 'return false');
  return $form;
}

/**
 * Validates the form.
 */
function labp_address_wizard_address_input_validate($form, &$form_state) {
}

/**
 * Add a submit handler/function to the form.
 *
 * This will add a completion message to the screen when the
 * form successfully processes
 */
function labp_address_wizard_address_input_submit($form, &$form_state) {
}
