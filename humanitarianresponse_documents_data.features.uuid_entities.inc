<?php
/**
 * @file
 * humanitarianresponse_documents_data.features.uuid_entities.inc
 */

/**
 * Implements hook_uuid_default_entities().
 */
function humanitarianresponse_documents_data_uuid_default_entities() {
  $entities = array();

  $entities['document_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/8354cddf-f005-34d4-e9f5-1f02ce24ec61',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Reports',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Reports',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Reports',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Rapports',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'document-types/reports',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '8354cddf-f005-34d4-e9f5-1f02ce24ec61',
    'vocabulary_machine_name' => 'document_types',
    'weight' => '0',
  );
  $entities['document_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/2765ccd9-b42a-cae4-052b-0554b0530c4d',
      'cause' => FALSE,
    ),
    'description' => 'a report that examines carefully and methodically a given topic mater; Perhaps broken down for consideration of constituent parts.',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'a report that examines carefully and methodically a given topic mater; Perhaps broken down for consideration of constituent parts.',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'a report that examines carefully and methodically a given topic mater; Perhaps broken down for consideration of constituent parts.',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'a report that examines carefully and methodically a given topic mater; Perhaps broken down for consideration of constituent parts.',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Analysis Report',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Analysis Report',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Analysis Report',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Rapport d\'Analyse',
        ),
      ),
    ),
    'parent' => array(
      0 => '8354cddf-f005-34d4-e9f5-1f02ce24ec61',
    ),
    'path' => array(
      'alias' => 'document-types/analysis-report',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '2765ccd9-b42a-cae4-052b-0554b0530c4d',
    'vocabulary_machine_name' => 'document_types',
    'weight' => '0',
  );
  $entities['document_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/d2b94d63-2c44-d594-2195-9b60397f11de',
      'cause' => FALSE,
    ),
    'description' => 'a report that appraises or measures the amount of something; Example: a report outlining the estimated value of damage housing OR the number of affected population.',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'a report that appraises or measures the amount of something; Example: a report outlining the estimated value of damage housing OR the number of affected population.',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'a report that appraises or measures the amount of something; Example: a report outlining the estimated value of damage housing OR the number of affected population.',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'a report that appraises or measures the amount of something; Example: a report outlining the estimated value of damage housing OR the number of affected population.',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Assessment Report',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Assessment Report',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Assessment Report',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Rapport d\'Evaluation',
        ),
      ),
    ),
    'parent' => array(
      0 => '8354cddf-f005-34d4-e9f5-1f02ce24ec61',
    ),
    'path' => array(
      'alias' => 'document-types/assessment-report',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'd2b94d63-2c44-d594-2195-9b60397f11de',
    'vocabulary_machine_name' => 'document_types',
    'weight' => '0',
  );
  $entities['document_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/31afa99a-6f2a-1484-6504-9c60192befbb',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Humanitarian Bulletin',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Humanitarian Bulletin',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Humanitarian Bulletin',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Bulletin Humanitaire',
        ),
      ),
    ),
    'parent' => array(
      0 => '8354cddf-f005-34d4-e9f5-1f02ce24ec61',
    ),
    'path' => array(
      'alias' => 'document-types/humanitarian-bulletin',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '31afa99a-6f2a-1484-6504-9c60192befbb',
    'vocabulary_machine_name' => 'document_types',
    'weight' => '0',
  );
  $entities['document_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/be289d4d-8a56-3a74-1575-733640326e6e',
      'cause' => FALSE,
    ),
    'description' => 'a report that examines the on-going or recently completed actions related to specific item. Example: Real-time Evaluation of Humanitarian Response to Cyclone Nargis.',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'a report that examines the on-going or recently completed actions related to specific item. Example: Real-time Evaluation of Humanitarian Response to Cyclone Nargis.',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'a report that examines the on-going or recently completed actions related to specific item. Example: Real-time Evaluation of Humanitarian Response to Cyclone Nargis.',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'a report that examines the on-going or recently completed actions related to specific item. Example: Real-time Evaluation of Humanitarian Response to Cyclone Nargis.',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Monitoring / Evaluation Report',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Monitoring / Evaluation Report',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Monitoring / Evaluation Report',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Rapport de Surveillance / d\'Evaluation',
        ),
      ),
    ),
    'parent' => array(
      0 => '8354cddf-f005-34d4-e9f5-1f02ce24ec61',
    ),
    'path' => array(
      'alias' => 'document-types/monitoring-evaluation-report',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'be289d4d-8a56-3a74-1575-733640326e6e',
    'vocabulary_machine_name' => 'document_types',
    'weight' => '0',
  );
  $entities['document_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/b457a616-f2f8-6814-2d8e-1db72d6b41f3',
      'cause' => FALSE,
    ),
    'description' => 'a report that outlined the current security situation of a given area, possibly including recent relevant security-related incidences.',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'a report that outlined the current security situation of a given area, possibly including recent relevant security-related incidences.',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'a report that outlined the current security situation of a given area, possibly including recent relevant security-related incidences.',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'a report that outlined the current security situation of a given area, possibly including recent relevant security-related incidences.',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Security Report',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Monitoring / Evaluation Report',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Monitoring / Evaluation Report',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Rapport de Surveillance / d\'Evaluation',
        ),
      ),
    ),
    'parent' => array(
      0 => '8354cddf-f005-34d4-e9f5-1f02ce24ec61',
    ),
    'path' => array(
      'alias' => 'document-types/security-report',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'b457a616-f2f8-6814-2d8e-1db72d6b41f3',
    'vocabulary_machine_name' => 'document_types',
    'weight' => '0',
  );
  $entities['document_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/cb8c7108-c928-6384-e973-eb9b79240c94',
      'cause' => FALSE,
    ),
    'description' => 'a report that outlines the current situation of a given event.',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'a report that outlines the current situation of a given event.',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'a report that outlines the current situation of a given event.',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'a report that outlines the current situation of a given event.',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Situation Report',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Monitoring / Evaluation Report',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Monitoring / Evaluation Report',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Rapport de Surveillance / d\'Evaluation',
        ),
      ),
    ),
    'parent' => array(
      0 => '8354cddf-f005-34d4-e9f5-1f02ce24ec61',
    ),
    'path' => array(
      'alias' => 'document-types/situation-report',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'cb8c7108-c928-6384-e973-eb9b79240c94',
    'vocabulary_machine_name' => 'document_types',
    'weight' => '0',
  );
  $entities['document_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/74998571-0fee-f184-119c-73c1aedc9b10',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Snapshot',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Snapshot',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Snapshot',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Instantané',
        ),
      ),
    ),
    'parent' => array(
      0 => '8354cddf-f005-34d4-e9f5-1f02ce24ec61',
    ),
    'path' => array(
      'alias' => 'document-types/snapshot',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '74998571-0fee-f184-119c-73c1aedc9b10',
    'vocabulary_machine_name' => 'document_types',
    'weight' => '0',
  );
  $entities['document_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/60656201-6dbe-2d04-8916-aa3db035a121',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Planning',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Planning',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Planning',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Planning',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'document-types/planning',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '60656201-6dbe-2d04-8916-aa3db035a121',
    'vocabulary_machine_name' => 'document_types',
    'weight' => '0',
  );
  $entities['document_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/877e0db6-adbc-3c44-b9ab-3f72bb8263e4',
      'cause' => FALSE,
    ),
    'description' => 'a request for specific items (usually financial) to aid in the response to an emergency',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'a request for specific items (usually financial) to aid in the response to an emergency',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'a request for specific items (usually financial) to aid in the response to an emergency',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'a request for specific items (usually financial) to aid in the response to an emergency',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Appeal',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Appeal',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Appeal',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Appel de Fonds',
        ),
      ),
    ),
    'parent' => array(
      0 => '60656201-6dbe-2d04-8916-aa3db035a121',
    ),
    'path' => array(
      'alias' => 'document-types/appeal',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '877e0db6-adbc-3c44-b9ab-3f72bb8263e4',
    'vocabulary_machine_name' => 'document_types',
    'weight' => '0',
  );
  $entities['document_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/0eeeb862-fa30-9fa4-e9d3-82e2bfe2f1e0',
      'cause' => FALSE,
    ),
    'description' => 'an outline of security measures in place, minimum security preparedness, and responses to be taken in specific security situations.',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'an outline of security measures in place, minimum security preparedness, and responses to be taken in specific security situations.',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'an outline of security measures in place, minimum security preparedness, and responses to be taken in specific security situations.',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'an outline of security measures in place, minimum security preparedness, and responses to be taken in specific security situations.',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Security Plan',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Security Plan',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Security Plan',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Plan de Sécurité',
        ),
      ),
    ),
    'parent' => array(
      0 => '60656201-6dbe-2d04-8916-aa3db035a121',
    ),
    'path' => array(
      'alias' => 'document-types/security-plan',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '0eeeb862-fa30-9fa4-e9d3-82e2bfe2f1e0',
    'vocabulary_machine_name' => 'document_types',
    'weight' => '0',
  );
  $entities['document_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/0b04ceb2-f259-0774-2953-4d53988e8843',
      'cause' => FALSE,
    ),
    'description' => 'A phased course of action for specific projects or initiatives that typically includes step-by-step detail, timelines, and roles and responsibilities of participants',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'A phased course of action for specific projects or initiatives that typically includes step-by-step detail, timelines, and roles and responsibilities of participants',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'A phased course of action for specific projects or initiatives that typically includes step-by-step detail, timelines, and roles and responsibilities of participants',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'A phased course of action for specific projects or initiatives that typically includes step-by-step detail, timelines, and roles and responsibilities of participants',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Work Plan',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Work Plan',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Work Plan',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Plan de Travail',
        ),
      ),
    ),
    'parent' => array(
      0 => '60656201-6dbe-2d04-8916-aa3db035a121',
    ),
    'path' => array(
      'alias' => 'document-types/work-plan',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '0b04ceb2-f259-0774-2953-4d53988e8843',
    'vocabulary_machine_name' => 'document_types',
    'weight' => '0',
  );
  $entities['document_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/eb43b378-a4f5-2454-e57c-0c318f1ff519',
      'cause' => FALSE,
    ),
    'description' => 'a plan of action for a given organization or community of actors in response to a given humanitarian situation.',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'a plan of action for a given organization or community of actors in response to a given humanitarian situation.',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'a plan of action for a given organization or community of actors in response to a given humanitarian situation.',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'a plan of action for a given organization or community of actors in response to a given humanitarian situation.',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Humanitarian Action Plan',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Humanitarian Action Plan',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Humanitarian Action Plan',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Plan d\'Action Humanitaire',
        ),
      ),
    ),
    'parent' => array(
      0 => '60656201-6dbe-2d04-8916-aa3db035a121',
    ),
    'path' => array(
      'alias' => 'document-types/humanitarian-action-plan',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'eb43b378-a4f5-2454-e57c-0c318f1ff519',
    'vocabulary_machine_name' => 'document_types',
    'weight' => '0',
  );
  $entities['document_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/bff634e1-56a1-2ff4-85e6-93751814f2e5',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Training and Resource Materials',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Training and Resource Materials',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Training and Resource Materials',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Documents de Formation',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'document-types/training-and-resource-materials',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'bff634e1-56a1-2ff4-85e6-93751814f2e5',
    'vocabulary_machine_name' => 'document_types',
    'weight' => '0',
  );
  $entities['document_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/bc460845-5c27-1234-65a1-c1afdddd4b38',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Case Study',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Case Study',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Case Study',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Etude de Cas',
        ),
      ),
    ),
    'parent' => array(
      0 => 'bff634e1-56a1-2ff4-85e6-93751814f2e5',
    ),
    'path' => array(
      'alias' => 'document-types/case-study',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'bc460845-5c27-1234-65a1-c1afdddd4b38',
    'vocabulary_machine_name' => 'document_types',
    'weight' => '0',
  );
  $entities['document_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/8aa14ce5-c267-6e84-41a5-631b262feac3',
      'cause' => FALSE,
    ),
    'description' => 'Frequently asked questions regarding processes, procedures, and tools.',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'Frequently asked questions regarding processes, procedures, and tools.',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'Frequently asked questions regarding processes, procedures, and tools.',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'Frequently asked questions regarding processes, procedures, and tools.',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'FAQs',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'FAQs',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'FAQs',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'FAQs',
        ),
      ),
    ),
    'parent' => array(
      0 => 'bff634e1-56a1-2ff4-85e6-93751814f2e5',
    ),
    'path' => array(
      'alias' => 'document-types/faqs',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '8aa14ce5-c267-6e84-41a5-631b262feac3',
    'vocabulary_machine_name' => 'document_types',
    'weight' => '0',
  );
  $entities['document_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/c5aa4c2c-f2df-7c84-9191-4e8914ab0eb3',
      'cause' => FALSE,
    ),
    'description' => 'A publication, usually on a technical subject, that may contain a collection of policy instructions, SOPs and/or guidelines on subjects that can be logically grouped to achieve clear outcomes. Compliance with specific aspects is expected or strongly recommended, as applicable.',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'A publication, usually on a technical subject, that may contain a collection of policy instructions, SOPs and/or guidelines on subjects that can be logically grouped to achieve clear outcomes. Compliance with specific aspects is expected or strongly recommended, as applicable.',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'A publication, usually on a technical subject, that may contain a collection of policy instructions, SOPs and/or guidelines on subjects that can be logically grouped to achieve clear outcomes. Compliance with specific aspects is expected or strongly recommended, as applicable.',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'A publication, usually on a technical subject, that may contain a collection of policy instructions, SOPs and/or guidelines on subjects that can be logically grouped to achieve clear outcomes. Compliance with specific aspects is expected or strongly recommended, as applicable.',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Handbook or Manual',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Handbook or Manual',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Handbook or Manual',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Guide ou Manuel',
        ),
      ),
    ),
    'parent' => array(
      0 => 'bff634e1-56a1-2ff4-85e6-93751814f2e5',
    ),
    'path' => array(
      'alias' => 'document-types/handbook-or-manual',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'c5aa4c2c-f2df-7c84-9191-4e8914ab0eb3',
    'vocabulary_machine_name' => 'document_types',
    'weight' => '0',
  );
  $entities['document_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/e8f56524-3509-67f4-05fd-733fb484c732',
      'cause' => FALSE,
    ),
    'description' => 'a document containing a set of specific tips or helpful directions on how to use a given item. Example: tips on how to use a website.',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'a document containing a set of specific tips or helpful directions on how to use a given item. Example: tips on how to use a website.',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'a document containing a set of specific tips or helpful directions on how to use a given item. Example: tips on how to use a website.',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'a document containing a set of specific tips or helpful directions on how to use a given item. Example: tips on how to use a website.',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Tip Sheet',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Tip Sheet',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Tip Sheet',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Fiche de conseils',
        ),
      ),
    ),
    'parent' => array(
      0 => 'bff634e1-56a1-2ff4-85e6-93751814f2e5',
    ),
    'path' => array(
      'alias' => 'document-types/tip-sheet',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'e8f56524-3509-67f4-05fd-733fb484c732',
    'vocabulary_machine_name' => 'document_types',
    'weight' => '0',
  );
  $entities['document_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/3dba958e-4b5e-c5d4-b595-a0181f8762a2',
      'cause' => FALSE,
    ),
    'description' => 'A bundle of materials that support the completion of specific  processes, tasks or products; materials can include instructions, examples, and forms or templates',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'A bundle of materials that support the completion of specific  processes, tasks or products; materials can include instructions, examples, and forms or templates',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'A bundle of materials that support the completion of specific  processes, tasks or products; materials can include instructions, examples, and forms or templates',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'A bundle of materials that support the completion of specific  processes, tasks or products; materials can include instructions, examples, and forms or templates',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Toolbox / Toolkit',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Toolbox / Toolkit',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Toolbox / Toolkit',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Boite à Outils / Trousse à Outils',
        ),
      ),
    ),
    'parent' => array(
      0 => 'bff634e1-56a1-2ff4-85e6-93751814f2e5',
    ),
    'path' => array(
      'alias' => 'document-types/toolbox-toolkit',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '3dba958e-4b5e-c5d4-b595-a0181f8762a2',
    'vocabulary_machine_name' => 'document_types',
    'weight' => '0',
  );
  $entities['document_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/5cf067ab-f1fd-f284-3d5b-dea91eaea796',
      'cause' => FALSE,
    ),
    'description' => 'a document, device, or application that is used to achieve a specific outcome or output.',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'a document, device, or application that is used to achieve a specific outcome or output.',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'a document, device, or application that is used to achieve a specific outcome or output.',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'a document, device, or application that is used to achieve a specific outcome or output.',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Tool',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Tool',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Tool',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Outil',
        ),
      ),
    ),
    'parent' => array(
      0 => 'bff634e1-56a1-2ff4-85e6-93751814f2e5',
    ),
    'path' => array(
      'alias' => 'document-types/tool',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '5cf067ab-f1fd-f284-3d5b-dea91eaea796',
    'vocabulary_machine_name' => 'document_types',
    'weight' => '0',
  );
  $entities['document_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/3f096983-5ec2-ae54-f107-0c582cc649fd',
      'cause' => FALSE,
    ),
    'description' => 'A generic, formatted, and structured document that used as a guide and specification for the creation of specific types of documents',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'A generic, formatted, and structured document that used as a guide and specification for the creation of specific types of documents',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'A generic, formatted, and structured document that used as a guide and specification for the creation of specific types of documents',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'A generic, formatted, and structured document that used as a guide and specification for the creation of specific types of documents',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Template',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Template',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Template',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Modèle',
        ),
      ),
    ),
    'parent' => array(
      0 => 'bff634e1-56a1-2ff4-85e6-93751814f2e5',
    ),
    'path' => array(
      'alias' => 'document-types/template',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '3f096983-5ec2-ae54-f107-0c582cc649fd',
    'vocabulary_machine_name' => 'document_types',
    'weight' => '0',
  );
  $entities['document_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/15be65bb-4e55-97c4-b1a0-2af101848f22',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Policy and Guidance',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Policy and Guidance',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Policy and Guidance',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Règles et Orientation',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'document-types/policy-and-guidance',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '15be65bb-4e55-97c4-b1a0-2af101848f22',
    'vocabulary_machine_name' => 'document_types',
    'weight' => '0',
  );
  $entities['document_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/ca7a34ac-e14a-6354-c193-df86bd9aa523',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Evaluation',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Evaluation',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Evaluation',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Evaluation',
        ),
      ),
    ),
    'parent' => array(
      0 => '15be65bb-4e55-97c4-b1a0-2af101848f22',
    ),
    'path' => array(
      'alias' => 'document-types/evaluation',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'ca7a34ac-e14a-6354-c193-df86bd9aa523',
    'vocabulary_machine_name' => 'document_types',
    'weight' => '0',
  );
  $entities['document_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/e6a5ebfc-e41b-d964-019b-a8b7436253dc',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Good Practice',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Good Practice',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Good Practice',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Bonne Pratique',
        ),
      ),
    ),
    'parent' => array(
      0 => '15be65bb-4e55-97c4-b1a0-2af101848f22',
    ),
    'path' => array(
      'alias' => 'document-types/good-practice',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'e6a5ebfc-e41b-d964-019b-a8b7436253dc',
    'vocabulary_machine_name' => 'document_types',
    'weight' => '0',
  );
  $entities['document_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/2d54eb2c-0ec0-ed74-29d9-a2f3c03a71d4',
      'cause' => FALSE,
    ),
    'description' => 'A policy instruction provides an explanation of an organization\'s institutional stance on an important issue or activity within its mandate, and the resulting essential expectations of its staff, in terms of objectives and responsibilities. It may also touch on the broad methods for handling an issue or activity. A policy instruction is the basis for consistent institutional behaviour by staff. Compliance is expected.',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'A policy instruction provides an explanation of an organization\'s institutional stance on an important issue or activity within its mandate, and the resulting essential expectations of its staff, in terms of objectives and responsibilities. It may also touch on the broad methods for handling an issue or activity. A policy instruction is the basis for consistent institutional behaviour by staff. Compliance is expected.',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'A policy instruction provides an explanation of an organization\'s institutional stance on an important issue or activity within its mandate, and the resulting essential expectations of its staff, in terms of objectives and responsibilities. It may also touch on the broad methods for handling an issue or activity. A policy instruction is the basis for consistent institutional behaviour by staff. Compliance is expected.',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'A policy instruction provides an explanation of an organization\'s institutional stance on an important issue or activity within its mandate, and the resulting essential expectations of its staff, in terms of objectives and responsibilities. It may also touch on the broad methods for handling an issue or activity. A policy instruction is the basis for consistent institutional behaviour by staff. Compliance is expected.',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Policy',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Policy',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Policy',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Règles',
        ),
      ),
    ),
    'parent' => array(
      0 => '15be65bb-4e55-97c4-b1a0-2af101848f22',
    ),
    'path' => array(
      'alias' => 'document-types/policy',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '2d54eb2c-0ec0-ed74-29d9-a2f3c03a71d4',
    'vocabulary_machine_name' => 'document_types',
    'weight' => '0',
  );
  $entities['document_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/fae58e5d-95b2-a9b4-558c-c1c0a1557d77',
      'cause' => FALSE,
    ),
    'description' => 'Guidelines are suggested courses of action, recommendations, principles or considerations on how to deal with an area of activity or an issue. They often help interpret policies when further clarification is needed. They are distinct from SOPs in that they tend to: 1) deal with areas of activity, as opposed to specific tasks and activities; and 2) set parameters for action, as opposed to procedures for achieving a desired result. Compliance is strongly recommended.',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'Guidelines are suggested courses of action, recommendations, principles or considerations on how to deal with an area of activity or an issue. They often help interpret policies when further clarification is needed. They are distinct from SOPs in that they tend to: 1) deal with areas of activity, as opposed to specific tasks and activities; and 2) set parameters for action, as opposed to procedures for achieving a desired result. Compliance is strongly recommended.',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'Guidelines are suggested courses of action, recommendations, principles or considerations on how to deal with an area of activity or an issue. They often help interpret policies when further clarification is needed. They are distinct from SOPs in that they tend to: 1) deal with areas of activity, as opposed to specific tasks and activities; and 2) set parameters for action, as opposed to procedures for achieving a desired result. Compliance is strongly recommended.',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'Guidelines are suggested courses of action, recommendations, principles or considerations on how to deal with an area of activity or an issue. They often help interpret policies when further clarification is needed. They are distinct from SOPs in that they tend to: 1) deal with areas of activity, as opposed to specific tasks and activities; and 2) set parameters for action, as opposed to procedures for achieving a desired result. Compliance is strongly recommended.',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Guidelines',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Guidelines',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Guidelines',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Orientations',
        ),
      ),
    ),
    'parent' => array(
      0 => '15be65bb-4e55-97c4-b1a0-2af101848f22',
    ),
    'path' => array(
      'alias' => 'document-types/guidelines',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'fae58e5d-95b2-a9b4-558c-c1c0a1557d77',
    'vocabulary_machine_name' => 'document_types',
    'weight' => '0',
  );
  $entities['document_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/56e12e34-1a72-1534-4121-6b5971a8c2b4',
      'cause' => FALSE,
    ),
    'description' => 'A standard operating procedure is a standing instruction that provides an organization\'s staff with guidance on how to implement a specific task, process or activity, or to achieve a desired result. They are usually procedural in nature and provide a series of steps to be followed. Compliance is expected.',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'A standard operating procedure is a standing instruction that provides an organization\'s staff with guidance on how to implement a specific task, process or activity, or to achieve a desired result. They are usually procedural in nature and provide a series of steps to be followed. Compliance is expected.',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'A standard operating procedure is a standing instruction that provides an organization\'s staff with guidance on how to implement a specific task, process or activity, or to achieve a desired result. They are usually procedural in nature and provide a series of steps to be followed. Compliance is expected.',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'A standard operating procedure is a standing instruction that provides an organization\'s staff with guidance on how to implement a specific task, process or activity, or to achieve a desired result. They are usually procedural in nature and provide a series of steps to be followed. Compliance is expected.',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Standard Operating Procedures',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Standard Operating Procedures',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Standard Operating Procedures',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Procédures Opératoires Normalisées',
        ),
      ),
    ),
    'parent' => array(
      0 => '15be65bb-4e55-97c4-b1a0-2af101848f22',
    ),
    'path' => array(
      'alias' => 'document-types/standard-operating-procedures',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '56e12e34-1a72-1534-4121-6b5971a8c2b4',
    'vocabulary_machine_name' => 'document_types',
    'weight' => '0',
  );
  $entities['document_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/b6176c55-ba7c-7914-993c-26e844fa42ce',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Others',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Others',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Others',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Autres',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'document-types/others',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'b6176c55-ba7c-7914-993c-26e844fa42ce',
    'vocabulary_machine_name' => 'document_types',
    'weight' => '10',
  );
  $entities['document_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/e266e0fb-4a67-c744-1928-f812322c36a5',
      'cause' => FALSE,
    ),
    'description' => 'An understanding between individuals/organizations to follow a specific course of conduct.',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'An understanding between individuals/organizations to follow a specific course of conduct.',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'An understanding between individuals/organizations to follow a specific course of conduct.',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'An understanding between individuals/organizations to follow a specific course of conduct.',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Agreement (MOU)',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Agreement (MOU)',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Agreement (MOU)',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Accord (MOU)',
        ),
      ),
    ),
    'parent' => array(
      0 => 'b6176c55-ba7c-7914-993c-26e844fa42ce',
    ),
    'path' => array(
      'alias' => 'document-types/agreement-mou',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'e266e0fb-4a67-c744-1928-f812322c36a5',
    'vocabulary_machine_name' => 'document_types',
    'weight' => '0',
  );
  $entities['document_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/c96449b4-1547-2474-51b7-796d9bef3df2',
      'cause' => FALSE,
    ),
    'description' => 'a set of events, such as cluster meetings, organized into a calendar.',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'a set of events, such as cluster meetings, organized into a calendar.',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'a set of events, such as cluster meetings, organized into a calendar.',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'a set of events, such as cluster meetings, organized into a calendar.',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Calendar / Events',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Calendar / Events',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Calendar / Events',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Calendrier / Evenements',
        ),
      ),
    ),
    'parent' => array(
      0 => 'b6176c55-ba7c-7914-993c-26e844fa42ce',
    ),
    'path' => array(
      'alias' => 'document-types/calendar-events',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'c96449b4-1547-2474-51b7-796d9bef3df2',
    'vocabulary_machine_name' => 'document_types',
    'weight' => '0',
  );
  $entities['document_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/965dbbbb-6df5-2024-c92b-54621bf1f6cb',
      'cause' => FALSE,
    ),
    'description' => 'Basic staff information for a single individual or a list of individuals that typically includes name, title, location, phone and email, and brief job responsibilities or expertise areas',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'Basic staff information for a single individual or a list of individuals that typically includes name, title, location, phone and email, and brief job responsibilities or expertise areas',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'Basic staff information for a single individual or a list of individuals that typically includes name, title, location, phone and email, and brief job responsibilities or expertise areas',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'Basic staff information for a single individual or a list of individuals that typically includes name, title, location, phone and email, and brief job responsibilities or expertise areas',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Contact List',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Contact List',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Contact List',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Liste de Contacts',
        ),
      ),
    ),
    'parent' => array(
      0 => 'b6176c55-ba7c-7914-993c-26e844fa42ce',
    ),
    'path' => array(
      'alias' => 'document-types/contact-list',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '965dbbbb-6df5-2024-c92b-54621bf1f6cb',
    'vocabulary_machine_name' => 'document_types',
    'weight' => '0',
  );
  $entities['document_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/cd3c994c-d65e-f7e4-9db1-6414a9003c9f',
      'cause' => FALSE,
    ),
    'description' => 'a written/typed message from one person or organization to another.',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'a written/typed message from one person or organization to another.',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'a written/typed message from one person or organization to another.',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'a written/typed message from one person or organization to another.',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Letter',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Letter',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Letter',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Lettre',
        ),
      ),
    ),
    'parent' => array(
      0 => 'b6176c55-ba7c-7914-993c-26e844fa42ce',
    ),
    'path' => array(
      'alias' => 'document-types/letter',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'cd3c994c-d65e-f7e4-9db1-6414a9003c9f',
    'vocabulary_machine_name' => 'document_types',
    'weight' => '0',
  );
  $entities['document_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/d8872a30-1ff1-7bb4-3968-72bae1533500',
      'cause' => FALSE,
    ),
    'description' => 'A brief, informal note that gives background information on a particular topic or issue',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'A brief, informal note that gives background information on a particular topic or issue',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'A brief, informal note that gives background information on a particular topic or issue',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'A brief, informal note that gives background information on a particular topic or issue',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Note',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Note',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Note',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Note',
        ),
      ),
    ),
    'parent' => array(
      0 => 'b6176c55-ba7c-7914-993c-26e844fa42ce',
    ),
    'path' => array(
      'alias' => 'document-types/note',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'd8872a30-1ff1-7bb4-3968-72bae1533500',
    'vocabulary_machine_name' => 'document_types',
    'weight' => '0',
  );
  $entities['document_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/b81d63b0-e52c-4194-4159-2b06ebe7ba2d',
      'cause' => FALSE,
    ),
    'description' => 'Slides produced that accompany and illustrate a presentation',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'Slides produced that accompany and illustrate a presentation',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'Slides produced that accompany and illustrate a presentation',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'Slides produced that accompany and illustrate a presentation',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Presentation',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Presentation',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Presentation',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Présentation',
        ),
      ),
    ),
    'parent' => array(
      0 => 'b6176c55-ba7c-7914-993c-26e844fa42ce',
    ),
    'path' => array(
      'alias' => 'document-types/presentation',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'b81d63b0-e52c-4194-4159-2b06ebe7ba2d',
    'vocabulary_machine_name' => 'document_types',
    'weight' => '0',
  );
  $entities['document_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/4393c201-cf56-98f4-a1ce-98ce27f4bd90',
      'cause' => FALSE,
    ),
    'description' => 'An official written statement that is sent to the media so that it can be publicized.',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'An official written statement that is sent to the media so that it can be publicized.',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'An official written statement that is sent to the media so that it can be publicized.',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'An official written statement that is sent to the media so that it can be publicized.',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Press Release',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Press Release',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Press Release',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Communiqué de Presse',
        ),
      ),
    ),
    'parent' => array(
      0 => 'b6176c55-ba7c-7914-993c-26e844fa42ce',
    ),
    'path' => array(
      'alias' => 'document-types/press-release',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '4393c201-cf56-98f4-a1ce-98ce27f4bd90',
    'vocabulary_machine_name' => 'document_types',
    'weight' => '0',
  );
  $entities['document_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/a2b2f3ef-a445-d544-25d3-2e39a2cf36cc',
      'cause' => FALSE,
    ),
    'description' => 'A dashboard document',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'A dashboard document',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'A dashboard document',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => 'A dashboard document',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Dashboard',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Dashboard',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Dashboard',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Tableau de Bord',
        ),
      ),
    ),
    'parent' => array(
      0 => 'b6176c55-ba7c-7914-993c-26e844fa42ce',
    ),
    'path' => array(
      'alias' => 'document-types/dashboard',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'a2b2f3ef-a445-d544-25d3-2e39a2cf36cc',
    'vocabulary_machine_name' => 'document_types',
    'weight' => '0',
  );
  $entities['document_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/f4710705-ae9c-4e74-1dc8-6ed3fb3d59e1',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Terms of Reference',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Terms of Reference',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Terms of Reference',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Terms of Reference',
        ),
      ),
    ),
    'parent' => array(
      0 => 'b6176c55-ba7c-7914-993c-26e844fa42ce',
    ),
    'path' => array(
      'alias' => 'document-types/terms-of-reference',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'f4710705-ae9c-4e74-1dc8-6ed3fb3d59e1',
    'vocabulary_machine_name' => 'document_types',
    'weight' => '0',
  );

  return $entities;
}
