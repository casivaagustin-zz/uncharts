<?php

$plugin = array(
  'title' => t('Summary Data'),
  'description' => t('Summarized Dat'),
  'single' => TRUE,
  'render callback' => 'un_cerf_sumarized_render_callback',
  'defaults' => array(),
  'category' => array(t('CERF')),
);

function un_cerf_sumarized_render_callback() {

  $filters = un_cerf_process_filters();

  $response = drupal_http_request('http://35.167.145.172/ochasite/controllers/getValuesController.php?' . $filters, array('timeout' => (60*3)));

  $data = json_decode($response->data);

  $block = new stdClass();
  $block->title = '';
  $block->content = theme('un_cerf_summary', array('data' => $data));
  return $block;
}