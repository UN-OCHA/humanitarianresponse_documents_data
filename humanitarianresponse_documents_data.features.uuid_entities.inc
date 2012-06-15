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
    'format' => 'plain_text',
    'name' => 'Reports',
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
    'format' => 'plain_text',
    'name' => 'Analysis Report',
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
    'format' => 'plain_text',
    'name' => 'Assessment Report',
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
    'uuid' => 'd2b94d63-2c44-d594-2195-9b60397f11de',
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
    'format' => 'plain_text',
    'name' => 'Monitoring / Evaluation Report',
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
    'format' => 'plain_text',
    'name' => 'Security Report',
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
    'format' => 'plain_text',
    'name' => 'Situation Report',
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
    'format' => 'filtered_html',
    'name' => 'Snapshots',
    'parent' => array(
      0 => '8354cddf-f005-34d4-e9f5-1f02ce24ec61',
    ),
    'path' => array(
      'alias' => 'document-types/snapshots',
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
    'format' => 'plain_text',
    'name' => 'Planning',
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
    'format' => 'plain_text',
    'name' => 'Appeal',
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
    'format' => 'plain_text',
    'name' => 'Security Plan',
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
    'format' => 'plain_text',
    'name' => 'Work Plan',
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
    'format' => 'plain_text',
    'name' => 'Humanitarian Action Plan',
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
    'format' => 'plain_text',
    'name' => 'Training and Resource Materials',
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
    'uuid' => 'bff634e1-56a1-2ff4-85e6-93751814f2e5',
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
    'format' => 'plain_text',
    'name' => 'FAQs',
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
    'format' => 'plain_text',
    'name' => 'Handbook or Manual',
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
    'format' => 'plain_text',
    'name' => 'Tip Sheet',
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
    'format' => 'plain_text',
    'name' => 'Toolbox / Toolkit',
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
    'format' => 'plain_text',
    'name' => 'Tool',
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
    'format' => 'plain_text',
    'name' => 'Template',
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
    'format' => 'plain_text',
    'name' => 'Policy and Guidance',
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
    'uuid' => '15be65bb-4e55-97c4-b1a0-2af101848f22',
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
    'format' => 'plain_text',
    'name' => 'Policy',
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
    'format' => 'plain_text',
    'name' => 'Guidelines',
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
    'format' => 'plain_text',
    'name' => 'Standard Operating Procedures',
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
    'format' => 'plain_text',
    'name' => 'Others',
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
    'format' => 'plain_text',
    'name' => 'Agreement (MOU)',
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
    'format' => 'plain_text',
    'name' => 'Calendar / Events',
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
    'format' => 'plain_text',
    'name' => 'Contact List',
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
    'format' => 'plain_text',
    'name' => 'Letter',
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
    'format' => 'plain_text',
    'name' => 'Note',
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
    'format' => 'plain_text',
    'name' => 'Presentation',
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
    'format' => 'plain_text',
    'name' => 'Press Release',
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
    'format' => 'plain_text',
    'name' => 'Dashboard',
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
    'uuid' => 'a2b2f3ef-a445-d544-25d3-2e39a2cf36cc',
    'vocabulary_machine_name' => 'document_types',
    'weight' => '0',
  );

  return $entities;
}
