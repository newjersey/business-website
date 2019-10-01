<?php
/**
 * @file
 * Business Portal Permit migrate.
 */

class SBPMigrationPermit extends SBPMigrationNode {

  public function __construct($arguments) {
    $this->setProperties('sbp_permit');
    $this->useTags = FALSE;
    $this->useImage = FALSE;
    parent::__construct($arguments);
    $this->description = t('Import Permits.');
    $this->addFieldMapping('field_industry_tag', 'industry');
    //$this->dependencies = array('SBPMigrationTermIndustryTags');
  }

  function csvcolumns() {
    $columns = parent::csvcolumns();
    $columns[] = array('industry', 'Industry Tag');
    return $columns;
  }

}
