/*
 * Lewitacja_data.c
 *
 * Code generation for model "Lewitacja".
 *
 * Model version              : 1.424
 * Simulink Coder version : 8.8.1 (R2015aSP1) 04-Sep-2015
 * C source code generated on : Wed Mar 08 11:05:19 2017
 *
 * Target selection: rtwin.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Lewitacja.h"
#include "Lewitacja_private.h"

/* Block parameters (auto storage) */
P_Lewitacja_T Lewitacja_P = {
  0.001,                               /* Mask Parameter: MagneticLevitationSystem_T0
                                        * Referenced by: '<S1>/1//T0'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Control'
                                        */
  -200.0,                              /* Computed Parameter: PositionFilter_A
                                        * Referenced by: '<S1>/Position Filter'
                                        */
  200.0,                               /* Computed Parameter: PositionFilter_C
                                        * Referenced by: '<S1>/Position Filter'
                                        */

  /*  Computed Parameter: AnalogInputs_P1_Size
   * Referenced by: '<S1>/Analog Inputs'
   */
  { 1.0, 1.0 },
  57088.0,                             /* Expression: BA
                                        * Referenced by: '<S1>/Analog Inputs'
                                        */

  /*  Computed Parameter: AnalogInputs_P2_Size
   * Referenced by: '<S1>/Analog Inputs'
   */
  { 1.0, 2.0 },

  /*  Expression: [4 2]
   * Referenced by: '<S1>/Analog Inputs'
   */
  { 4.0, 2.0 },

  /*  Computed Parameter: AnalogInputs_P3_Size
   * Referenced by: '<S1>/Analog Inputs'
   */
  { 1.0, 2.0 },

  /*  Expression: [1 1]
   * Referenced by: '<S1>/Analog Inputs'
   */
  { 1.0, 1.0 },

  /*  Computed Parameter: AnalogInputs_P4_Size
   * Referenced by: '<S1>/Analog Inputs'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: T0
                                        * Referenced by: '<S1>/Analog Inputs'
                                        */

  /*  Expression: SensorData.Sensor_V(end:-1:1)
   * Referenced by: '<S1>/Position scaling [V] to [m]'
   */
  { 0.26267708842208115, 0.27337567171470434, 0.29350268685881792,
    0.380019540791402, 0.51929653150952548, 0.75349291646311656,
    1.0848070346849035, 1.4606741573033721, 1.9036150464093824,
    2.4622374206155366, 3.0474841231069845, 3.6503663898387919,
    4.3472398632144538, 5.0876404494381982, 5.7943820224719182,
    6.5478749389350286, 7.2719101123595564, 7.89052271617001, 8.4675622862725763,
    8.930239374694656, 9.2620908646800348, 9.4770884220811027,
    9.6208597948217047, 9.7086956521739243, 9.77293600390817, 9.84631167562287,
    9.906985832926237, 9.9980947728383 },

  /*  Expression: SensorData.Distance_m(end:-1:1)
   * Referenced by: '<S1>/Position scaling [V] to [m]'
   */
  { 0.0189, 0.0182, 0.0175, 0.016799999999999995, 0.016099999999999996,
    0.015399999999999999, 0.0147, 0.014, 0.0133, 0.0126, 0.011899999999999999,
    0.0112, 0.0105, 0.0098, 0.0091, 0.0083999999999999977, 0.0076999999999999994,
    0.007, 0.0063, 0.0056, 0.0049, 0.0041999999999999989, 0.0035, 0.0028,
    0.0020999999999999994, 0.0014, 0.0007, 0.0 },
  -100.0,                              /* Computed Parameter: VelocityFilter_A
                                        * Referenced by: '<S1>/Velocity Filter'
                                        */
  100.0,                               /* Computed Parameter: VelocityFilter_C
                                        * Referenced by: '<S1>/Velocity Filter'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Memory'
                                        */
  -100.0,                              /* Computed Parameter: CurrentFilter_A
                                        * Referenced by: '<S1>/Current Filter'
                                        */
  100.0,                               /* Computed Parameter: CurrentFilter_C
                                        * Referenced by: '<S1>/Current Filter'
                                        */
  -66.666666666666671,                 /* Computed Parameter: CurrentFilter1_A
                                        * Referenced by: '<S1>/Current Filter1'
                                        */
  66.666666666666671,                  /* Computed Parameter: CurrentFilter1_C
                                        * Referenced by: '<S1>/Current Filter1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S1>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Saturation'
                                        */
  -10.0,                               /* Computed Parameter: PositionFilter1_A
                                        * Referenced by: '<S1>/Position Filter1'
                                        */
  10.0,                                /* Computed Parameter: PositionFilter1_C
                                        * Referenced by: '<S1>/Position Filter1'
                                        */

  /*  Computed Parameter: PWM_P1_Size
   * Referenced by: '<S1>/PWM'
   */
  { 1.0, 1.0 },
  57088.0,                             /* Expression: BA
                                        * Referenced by: '<S1>/PWM'
                                        */

  /*  Computed Parameter: PWM_P2_Size
   * Referenced by: '<S1>/PWM'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: T0
                                        * Referenced by: '<S1>/PWM'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/PWM Brake'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S1>/PWM Mode'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/PWM Prescaler'
                                        */
  0U,                                  /* Computed Parameter: ManualSwitch_CurrentSetting
                                        * Referenced by: '<S1>/Manual Switch'
                                        */
  0U,                                  /* Computed Parameter: ManualSwitch1_CurrentSetting
                                        * Referenced by: '<S1>/Manual Switch1'
                                        */
  0U,                                  /* Computed Parameter: ManualSwitch2_CurrentSetting
                                        * Referenced by: '<S1>/Manual Switch2'
                                        */
  0U                                   /* Computed Parameter: ManualSwitch3_CurrentSetting
                                        * Referenced by: '<S1>/Manual Switch3'
                                        */
};
