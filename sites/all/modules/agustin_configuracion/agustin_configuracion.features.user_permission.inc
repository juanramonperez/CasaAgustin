<?php
/**
 * @file
 * agustin_configuracion.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function agustin_configuracion_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrador' => 'administrador',
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  return $permissions;
}
