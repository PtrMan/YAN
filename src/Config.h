#ifndef CONFIG_H
#define CONFIG_H

/*-------------------------*/
/* Anticipation parameters */
/*-------------------------*/
//Truth expectation needed for anticipation
#define ANTICIPATION_THRESHOLD_INITIAL 0.501
//Confidence of anticipation failures
#define ANTICIPATION_CONFIDENCE_INITIAL 0.005

/*-----------------------*/
/* Subgoaling parameters */
/*-----------------------*/
//Truth expectation threshold for subgoals to be propagated
#define PROPAGATION_THRESHOLD_INITIAL 0.501
//How many propagation iterations happen per cycle
#define PROPAGATION_ITERATIONS 5

/*---------------------*/
/* Decision parameters */
/*---------------------*/
//Truth expectation needed for executions
#define DECISION_THRESHOLD_INITIAL 0.501
//Motor babbling chance
#define MOTOR_BABBLING_CHANCE_INITIAL 0.2

/*----------------------*/
/* Attention parameters */
/*----------------------*/
//Event selections per cycle for inference
#define EVENT_SELECTIONS 1
//Event priority decay of events per cycle
#define EVENT_DURABILITY 1.0
//Additional event priority decay of an event which was selected
#define EVENT_DURABILITY_ON_USAGE 0.9
//Concept priority decay of events per cycle
#define CONCEPT_DURABILITY 0.99
//Minimum confidence to accept events
#define MIN_CONFIDENCE 0.01
//Minimum priority to accept events
#define MIN_PRIORITY 0.0001

/*------------------*/
/* Space parameters */
/*------------------*/
//Maximum amount of concepts
#define CONCEPTS_MAX 16384
//Maximum amount of events attention buffer holds
#define CYCLING_EVENTS_MAX 8192
//Maximum amount of operations which can be registered
#define OPERATIONS_MAX 10
//Maximum size of the stamp in terms of evidental base id's
#define STAMP_SIZE 20
//Maximum event FIFO size
#define FIFO_SIZE 20
//Maximum Implication table size
#define TABLE_SIZE 20
//Maximum length of sequences
#define MAX_SEQUENCE_LEN 3
//Maximum compound term size
#define COMPOUND_TERM_SIZE_MAX 64
//Max. amount of atomic terms, must be <= 2^(sizeof(Atom)*8)
#define TERMS_MAX 256
//The type of an atom
#define Atom char
//Maximum size of atomic terms in terms of characters
#define ATOMIC_TERM_LEN_MAX 30
//Maximum size of Narsese input in terms of characters
#define NARSESE_LEN_MAX 1000

/*------------------*/
/* Truth parameters */
/*------------------*/
//Default frequency for input events
#define YAN_DEFAULT_FREQUENCY  1.0
//Default confidence for input events
#define YAN_DEFAULT_CONFIDENCE 0.9
//Default confidence for analytical premise
#define RELIANCE 0.9
//NAL evidental horizon
#define TRUTH_EVIDENTAL_HORIZON_INITIAL 1.0
//Time distance based projection decay of event truth
#define TRUTH_PROJECTION_DECAY_INITIAL 0.8
//Maximum value for confidence
#define MAX_CONFIDENCE 0.99

#endif
