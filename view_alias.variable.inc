<?php

function view_alias_variable_info() {
  $vars = array();

  $aliasable = _get_aliasable_displays();
  foreach ($aliasable as $alias) {
    $pattern_id = view_alias_pattern_id($alias);
    $vars[$pattern_id] = array(
      'title' => $alias->bundle,
      'description' => t('Path alias for %view', array('%view' => $alias->display_name)),
      'type' => 'string',
      'default' => view_alias_alias_pattern($alias),
      'group' => 'view_alias',
    );
  }

  return $vars;
}

function view_alias_variable_group_info() {
  $groups = array();

  $groups['view_alias'] = array(
    'title' => t('View Alias'),
    'description' => t('Path alias settings for views'),
    'access' => 'administer pathauto',
    'path' => array('admin/config/search/path/patterns'),
  );

  return $groups;
}
