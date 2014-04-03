<?php

function gsb_twitter_cards_metatag_config_default() {
  $configs = array();

  $config = new stdClass();
  $config->disabled = FALSE; /* Edit this to true to make a default config disabled initially */
  $config->api_version = 1;
  $config->instance = 'node:working_paper';
  $config->config = array(
    'twitter:description' => array(
      'value' => '[node:field_description]',
    ),
  );

  $configs[] = $config;

  return $configs;
}
