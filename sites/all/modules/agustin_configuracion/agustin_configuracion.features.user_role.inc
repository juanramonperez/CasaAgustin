<?php
/**
 * @file
 * agustin_configuracion.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function agustin_configuracion_user_default_roles() {
  $roles = array();

  // Exported role: administrador.
  $roles['administrador'] = array(
    'name' => 'administrador',
    'weight' => 4,
  );

  return $roles;
}
