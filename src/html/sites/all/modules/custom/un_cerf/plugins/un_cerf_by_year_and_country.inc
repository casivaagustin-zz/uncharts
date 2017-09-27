<?php

$plugin = array(
  'title' => t('Founding By Country and Year'),
  'single' => TRUE,
  'render callback' => 'un_cerf_by_year_and_country_render_callback',
  'defaults' => array(),
  'category' => array(t('CERF')),
);

function un_cerf_by_year_and_country_render_callback() {
  $filters = un_cerf_process_filters();
  $response = uc_cerf_get_chart_values($filters);
  $data = json_decode($response->data);

  $formatted_data = array();

  $role = new stdClass();
  $role->role = 'annotation';
  $formatted_data[] = array(
    'Year',
    '2013',
    '2014',
    '2015',
    '2016',
    $role
  );

  for ($i = 0; $i < count($data->countryYearData->categories); $i++) {
    $_2013 = floatval(empty($data->countryYearData->{'_2013'}[$i]) ? 0 : $data->countryYearData->{'_2013'}[$i]);
    $_2014 = floatval(empty($data->countryYearData->{'_2014'}[$i]) ? 0 : $data->countryYearData->{'_2014'}[$i]);
    $_2015 = floatval(empty($data->countryYearData->{'_2015'}[$i]) ? 0 : $data->countryYearData->{'_2015'}[$i]);
    $_2016 = floatval(empty($data->countryYearData->{'_2016'}[$i]) ? 0 : $data->countryYearData->{'_2016'}[$i]);

    if (!($_2013 && $_2014 && $_2015 && $_2016)) {
      //continue;
    }
    $row = [
      check_plain($data->countryYearData->categories[$i]),
      $_2013,
      $_2014,
      $_2015,
      $_2016,
      '',
    ];
    $formatted_data[] = $row;
  }

  $block = new stdClass();
  $block->title = '';
  $block->content = theme('un_cerf_by_year_and_country', array('data' => $formatted_data));
  return $block;
}