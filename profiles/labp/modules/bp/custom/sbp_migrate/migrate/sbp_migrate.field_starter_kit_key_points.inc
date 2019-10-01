<?php
/**
 * @file
 *  Field collection field_starter_kit_key_points.
 */

/**
 * Base migration for Field Content Components.
 */
class SBPMigrationFieldStarterKitKeyPoints extends SBPMigration {

  public function __construct($arguments) {
    parent::__construct($arguments);
    
    $this->description = t('Field Collection migration from CSV source.');
    $this->dependencies = array('SBPMigrationStarterKit');
    $this->setProperties('field_starter_kit_key_points');
    $this->useTags = FALSE;

  // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV($this->getImportFilePath(), $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationFieldCollection(
      'field_starter_kit_key_points',
      array(
        'host_entity_type' => 'node'
      )
    );


    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationFieldCollection::getKeySchema()
    );
    
    $this->addFieldMapping('field_title', 'field_title');
    $this->addFieldMapping('host_entity_id', 'parent_id')
    ->sourceMigration('SBPMigrationStarterKit');

  }
  function csvcolumns() {
    $columns[] = array('id', 'ID');
    $columns[] = array('parent_id', 'Host ID');
    $columns[] = array('field_title', 'Title');
    return $columns;
  }
}
