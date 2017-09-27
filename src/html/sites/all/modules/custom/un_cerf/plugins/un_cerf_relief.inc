<?php

$plugin = array(
  'title' => t('Relief Data'),
  'description' => t('Relief Data'),
  'single' => TRUE,
  'render callback' => 'un_cerf_relief_render_callback',
  'defaults' => array(),
  'category' => array(t('CERF')),
);

function un_cerf_relief_render_callback() {
  $qarg = urlencode('"UN Office for the Coordination of Humanitarian Affairs"');
  $response = drupal_http_request('https://api.reliefweb.int/v1/reports?query[fields][]=source&query[value]=('. $qarg . ')&fields[include][]=file.preview&fields[include][]=file.url&limit=3');
  $data = json_decode($response->data);

  $block = new stdClass();
  $block->title = '';
  $block->content = theme('un_cerf_relief', array('data' => $data->data));
  return $block;
}