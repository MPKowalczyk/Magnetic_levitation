/*
 * Lewitacja_new_private.h
 *
 * Code generation for model "Lewitacja_new".
 *
 * Model version              : 1.448
 * Simulink Coder version : 8.8.1 (R2015aSP1) 04-Sep-2015
 * C source code generated on : Wed Mar 29 12:26:04 2017
 *
 * Target selection: rtwin.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Lewitacja_new_private_h_
#define RTW_HEADER_Lewitacja_new_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"

extern real_T rt_powd_snf(real_T u0, real_T u1);
extern void ML_AnalogInputs(SimStruct *rts);
extern void ML_PWM(SimStruct *rts);

/* private model entry point functions */
extern void Lewitacja_new_derivatives(void);

#endif                                 /* RTW_HEADER_Lewitacja_new_private_h_ */
