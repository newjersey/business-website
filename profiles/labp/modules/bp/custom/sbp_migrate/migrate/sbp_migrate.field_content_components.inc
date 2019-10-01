<?php
/**
 * @file
 *  Field collection Content Components migration.
 */

/**
 * Base migration for Field Content Components.
 */
class SBPMigrationFieldContentComponents extends SBPMigration {

  public function __construct($arguments) {
    parent::__construct($arguments);
    
    $this->description = t('Field Collection migration from CSV source.');
    $this->setProperties('field_content_components');
    $this->useTags = FALSE;

  // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV($this->getImportFilePath(), $this->csvcolumns(), array('header_rows' => 1));

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
        
    // Set Defaults
    $this->addFieldMapping('field_component_body:format')->defaultValue(NULL);
    $this->addFieldMapping('field_note:format')->defaultValue(NULL);
    $this->addFieldMapping('field_link:attributes')->defaultValue(array());
    $this->addFieldMapping('field_link:language')->defaultValue(LANGUAGE_NONE);

    
    $this->addFieldMapping('field_heading', 'field_heading');
    $this->addFieldMapping('field_component_body', 'field_component_body');
    $this->addFieldMapping('field_note', 'field_note');
    $this->addFieldMapping('field_link', 'field_link');
    $this->addFieldMapping('field_link:title', 'link_title');
    //$this->addFieldMapping('field_related_permits', 'permits');
  }
  function csvcolumns() {
    $columns[] = array('id', 'ID');
    $columns[] = array('parent_id', 'Host ID');
    $columns[] = array('field_heading', 'Heading');
    $columns[] = array('field_component_body', 'Body');
    $columns[] = array('field_note', 'Note');
    $columns[] = array('field_link', 'Link');
    $columns[] = array('link_title', 'Link Title');
    return $columns;
  }

}

/**
 * Migration of Field Content Components for SBP Content node type
 */
class SBPMigrationSBPContentComponents extends SBPMigrationFieldContentComponents {
  public function __construct($arguments) {
    parent::__construct($arguments);
      $this->destination = new MigrateDestinationFieldCollection(
        'field_content_components',
        array(
          'host_entity_type' => 'node'
        )
      );
      $this->dependencies = array('SBPMigrationNodeContent');
      $this->addFieldMapping('host_entity_id', 'parent_id')
      ->sourceMigration('SBPMigrationNodeContent');
  }
}

/**
 * Migration of Field Content Components for SBP Starter Kit Key Components
 */
class SBPMigrationFieldStarterKitFieldContentComponents extends SBPMigrationFieldContentComponents {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->destination = new MigrateDestinationFieldCollection(
      'field_content_components',
      array(
        'host_entity_type' => 'field_collection_item'
      )
    );
    $this->dependencies = array('SBPMigrationFieldStarterKitKeyPoints');
      $this->addFieldMapping('host_entity_id', 'parent_id')
      ->sourceMigration('SBPMigrationFieldStarterKitKeyPoints');
  }
}