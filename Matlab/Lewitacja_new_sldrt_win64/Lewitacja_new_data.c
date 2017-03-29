/*
 * Lewitacja_new_data.c
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

#include "Lewitacja_new.h"
#include "Lewitacja_new_private.h"

/* Block parameters (auto storage) */
P_Lewitacja_new_T Lewitacja_new_P = {
  {
    { 9.22, 8.95, 8.57, 8.21, 7.83, 7.38, 6.86, 6.29, 5.67, 4.97, 4.25, 3.5,
      2.67, 1.76, 0.79, -0.19, -1.21, -2.22, -3.18, -4.1, -4.97, -5.72, -6.4,
      -6.98, -7.5, -7.94, -8.3, -8.59, -8.82, -8.97, -9.07, -9.13, -9.15, -9.16
    },

    { 0.0, 0.0007, 0.0014, 0.0021, 0.0028, 0.0035, 0.0042, 0.0049, 0.0056,
      0.0063, 0.007, 0.0077, 0.0084, 0.0091, 0.0098, 0.0105, 0.0112,
      0.011899999999999999, 0.0126, 0.0133, 0.014, 0.0147, 0.0154, 0.0161,
      0.0168, 0.017499999999999998, 0.0182, 0.0189, 0.0196, 0.0203, 0.021,
      0.0217, 0.0224, 0.0231 }
  },                                   /* Variable: sensor
                                        * Referenced by: '<S4>/Saturation'
                                        */

  {
    0.058,
    9.81,
    0.0249,
    0.25296069868995635,
    0.0
  },                                   /* Variable: model
                                        * Referenced by:
                                        *   '<S4>/Constant'
                                        *   '<S4>/Constant1'
                                        *   '<S4>/Gain'
                                        *   '<S4>/Gain1'
                                        *   '<S4>/Gain2'
                                        */
  0.001,                               /* Mask Parameter: MagneticLevitationSystem_T0
                                        * Referenced by: '<S2>/1//T0'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Control'
                                        */
  -200.0,                              /* Computed Parameter: PositionFilter_A
                                        * Referenced by: '<S2>/Position Filter'
                                        */
  200.0,                               /* Computed Parameter: PositionFilter_C
                                        * Referenced by: '<S2>/Position Filter'
                                        */

  /*  Computed Parameter: AnalogInputs_P1_Size
   * Referenced by: '<S2>/Analog Inputs'
   */
  { 1.0, 1.0 },
  57088.0,                             /* Expression: BA
                                        * Referenced by: '<S2>/Analog Inputs'
                                        */

  /*  Computed Parameter: AnalogInputs_P2_Size
   * Referenced by: '<S2>/Analog Inputs'
   */
  { 1.0, 2.0 },

  /*  Expression: [4 2]
   * Referenced by: '<S2>/Analog Inputs'
   */
  { 4.0, 2.0 },

  /*  Computed Parameter: AnalogInputs_P3_Size
   * Referenced by: '<S2>/Analog Inputs'
   */
  { 1.0, 2.0 },

  /*  Expression: [1 1]
   * Referenced by: '<S2>/Analog Inputs'
   */
  { 1.0, 1.0 },

  /*  Computed Parameter: AnalogInputs_P4_Size
   * Referenced by: '<S2>/Analog Inputs'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: T0
                                        * Referenced by: '<S2>/Analog Inputs'
                                        */

  /*  Expression: sensor.V(end:-1:1)
   * Referenced by: '<S2>/Position scaling [V] to [m]'
   */
  { -9.16, -9.15, -9.13, -9.07, -8.97, -8.82, -8.59, -8.3, -7.94, -7.5, -6.98,
    -6.4, -5.72, -4.97, -4.1, -3.18, -2.22, -1.21, -0.19, 0.79, 1.76, 2.67, 3.5,
    4.25, 4.97, 5.67, 6.29, 6.86, 7.38, 7.83, 8.21, 8.57, 8.95, 9.22 },

  /*  Expression: sensor.d(end:-1:1)
   * Referenced by: '<S2>/Position scaling [V] to [m]'
   */
  { 0.0231, 0.0224, 0.0217, 0.021, 0.0203, 0.0196, 0.0189, 0.0182,
    0.017499999999999998, 0.0168, 0.0161, 0.0154, 0.0147, 0.014, 0.0133, 0.0126,
    0.011899999999999999, 0.0112, 0.0105, 0.0098, 0.0091, 0.0084, 0.0077, 0.007,
    0.0063, 0.0056, 0.0049, 0.0042, 0.0035, 0.0028, 0.0021, 0.0014, 0.0007, 0.0
  },
  -100.0,                              /* Computed Parameter: VelocityFilter_A
                                        * Referenced by: '<S2>/Velocity Filter'
                                        */
  100.0,                               /* Computed Parameter: VelocityFilter_C
                                        * Referenced by: '<S2>/Velocity Filter'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Memory'
                                        */
  -100.0,                              /* Computed Parameter: CurrentFilter_A
                                        * Referenced by: '<S2>/Current Filter'
                                        */
  100.0,                               /* Computed Parameter: CurrentFilter_C
                                        * Referenced by: '<S2>/Current Filter'
                                        */
  -66.666666666666671,                 /* Computed Parameter: CurrentFilter1_A
                                        * Referenced by: '<S2>/Current Filter1'
                                        */
  66.666666666666671,                  /* Computed Parameter: CurrentFilter1_C
                                        * Referenced by: '<S2>/Current Filter1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S2>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S4>/Integrator2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Constant'
                                        */
  11.45,                               /* Expression: 11.45
                                        * Referenced by: '<S2>/Gain'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S4>/Integrator'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S4>/Integrator1'
                                        */

  /*  Computed Parameter: PWM_P1_Size
   * Referenced by: '<S2>/PWM'
   */
  { 1.0, 1.0 },
  57088.0,                             /* Expression: BA
                                        * Referenced by: '<S2>/PWM'
                                        */

  /*  Computed Parameter: PWM_P2_Size
   * Referenced by: '<S2>/PWM'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: T0
                                        * Referenced by: '<S2>/PWM'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/PWM Brake'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S2>/PWM Mode'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/PWM Prescaler'
                                        */
  0U,                                  /* Computed Parameter: ManualSwitch_CurrentSetting
                                        * Referenced by: '<S2>/Manual Switch'
                                        */
  0U,                                  /* Computed Parameter: ManualSwitch1_CurrentSetting
                                        * Referenced by: '<S2>/Manual Switch1'
                                        */
  0U,                                  /* Computed Parameter: ManualSwitch2_CurrentSetting
                                        * Referenced by: '<S2>/Manual Switch2'
                                        */
  0U                                   /* Computed Parameter: ManualSwitch3_CurrentSetting
                                        * Referenced by: '<S2>/Manual Switch3'
                                        */
};
