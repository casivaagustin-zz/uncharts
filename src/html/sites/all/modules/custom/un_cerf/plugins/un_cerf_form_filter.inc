<?php

$plugin = [
  'title' => t('Form Filters'),
  'description' => t('Filters for the Blocks'),
  'single' => TRUE,
  'render callback' => 'un_cerf_form_filter_render_callback',
  'defaults' => [],
  'category' => [t('CERF')],
];

function un_cerf_form_filter_render_callback() {
  $block = new stdClass();
  $block->title = '';
  //$block->content = theme('un_cerf_form_filter', array());
  $block->content = drupal_get_form('un_cerf_form_form_filter');
  return $block;
}

function un_cerf_form_form_filter() {
  $form = [];
  $form['title'] = [
    '#markup' => '<h3>You may filter funding by</h3>',
  ];

  $form['yearselect'] = [
    '#type' => 'select',
    '#title' => t('Year'),
    '#options' => [
      'All' => 'All',
      '2013' => '2013',
      '2014' => '2014',
      '2015' => '2015',
      '2016' => '2016',
    ],
    '#default_value' => !empty($_SESSION['filters']['year']) ? $_SESSION['filters']['year'] : 'All',
  ];

  $form['windowselect'] = [
    '#type' => 'select',
    '#title' => t('Window'),
    '#options' => [
      'All' => '--Both Windows-',
      '3' => 'Rapid Response',
      '2' => 'Underfunded Emergencies',
    ],
    '#default_value' => !empty($_SESSION['filters']['windowID']) ? $_SESSION['filters']['windowID'] : 'All',
  ];

  $form['agencyselect'] = [
    '#type' => 'select',
    '#title' => t('Agency'),
    '#options' => [
      "All" => "--All Agencies--",
      "3" => "WHO",
      "4" => "CEF",
      "2" => "WFP",
      "11" => "HCR",
      "17" => "WOM",
      "5" => "FAO",
      "12" => "OPS",
      "7" => "IOM",
      "15" => "OCH",
      "1" => "UDP",
      "16" => "ODC",
      "13" => "RWA",
      "22" => "ILO",
      "6" => "FPA",
      "14" => "ESC",
    ],
    '#default_value' => !empty($_SESSION['filters']['agencyID']) ? $_SESSION['filters']['agencyID'] : 'All',
  ];

  $form['sectorselect'] = [
    '#type' => 'select',
    '#title' => t('Sector'),
    '#options' => [
      "All" => "--All Sectors--",
      "9" => "Health",
      "6" => "Early Recovery",
      "19" => "Livestock",
      "8" => "Food Aid",
      "4" => "Common Humanitarian Air Services",
      "1" => "Agriculture",
      "15" => "Human Rights",
      "25" => "Child Protection",
      "7" => "Education",
      "22" => "Non-Food Items",
      "17" => "Shelter",
      "14" => "Protection",
      "13" => "Multi-sector",
      "16" => "Safety and Security of Staff and Operations",
      "3" => "Common Logistics",
    ],
    '#default_value' => !empty($_SESSION['filters']['sectorID']) ? $_SESSION['filters']['sectorID'] : 'All',
  ];

  $form['emergencyselect'] = [
    '#type' => 'select',
    '#title' => t('Emergency'),
    '#options' => [
      "All" => "All",
      "Biological (human disease outbreak and other health emergency)" => "Biological (human disease outbreak and other health emergency)",
      "Geophysical" => "Geophysical",
      "Meteorological, Hydrological and Climatological" => "Meteorological, Hydrological and Climatological",
      "Conflict-related" => "Conflict-related",
      "Economic" => "Economic",
      "Biological (animal and flora)" => "Biological (animal and flora)",
      "Internal strife" => "Internal strife",
    ],
    '#default_value' => !empty($_SESSION['filters']['emergencyID']) ? $_SESSION['filters']['emergencyID'] : 'All',
  ];

  $form['submit'] = ['#type' => 'submit', '#value' => t('Submit')];
  $form['submit_clear'] = ['#type' => 'submit', '#value' => t('Clear')];

  return $form;
}

function un_cerf_form_form_filter_submit() {

  if ($_POST['op'] == 'Clear') {
    unset($_SESSION['filters']);
    return;
  }

  $inputs = [
    'year' => 'yearselect',
    'windowID' => 'windowselect',
    'agencyID' => 'agencyselect',
    'sectorID' => 'sectorselect',
    'emergency' => 'emergencyselect',
    'emergencyID' => 'emergencyselect',
    'countryID' => 'countryID',
  ];

  $filters = [];
  foreach ($inputs as $key => $input) {
    if (!empty($_POST[$input])) {
      $filters[$key] = $_POST[$input];
    }
    else {
      $filters[$key] = 'All';
    }
  }
  $_SESSION['filters'] = $filters;
}