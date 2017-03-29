/*
 * Lewitacja_new.c
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
#include "Lewitacja_new_dt.h"

/* list of Simulink Desktop Real-Time timers */
const int RTWinTimerCount = 1;
const double RTWinTimers[2] = {
  0.001, 0.0,
};

/* Block signals (auto storage) */
B_Lewitacja_new_T Lewitacja_new_B;

/* Continuous states */
X_Lewitacja_new_T Lewitacja_new_X;

/* Block states (auto storage) */
DW_Lewitacja_new_T Lewitacja_new_DW;

/* Real-time model */
RT_MODEL_Lewitacja_new_T Lewitacja_new_M_;
RT_MODEL_Lewitacja_new_T *const Lewitacja_new_M = &Lewitacja_new_M_;

/*
 * This function updates continuous states using the ODE5 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  /* Solver Matrices */
  static const real_T rt_ODE5_A[6] = {
    1.0/5.0, 3.0/10.0, 4.0/5.0, 8.0/9.0, 1.0, 1.0
  };

  static const real_T rt_ODE5_B[6][6] = {
    { 1.0/5.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

    { 3.0/40.0, 9.0/40.0, 0.0, 0.0, 0.0, 0.0 },

    { 44.0/45.0, -56.0/15.0, 32.0/9.0, 0.0, 0.0, 0.0 },

    { 19372.0/6561.0, -25360.0/2187.0, 64448.0/6561.0, -212.0/729.0, 0.0, 0.0 },

    { 9017.0/3168.0, -355.0/33.0, 46732.0/5247.0, 49.0/176.0, -5103.0/18656.0,
      0.0 },

    { 35.0/384.0, 0.0, 500.0/1113.0, 125.0/192.0, -2187.0/6784.0, 11.0/84.0 }
  };

  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE5_IntgData *id = (ODE5_IntgData *)rtsiGetSolverData(si);
  real_T *y = id->y;
  real_T *f0 = id->f[0];
  real_T *f1 = id->f[1];
  real_T *f2 = id->f[2];
  real_T *f3 = id->f[3];
  real_T *f4 = id->f[4];
  real_T *f5 = id->f[5];
  real_T hB[6];
  int_T i;
  int_T nXc = 7;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(y, x,
                (uint_T)nXc*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  Lewitacja_new_derivatives();

  /* f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*)); */
  hB[0] = h * rt_ODE5_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE5_A[0]);
  rtsiSetdX(si, f1);
  Lewitacja_new_output();
  Lewitacja_new_derivatives();

  /* f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*)); */
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE5_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE5_A[1]);
  rtsiSetdX(si, f2);
  Lewitacja_new_output();
  Lewitacja_new_derivatives();

  /* f(:,4) = feval(odefile, t + hA(3), y + f*hB(:,3), args(:)(*)); */
  for (i = 0; i <= 2; i++) {
    hB[i] = h * rt_ODE5_B[2][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2]);
  }

  rtsiSetT(si, t + h*rt_ODE5_A[2]);
  rtsiSetdX(si, f3);
  Lewitacja_new_output();
  Lewitacja_new_derivatives();

  /* f(:,5) = feval(odefile, t + hA(4), y + f*hB(:,4), args(:)(*)); */
  for (i = 0; i <= 3; i++) {
    hB[i] = h * rt_ODE5_B[3][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2] +
                   f3[i]*hB[3]);
  }

  rtsiSetT(si, t + h*rt_ODE5_A[3]);
  rtsiSetdX(si, f4);
  Lewitacja_new_output();
  Lewitacja_new_derivatives();

  /* f(:,6) = feval(odefile, t + hA(5), y + f*hB(:,5), args(:)(*)); */
  for (i = 0; i <= 4; i++) {
    hB[i] = h * rt_ODE5_B[4][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2] +
                   f3[i]*hB[3] + f4[i]*hB[4]);
  }

  rtsiSetT(si, tnew);
  rtsiSetdX(si, f5);
  Lewitacja_new_output();
  Lewitacja_new_derivatives();

  /* tnew = t + hA(6);
     ynew = y + f*hB(:,6); */
  for (i = 0; i <= 5; i++) {
    hB[i] = h * rt_ODE5_B[5][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2] +
                   f3[i]*hB[3] + f4[i]*hB[4] + f5[i]*hB[5]);
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T tmp;
  real_T tmp_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = (rtNaN);
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

