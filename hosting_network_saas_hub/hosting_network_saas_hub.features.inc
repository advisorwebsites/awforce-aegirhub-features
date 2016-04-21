<?php
/**
 * @file
 * hosting_network_saas_hub.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hosting_network_saas_hub_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
}
