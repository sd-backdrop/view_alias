VIEW ALIAS

This module aids in the bulk creation and deletion of SEO friendly view aliases.

In the past I've worked on several sites that utilize a single view which takes in a single taxonomy term id to display a list
of related items.  And on these sites maintaining the url aliases for them was a pain to do by hand, so I wrote this module
to do the repetition for me.


SETUP
1. untar the tarball into your drupal modules directory
2. enable the module
3. visit admin/settings/view_alias for configuration options.

Generating Aliases
This is our bulk process to build all of the view aliases.
Click the "Generate Aliases" field link for the fieldset that will display a section for each view that accepts term id arguments.
To create aliases:
1. Inside the fieldset for the view that you wish to create aliases for:
  a. select the vocabulary
  b. check the "Update aliases for <viewname>" checkbox
  c. select an Update Action
  d. click the "Update Aliases" button.
    Now you will see a list of all the aliases created.

Recurring Aliases
This works of hook_taxonomy to update aliases when terms are updated, created or deleted.
For each view:
1. check "Create/Update/Delete aliases for <view-name> on term creation"
2. select the "Vocabulary to alias" from the select box.
3. Save configuration.


FAQ
WHY NOT JUST USE <view-name>/<term-name>?
I kept running into duplicate terms when not using the full path.  I also found that people were turned off by some of the special characters that showed up in the browser bar.

WHAT ABOUT PATHAUTO?
I tried adding this at first to pathauto, but got bogged down in some of the details and tokens.  So I just created a new module
that requires pathauto to be enabled.  I use some of the pathauto functions for generating the names.  Also, one important thing
to point out is that the aliases point to a view and dont run off the taxonomy/term path, so your aliases would end up like
myviewname/some_term_name aliased to taxonomy/term/20


Eric Mckenna, Phase2 Technology
emckenna@phase2technology.com