/* Model output function */
void Lewitacja_new_output(void)
{
  if (rtmIsMajorTimeStep(Lewitacja_new_M)) {
    /* set solver stop time */
    if (!(Lewitacja_new_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&Lewitacja_new_M->solverInfo,
                            ((Lewitacja_new_M->Timing.clockTickH0 + 1) *
        Lewitacja_new_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&Lewitacja_new_M->solverInfo,
                            ((Lewitacja_new_M->Timing.clockTick0 + 1) *
        Lewitacja_new_M->Timing.stepSize0 + Lewitacja_new_M->Timing.clockTickH0 *
        Lewitacja_new_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(Lewitacja_new_M)) {
    Lewitacja_new_M->Timing.t[0] = rtsiGetT(&Lewitacja_new_M->solverInfo);
  }

  if (rtmIsMajorTimeStep(Lewitacja_new_M)) {
    /* Constant: '<Root>/Control' */
    Lewitacja_new_B.Control = Lewitacja_new_P.Control_Value;

    /* Level2 S-Function Block: '<S2>/Analog Inputs' (ML_AnalogInputs) */
    {
      SimStruct *rts = Lewitacja_new_M->childSfunctions[0];
      sfcnOutputs(rts, 1);
    }

    /* Lookup: '<S2>/Position scaling [V] to [m]' */
    Lewitacja_new_B.PositionscalingVtom = rt_Lookup
      (Lewitacja_new_P.PositionscalingVtom_XData, 34,
       Lewitacja_new_B.AnalogInputs[0],
       Lewitacja_new_P.PositionscalingVtom_YData);
  }

  /* ManualSwitch: '<S2>/Manual Switch' incorporates:
   *  TransferFcn: '<S2>/Position Filter'
   */
  if (Lewitacja_new_P.ManualSwitch_CurrentSetting == 1) {
    Lewitacja_new_B.ManualSwitch = Lewitacja_new_P.PositionFilter_C *
      Lewitacja_new_X.PositionFilter_CSTATE;
  } else {
    Lewitacja_new_B.ManualSwitch = Lewitacja_new_B.PositionscalingVtom;
  }

  /* End of ManualSwitch: '<S2>/Manual Switch' */
  if (rtmIsMajorTimeStep(Lewitacja_new_M)) {
    /* Memory: '<S2>/Memory' */
    Lewitacja_new_B.Memory = Lewitacja_new_DW.Memory_PreviousInput;
  }

  /* Gain: '<S2>/1//T0' incorporates:
   *  Sum: '<S2>/Sum'
   */
  Lewitacja_new_B.T0 = 1.0 / Lewitacja_new_P.MagneticLevitationSystem_T0 *
    (Lewitacja_new_B.ManualSwitch - Lewitacja_new_B.Memory);

  /* ManualSwitch: '<S2>/Manual Switch1' incorporates:
   *  TransferFcn: '<S2>/Velocity Filter'
   */
  if (Lewitacja_new_P.ManualSwitch1_CurrentSetting == 1) {
    Lewitacja_new_B.ManualSwitch1 = Lewitacja_new_P.VelocityFilter_C *
      Lewitacja_new_X.VelocityFilter_CSTATE;
  } else {
    Lewitacja_new_B.ManualSwitch1 = Lewitacja_new_B.T0;
  }

  /* End of ManualSwitch: '<S2>/Manual Switch1' */
  if (rtmIsMajorTimeStep(Lewitacja_new_M)) {
    /* Fcn: '<S3>/Fcn' */
    Lewitacja_new_B.Fcn = (-0.000597085040418994 * rt_powd_snf
      (Lewitacja_new_B.AnalogInputs[1], 2.0) + 0.32009034504826933 *
      Lewitacja_new_B.AnalogInputs[1]) + -0.24476226301800058;
  }

  /* ManualSwitch: '<S2>/Manual Switch2' incorporates:
   *  TransferFcn: '<S2>/Current Filter'
   */
  if (Lewitacja_new_P.ManualSwitch2_CurrentSetting == 1) {
    Lewitacja_new_B.ManualSwitch2 = Lewitacja_new_P.CurrentFilter_C *
      Lewitacja_new_X.CurrentFilter_CSTATE;
  } else {
    Lewitacja_new_B.ManualSwitch2 = Lewitacja_new_B.Fcn;
  }

  /* End of ManualSwitch: '<S2>/Manual Switch2' */
  if (rtmIsMajorTimeStep(Lewitacja_new_M)) {
    /* Saturate: '<S2>/Saturation' */
    if (Lewitacja_new_B.Control > Lewitacja_new_P.Saturation_UpperSat) {
      Lewitacja_new_B.Saturation = Lewitacja_new_P.Saturation_UpperSat;
    } else if (Lewitacja_new_B.Control < Lewitacja_new_P.Saturation_LowerSat) {
      Lewitacja_new_B.Saturation = Lewitacja_new_P.Saturation_LowerSat;
    } else {
      Lewitacja_new_B.Saturation = Lewitacja_new_B.Control;
    }

    /* End of Saturate: '<S2>/Saturation' */
  }

  /* ManualSwitch: '<S2>/Manual Switch3' incorporates:
   *  TransferFcn: '<S2>/Current Filter1'
   */
  if (Lewitacja_new_P.ManualSwitch3_CurrentSetting == 1) {
    Lewitacja_new_B.ManualSwitch3 = Lewitacja_new_P.CurrentFilter1_C *
      Lewitacja_new_X.CurrentFilter1_CSTATE;
  } else {
    Lewitacja_new_B.ManualSwitch3 = Lewitacja_new_B.Saturation;
  }

  /* End of ManualSwitch: '<S2>/Manual Switch3' */
  if (rtmIsMajorTimeStep(Lewitacja_new_M)) {
  }

  /* Saturate: '<S4>/Saturation' incorporates:
   *  Integrator: '<S4>/Integrator2'
   */
  if (Lewitacja_new_X.Integrator2_CSTATE > Lewitacja_new_P.sensor.d[33]) {
    Lewitacja_new_B.Saturation_l = Lewitacja_new_P.sensor.d[33];
  } else if (Lewitacja_new_X.Integrator2_CSTATE < Lewitacja_new_P.sensor.d[0]) {
    Lewitacja_new_B.Saturation_l = Lewitacja_new_P.sensor.d[0];
  } else {
    Lewitacja_new_B.Saturation_l = Lewitacja_new_X.Integrator2_CSTATE;
  }

  /* End of Saturate: '<S4>/Saturation' */
  if (rtmIsMajorTimeStep(Lewitacja_new_M)) {
    /* Gain: '<S4>/Gain' incorporates:
     *  Constant: '<S2>/Constant'
     *  Constant: '<S4>/Constant'
     *  Gain: '<S2>/Gain'
     *  Sum: '<S4>/Sum'
     */
    Lewitacja_new_B.Gain = ((Lewitacja_new_P.Gain_Gain *
      Lewitacja_new_B.Saturation + Lewitacja_new_P.model.uc) +
      Lewitacja_new_P.Constant_Value) * (Lewitacja_new_P.model.k /
      Lewitacja_new_P.model.T);
  }

  /* Gain: '<S4>/Gain1' incorporates:
   *  Integrator: '<S4>/Integrator'
   *  Sum: '<S4>/Sum1'
   */
  Lewitacja_new_B.Gain1 = 1.0 / Lewitacja_new_P.model.T * (Lewitacja_new_B.Gain
    - Lewitacja_new_X.Integrator_CSTATE);

  /* Integrator: '<S4>/Integrator1' */
  Lewitacja_new_B.Integrator1 = Lewitacja_new_X.Integrator1_CSTATE;

  /* Sum: '<S4>/Sum2' incorporates:
   *  Constant: '<S2>/Constant'
   *  Constant: '<S4>/Constant1'
   *  Fcn: '<S4>/Fcn'
   *  Gain: '<S4>/Gain2'
   *  Integrator: '<S4>/Integrator'
   *  Math: '<S4>/Math Function'
   *  Product: '<S4>/Product'
   */
  Lewitacja_new_B.Sum2 = (0.5 / Lewitacja_new_P.model.m *
    (Lewitacja_new_X.Integrator_CSTATE * Lewitacja_new_X.Integrator_CSTATE) *
    (exp(-148.9903042908592 * Lewitacja_new_B.Saturation_l) *
     -2.6897994094298867) + Lewitacja_new_P.Constant_Value) +
    Lewitacja_new_P.model.g / 1000.0;
  if (rtmIsMajorTimeStep(Lewitacja_new_M)) {
    /* Level2 S-Function Block: '<S2>/PWM' (ML_PWM) */
    {
      SimStruct *rts = Lewitacja_new_M->childSfunctions[1];
      sfcnOutputs(rts, 1);
    }

    /* Constant: '<S2>/PWM Brake' */
    Lewitacja_new_B.PWMBrake = Lewitacja_new_P.PWMBrake_Value;

    /* Constant: '<S2>/PWM Mode' */
    Lewitacja_new_B.PWMMode = Lewitacja_new_P.PWMMode_Value;

    /* Constant: '<S2>/PWM Prescaler' */
    Lewitacja_new_B.PWMPrescaler = Lewitacja_new_P.PWMPrescaler_Value;
  }
}

/* Model update function */
void Lewitacja_new_update(void)
{
  if (rtmIsMajorTimeStep(Lewitacja_new_M)) {
    /* Update for Memory: '<S2>/Memory' */
    Lewitacja_new_DW.Memory_PreviousInput = Lewitacja_new_B.ManualSwitch;
  }

  if (rtmIsMajorTimeStep(Lewitacja_new_M)) {
    rt_ertODEUpdateContinuousStates(&Lewitacja_new_M->solverInfo);
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Lewitacja_new_M->Timing.clockTick0)) {
    ++Lewitacja_new_M->Timing.clockTickH0;
  }

  Lewitacja_new_M->Timing.t[0] = rtsiGetSolverStopTime
    (&Lewitacja_new_M->solverInfo);

  {
    /* Update absolute timer for sample time: [0.001s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++Lewitacja_new_M->Timing.clockTick1)) {
      ++Lewitacja_new_M->Timing.clockTickH1;
    }

    Lewitacja_new_M->Timing.t[1] = Lewitacja_new_M->Timing.clockTick1 *
      Lewitacja_new_M->Timing.stepSize1 + Lewitacja_new_M->Timing.clockTickH1 *
      Lewitacja_new_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Derivatives for root system: '<Root>' */
void Lewitacja_new_derivatives(void)
{
  XDot_Lewitacja_new_T *_rtXdot;
  _rtXdot = ((XDot_Lewitacja_new_T *) Lewitacja_new_M->ModelData.derivs);

  /* Derivatives for TransferFcn: '<S2>/Position Filter' */
  _rtXdot->PositionFilter_CSTATE = 0.0;
  _rtXdot->PositionFilter_CSTATE += Lewitacja_new_P.PositionFilter_A *
    Lewitacja_new_X.PositionFilter_CSTATE;
  _rtXdot->PositionFilter_CSTATE += Lewitacja_new_B.PositionscalingVtom;

  /* Derivatives for TransferFcn: '<S2>/Velocity Filter' */
  _rtXdot->VelocityFilter_CSTATE = 0.0;
  _rtXdot->VelocityFilter_CSTATE += Lewitacja_new_P.VelocityFilter_A *
    Lewitacja_new_X.VelocityFilter_CSTATE;
  _rtXdot->VelocityFilter_CSTATE += Lewitacja_new_B.T0;

  /* Derivatives for TransferFcn: '<S2>/Current Filter' */
  _rtXdot->CurrentFilter_CSTATE = 0.0;
  _rtXdot->CurrentFilter_CSTATE += Lewitacja_new_P.CurrentFilter_A *
    Lewitacja_new_X.CurrentFilter_CSTATE;
  _rtXdot->CurrentFilter_CSTATE += Lewitacja_new_B.Fcn;

  /* Derivatives for TransferFcn: '<S2>/Current Filter1' */
  _rtXdot->CurrentFilter1_CSTATE = 0.0;
  _rtXdot->CurrentFilter1_CSTATE += Lewitacja_new_P.CurrentFilter1_A *
    Lewitacja_new_X.CurrentFilter1_CSTATE;
  _rtXdot->CurrentFilter1_CSTATE += Lewitacja_new_B.Saturation;

  /* Derivatives for Integrator: '<S4>/Integrator2' */
  _rtXdot->Integrator2_CSTATE = Lewitacja_new_B.Integrator1;

  /* Derivatives for Integrator: '<S4>/Integrator' */
  _rtXdot->Integrator_CSTATE = Lewitacja_new_B.Gain1;

  /* Derivatives for Integrator: '<S4>/Integrator1' */
  _rtXdot->Integrator1_CSTATE = Lewitacja_new_B.Sum2;
}

/* Model initialize function */
void Lewitacja_new_initialize(void)
{
  /* InitializeConditions for TransferFcn: '<S2>/Position Filter' */
  Lewitacja_new_X.PositionFilter_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<S2>/Velocity Filter' */
  Lewitacja_new_X.VelocityFilter_CSTATE = 0.0;

  /* InitializeConditions for Memory: '<S2>/Memory' */
  Lewitacja_new_DW.Memory_PreviousInput = Lewitacja_new_P.Memory_X0;

  /* InitializeConditions for TransferFcn: '<S2>/Current Filter' */
  Lewitacja_new_X.CurrentFilter_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<S2>/Current Filter1' */
  Lewitacja_new_X.CurrentFilter1_CSTATE = 0.0;

  /* InitializeConditions for Integrator: '<S4>/Integrator2' */
  Lewitacja_new_X.Integrator2_CSTATE = Lewitacja_new_P.Integrator2_IC;

  /* InitializeConditions for Integrator: '<S4>/Integrator' */
  Lewitacja_new_X.Integrator_CSTATE = Lewitacja_new_P.Integrator_IC;

  /* InitializeConditions for Integrator: '<S4>/Integrator1' */
  Lewitacja_new_X.Integrator1_CSTATE = Lewitacja_new_P.Integrator1_IC;
}

/* Model terminate function */
void Lewitacja_new_terminate(void)
{
  /* Level2 S-Function Block: '<S2>/Analog Inputs' (ML_AnalogInputs) */
  {
    SimStruct *rts = Lewitacja_new_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S2>/PWM' (ML_PWM) */
  {
    SimStruct *rts = Lewitacja_new_M->childSfunctions[1];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/

/* Solver interface called by GRT_Main */
#ifndef USE_GENERATED_SOLVER

void rt_ODECreateIntegrationData(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

void rt_ODEDestroyIntegrationData(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

void rt_ODEUpdateContinuousStates(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

#endif

void MdlOutputs(int_T tid)
{
  Lewitacja_new_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  Lewitacja_new_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  Lewitacja_new_initialize();
}

void MdlTerminate(void)
{
  Lewitacja_new_terminate();
}

/* Registration function */
RT_MODEL_Lewitacja_new_T *Lewitacja_new(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Lewitacja_new_M, 0,
                sizeof(RT_MODEL_Lewitacja_new_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&Lewitacja_new_M->solverInfo,
                          &Lewitacja_new_M->Timing.simTimeStep);
    rtsiSetTPtr(&Lewitacja_new_M->solverInfo, &rtmGetTPtr(Lewitacja_new_M));
    rtsiSetStepSizePtr(&Lewitacja_new_M->solverInfo,
                       &Lewitacja_new_M->Timing.stepSize0);
    rtsiSetdXPtr(&Lewitacja_new_M->solverInfo,
                 &Lewitacja_new_M->ModelData.derivs);
    rtsiSetContStatesPtr(&Lewitacja_new_M->solverInfo, (real_T **)
                         &Lewitacja_new_M->ModelData.contStates);
    rtsiSetNumContStatesPtr(&Lewitacja_new_M->solverInfo,
      &Lewitacja_new_M->Sizes.numContStates);
    rtsiSetErrorStatusPtr(&Lewitacja_new_M->solverInfo, (&rtmGetErrorStatus
      (Lewitacja_new_M)));
    rtsiSetRTModelPtr(&Lewitacja_new_M->solverInfo, Lewitacja_new_M);
  }

  rtsiSetSimTimeStep(&Lewitacja_new_M->solverInfo, MAJOR_TIME_STEP);
  Lewitacja_new_M->ModelData.intgData.y = Lewitacja_new_M->ModelData.odeY;
  Lewitacja_new_M->ModelData.intgData.f[0] = Lewitacja_new_M->ModelData.odeF[0];
  Lewitacja_new_M->ModelData.intgData.f[1] = Lewitacja_new_M->ModelData.odeF[1];
  Lewitacja_new_M->ModelData.intgData.f[2] = Lewitacja_new_M->ModelData.odeF[2];
  Lewitacja_new_M->ModelData.intgData.f[3] = Lewitacja_new_M->ModelData.odeF[3];
  Lewitacja_new_M->ModelData.intgData.f[4] = Lewitacja_new_M->ModelData.odeF[4];
  Lewitacja_new_M->ModelData.intgData.f[5] = Lewitacja_new_M->ModelData.odeF[5];
  Lewitacja_new_M->ModelData.contStates = ((real_T *) &Lewitacja_new_X);
  rtsiSetSolverData(&Lewitacja_new_M->solverInfo, (void *)
                    &Lewitacja_new_M->ModelData.intgData);
  rtsiSetSolverName(&Lewitacja_new_M->solverInfo,"ode5");
  Lewitacja_new_M->solverInfoPtr = (&Lewitacja_new_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = Lewitacja_new_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    Lewitacja_new_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    Lewitacja_new_M->Timing.sampleTimes =
      (&Lewitacja_new_M->Timing.sampleTimesArray[0]);
    Lewitacja_new_M->Timing.offsetTimes =
      (&Lewitacja_new_M->Timing.offsetTimesArray[0]);

    /* task periods */
    Lewitacja_new_M->Timing.sampleTimes[0] = (0.0);
    Lewitacja_new_M->Timing.sampleTimes[1] = (0.001);

    /* task offsets */
    Lewitacja_new_M->Timing.offsetTimes[0] = (0.0);
    Lewitacja_new_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(Lewitacja_new_M, &Lewitacja_new_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = Lewitacja_new_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    Lewitacja_new_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(Lewitacja_new_M, 1000.0);
  Lewitacja_new_M->Timing.stepSize0 = 0.001;
  Lewitacja_new_M->Timing.stepSize1 = 0.001;

  /* External mode info */
  Lewitacja_new_M->Sizes.checksums[0] = (1193695991U);
  Lewitacja_new_M->Sizes.checksums[1] = (512664707U);
  Lewitacja_new_M->Sizes.checksums[2] = (3481952353U);
  Lewitacja_new_M->Sizes.checksums[3] = (2175739642U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[1];
    Lewitacja_new_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(Lewitacja_new_M->extModeInfo,
      &Lewitacja_new_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(Lewitacja_new_M->extModeInfo,
                        Lewitacja_new_M->Sizes.checksums);
    rteiSetTPtr(Lewitacja_new_M->extModeInfo, rtmGetTPtr(Lewitacja_new_M));
  }

  Lewitacja_new_M->solverInfoPtr = (&Lewitacja_new_M->solverInfo);
  Lewitacja_new_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&Lewitacja_new_M->solverInfo, 0.001);
  rtsiSetSolverMode(&Lewitacja_new_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  Lewitacja_new_M->ModelData.blockIO = ((void *) &Lewitacja_new_B);

  {
    Lewitacja_new_B.Control = 0.0;
    Lewitacja_new_B.AnalogInputs[0] = 0.0;
    Lewitacja_new_B.AnalogInputs[1] = 0.0;
    Lewitacja_new_B.PositionscalingVtom = 0.0;
    Lewitacja_new_B.ManualSwitch = 0.0;
    Lewitacja_new_B.Memory = 0.0;
    Lewitacja_new_B.T0 = 0.0;
    Lewitacja_new_B.ManualSwitch1 = 0.0;
    Lewitacja_new_B.Fcn = 0.0;
    Lewitacja_new_B.ManualSwitch2 = 0.0;
    Lewitacja_new_B.Saturation = 0.0;
    Lewitacja_new_B.ManualSwitch3 = 0.0;
    Lewitacja_new_B.Saturation_l = 0.0;
    Lewitacja_new_B.Gain = 0.0;
    Lewitacja_new_B.Gain1 = 0.0;
    Lewitacja_new_B.Integrator1 = 0.0;
    Lewitacja_new_B.Sum2 = 0.0;
    Lewitacja_new_B.PWM = 0.0;
    Lewitacja_new_B.PWMBrake = 0.0;
    Lewitacja_new_B.PWMMode = 0.0;
    Lewitacja_new_B.PWMPrescaler = 0.0;
  }

  /* parameters */
  Lewitacja_new_M->ModelData.defaultParam = ((real_T *)&Lewitacja_new_P);

  /* states (continuous) */
  {
    real_T *x = (real_T *) &Lewitacja_new_X;
    Lewitacja_new_M->ModelData.contStates = (x);
    (void) memset((void *)&Lewitacja_new_X, 0,
                  sizeof(X_Lewitacja_new_T));
  }

  /* states (dwork) */
  Lewitacja_new_M->ModelData.dwork = ((void *) &Lewitacja_new_DW);
  (void) memset((void *)&Lewitacja_new_DW, 0,
                sizeof(DW_Lewitacja_new_T));
  Lewitacja_new_DW.Memory_PreviousInput = 0.0;

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    Lewitacja_new_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 16;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.B = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.P = &rtPTransTable;
  }

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &Lewitacja_new_M->NonInlinedSFcns.sfcnInfo;
    Lewitacja_new_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(Lewitacja_new_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &Lewitacja_new_M->Sizes.numSampTimes);
    Lewitacja_new_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (Lewitacja_new_M)[0]);
    Lewitacja_new_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr
      (Lewitacja_new_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,Lewitacja_new_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(Lewitacja_new_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(Lewitacja_new_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(Lewitacja_new_M));
    rtssSetStepSizePtr(sfcnInfo, &Lewitacja_new_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(Lewitacja_new_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &Lewitacja_new_M->ModelData.derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &Lewitacja_new_M->ModelData.zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo,
      &Lewitacja_new_M->ModelData.blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &Lewitacja_new_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &Lewitacja_new_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &Lewitacja_new_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &Lewitacja_new_M->solverInfoPtr);
  }

  Lewitacja_new_M->Sizes.numSFcns = (2);

  /* register each child */
  {
    (void) memset((void *)&Lewitacja_new_M->NonInlinedSFcns.childSFunctions[0],
                  0,
                  2*sizeof(SimStruct));
    Lewitacja_new_M->childSfunctions =
      (&Lewitacja_new_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    Lewitacja_new_M->childSfunctions[0] =
      (&Lewitacja_new_M->NonInlinedSFcns.childSFunctions[0]);
    Lewitacja_new_M->childSfunctions[1] =
      (&Lewitacja_new_M->NonInlinedSFcns.childSFunctions[1]);

    /* Level2 S-Function Block: Lewitacja_new/<S2>/Analog Inputs (ML_AnalogInputs) */
    {
      SimStruct *rts = Lewitacja_new_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = Lewitacja_new_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = Lewitacja_new_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = Lewitacja_new_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Lewitacja_new_M->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, Lewitacja_new_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Lewitacja_new_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Lewitacja_new_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Lewitacja_new_M->NonInlinedSFcns.statesInfo2[0]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Lewitacja_new_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 2);
          ssSetOutputPortSignal(rts, 0, ((real_T *) Lewitacja_new_B.AnalogInputs));
        }
      }

      /* path info */
      ssSetModelName(rts, "Analog Inputs");
      ssSetPath(rts, "Lewitacja_new/Magnetic Levitation System/Analog Inputs");
      ssSetRTModel(rts,Lewitacja_new_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Lewitacja_new_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Lewitacja_new_P.AnalogInputs_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Lewitacja_new_P.AnalogInputs_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Lewitacja_new_P.AnalogInputs_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Lewitacja_new_P.AnalogInputs_P4_Size);
      }

      /* registration */
      ML_AnalogInputs(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: Lewitacja_new/<S2>/PWM (ML_PWM) */
    {
      SimStruct *rts = Lewitacja_new_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = Lewitacja_new_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = Lewitacja_new_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = Lewitacja_new_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Lewitacja_new_M->NonInlinedSFcns.blkInfo2[1]);
      }

      ssSetRTWSfcnInfo(rts, Lewitacja_new_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Lewitacja_new_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Lewitacja_new_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Lewitacja_new_M->NonInlinedSFcns.statesInfo2[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Lewitacja_new_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Lewitacja_new_M->NonInlinedSFcns.Sfcn1.UPtrs0;
          sfcnUPtrs[0] = &Lewitacja_new_B.PWMMode;
          sfcnUPtrs[1] = &Lewitacja_new_B.PWMPrescaler;
          sfcnUPtrs[2] = &Lewitacja_new_B.PWMBrake;
          sfcnUPtrs[3] = &Lewitacja_new_B.Saturation;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 4);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Lewitacja_new_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &Lewitacja_new_B.PWM));
        }
      }

      /* path info */
      ssSetModelName(rts, "PWM");
      ssSetPath(rts, "Lewitacja_new/Magnetic Levitation System/PWM");
      ssSetRTModel(rts,Lewitacja_new_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Lewitacja_new_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Lewitacja_new_P.PWM_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Lewitacja_new_P.PWM_P2_Size);
      }

      /* registration */
      ML_PWM(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }
  }

  /* Initialize Sizes */
  Lewitacja_new_M->Sizes.numContStates = (7);/* Number of continuous states */
  Lewitacja_new_M->Sizes.numPeriodicContStates = (0);/* Number of periodic continuous states */
  Lewitacja_new_M->Sizes.numY = (0);   /* Number of model outputs */
  Lewitacja_new_M->Sizes.numU = (0);   /* Number of model inputs */
  Lewitacja_new_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  Lewitacja_new_M->Sizes.numSampTimes = (2);/* Number of sample times */
  Lewitacja_new_M->Sizes.numBlocks = (40);/* Number of blocks */
  Lewitacja_new_M->Sizes.numBlockIO = (20);/* Number of block outputs */
  Lewitacja_new_M->Sizes.numBlockPrms = (115);/* Sum of parameter "widths" */
  return Lewitacja_new_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
