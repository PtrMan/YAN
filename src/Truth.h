#ifndef TRUTH_H
#define TRUTH_H

////////////////////////////////////////////
//  NAL truth value and truth functions   //
////////////////////////////////////////////

//References//
//-----------//
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "Globals.h"
#include "Config.h"

//Data structure//
//--------------//
typedef struct {
    //Frequency
    double frequency;
    //Confidence
    double confidence;
} Truth;

//Parameters//
//----------//
extern double TRUTH_EVIDENTAL_HORIZON;
extern double TRUTH_PROJECTION_DECAY;
#define OCCURRENCE_ETERNAL -1
#define STRUCTURAL_TRUTH (Truth) { .frequency = 1.0, .confidence = RELIANCE }

//Methods//
//-------//
double Truth_w2c(double w);
double Truth_c2w(double c);
double Truth_Expectation(Truth v);
Truth Truth_Revision(Truth v1, Truth v2);
Truth Truth_Deduction(Truth v1, Truth v2);
Truth Truth_Induction(Truth v1, Truth v2);
Truth Truth_Intersection(Truth v1, Truth v2);
Truth Truth_Eternalize(Truth v);
Truth Truth_Projection(Truth v, long originalTime, long targetTime);
void Truth_Print(Truth *truth);
//not part of MSC:
Truth Truth_Abduction(Truth v1, Truth v2);
Truth Truth_Exemplification(Truth v1, Truth v2);
Truth Truth_Comparison(Truth v1, Truth v2);
Truth Truth_Analogy(Truth v1, Truth v2);
Truth Truth_Resemblance(Truth v1, Truth v2);
Truth Truth_StructuralDeduction(Truth v1, Truth v2);
Truth Truth_StructuralAbduction(Truth v1, Truth v2);
Truth Truth_Union(Truth v1, Truth v2);
Truth Truth_Difference(Truth v1, Truth v2);
Truth Truth_Conversion(Truth v1, Truth v2);
Truth Truth_Negation(Truth v1, Truth v2);
bool Truth_Equal(Truth *v1, Truth *v2);

#endif
