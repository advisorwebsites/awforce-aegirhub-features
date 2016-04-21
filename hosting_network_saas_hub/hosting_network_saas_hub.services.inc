<?php
/**
 * @file
 * hosting_network_saas_hub.services.inc
 */

/**
 * Implements hook_default_services_endpoint().
 */
function hosting_network_saas_hub_default_services_endpoint() {
  $export = array();

  $endpoint = new stdClass();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 3;
  $endpoint->name = 'hosting_network_hub';
  $endpoint->server = 'rest_server';
  $endpoint->path = 'hosting_network_hub';
  $endpoint->authentication = array(
    'services_oauth' => 'services_oauth',
  );
  $endpoint->server_settings = array();
  $endpoint->resources = array(
    'hosting_network_saas' => array(
      'actions' => array(
        'list_servers' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
        'select_server' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
        'dispatch_saas_request' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
      ),
    ),
    'hosting_network_server' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
        'index' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
      ),
    ),
  );
  $endpoint->debug = 0;
  $export['hosting_network_hub'] = $endpoint;

  return $export;
}
