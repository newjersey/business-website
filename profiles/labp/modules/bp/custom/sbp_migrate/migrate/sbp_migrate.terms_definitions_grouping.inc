<?php
/**
 * @file
 *  Taxonomy Industry Tags migration.
 */

class SBPMigrationTermTermsDefinitionsGrouping extends SBPMigrationTerm {

  public function __construct($arguments) {
    $this->setProperties('terms_definitions_grouping');
    parent::__construct($arguments);
    $this->description = t('Import Business Needs terms.');
  }

  function csvcolumns() {
    $columns = parent::csvcolumns();
    return $columns;
  }

}