<?php
/**
 * @file
 *
 * Tokens support for Views Alias
 */

/**
 * Implemntats hook_tokens()
 */
function view_alias_tokens($type, $tokens, $data = array(), $options = array()) {
    $replacements = array();
    $sanitize = !empty($options['sanitize']);

    if (substr($type, 0, 10) == 'view_alias') {
      return $data;
    }

    return $replacements;
}
