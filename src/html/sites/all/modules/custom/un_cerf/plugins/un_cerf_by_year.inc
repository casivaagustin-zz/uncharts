<?php

$plugin = array(
  'title' => t('Founding By Year'),
  'single' => TRUE,
  'render callback' => 'un_cerf_by_year_render_callback',
  'defaults' => array(),
  'category' => array(t('CERF')),
);

function un_cerf_by_year_render_callback() {
  $filters = un_cerf_process_filters();
  $response = uc_cerf_get_chart_values($filters);
  $data = json_decode($response->data);

  $formatted_data = array();

  $role = new stdClass();
  $role->role = 'annotation';
  $formatted_data[] = array(
    'Type',
    'Underfounded emergencies',
    'Rapid Response',
    $role
  );

  $row = [];
  for ($i = 0; $i < count($data->yearWindowData->categories); $i++) {
    $row = [
      $data->yearWindowData->categories[$i],
      $data->yearWindowData->underfundedEmergencies[$i],
      $data->yearWindowData->rapidResponse[$i],
      '',
    ];
    $formatted_data[] = $row;
  }

  $block = new stdClass();
  $block->title = '';
  $block->content = theme('un_cerf_by_year', array('data' => $formatted_data));
  return $block;
}