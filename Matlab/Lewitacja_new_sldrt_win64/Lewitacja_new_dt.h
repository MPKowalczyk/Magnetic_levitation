/*
 * Lewitacja_new_dt.h
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

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(struct_ZW7ndRbpbtWgcjvuSxX3TH),
  sizeof(struct_8zOCb1biucrLfhPL5HPfKC)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "struct_ZW7ndRbpbtWgcjvuSxX3TH",
  "struct_8zOCb1biucrLfhPL5HPfKC"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&Lewitacja_new_B.Control), 0, 0, 21 }
  ,

  { (char_T *)(&Lewitacja_new_DW.Memory_PreviousInput), 0, 0, 1 },

  { (char_T *)(&Lewitacja_new_DW.MagLevsystemControlandStates_PW.LoggedData), 11,
    0, 3 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  3U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&Lewitacja_new_P.sensor), 15, 0, 1 },

  { (char_T *)(&Lewitacja_new_P.model), 14, 0, 1 },

  { (char_T *)(&Lewitacja_new_P.MagneticLevitationSystem_T0), 0, 0, 109 },

  { (char_T *)(&Lewitacja_new_P.ManualSwitch_CurrentSetting), 3, 0, 4 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  4U,
  rtPTransitions
};

/* [EOF] Lewitacja_new_dt.h */
