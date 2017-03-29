  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 4;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (Lewitacja_new_P)
    ;%
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Lewitacja_new_P.sensor
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Lewitacja_new_P.model
	  section.data(1).logicalSrcIdx = 1;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 35;
      section.data(35)  = dumData; %prealloc
      
	  ;% Lewitacja_new_P.MagneticLevitationSystem_T0
	  section.data(1).logicalSrcIdx = 2;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Lewitacja_new_P.Control_Value
	  section.data(2).logicalSrcIdx = 3;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Lewitacja_new_P.PositionFilter_A
	  section.data(3).logicalSrcIdx = 4;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Lewitacja_new_P.PositionFilter_C
	  section.data(4).logicalSrcIdx = 5;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Lewitacja_new_P.AnalogInputs_P1_Size
	  section.data(5).logicalSrcIdx = 6;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Lewitacja_new_P.AnalogInputs_P1
	  section.data(6).logicalSrcIdx = 7;
	  section.data(6).dtTransOffset = 6;
	
	  ;% Lewitacja_new_P.AnalogInputs_P2_Size
	  section.data(7).logicalSrcIdx = 8;
	  section.data(7).dtTransOffset = 7;
	
	  ;% Lewitacja_new_P.AnalogInputs_P2
	  section.data(8).logicalSrcIdx = 9;
	  section.data(8).dtTransOffset = 9;
	
	  ;% Lewitacja_new_P.AnalogInputs_P3_Size
	  section.data(9).logicalSrcIdx = 10;
	  section.data(9).dtTransOffset = 11;
	
	  ;% Lewitacja_new_P.AnalogInputs_P3
	  section.data(10).logicalSrcIdx = 11;
	  section.data(10).dtTransOffset = 13;
	
	  ;% Lewitacja_new_P.AnalogInputs_P4_Size
	  section.data(11).logicalSrcIdx = 12;
	  section.data(11).dtTransOffset = 15;
	
	  ;% Lewitacja_new_P.AnalogInputs_P4
	  section.data(12).logicalSrcIdx = 13;
	  section.data(12).dtTransOffset = 17;
	
	  ;% Lewitacja_new_P.PositionscalingVtom_XData
	  section.data(13).logicalSrcIdx = 14;
	  section.data(13).dtTransOffset = 18;
	
	  ;% Lewitacja_new_P.PositionscalingVtom_YData
	  section.data(14).logicalSrcIdx = 15;
	  section.data(14).dtTransOffset = 52;
	
	  ;% Lewitacja_new_P.VelocityFilter_A
	  section.data(15).logicalSrcIdx = 16;
	  section.data(15).dtTransOffset = 86;
	
	  ;% Lewitacja_new_P.VelocityFilter_C
	  section.data(16).logicalSrcIdx = 17;
	  section.data(16).dtTransOffset = 87;
	
	  ;% Lewitacja_new_P.Memory_X0
	  section.data(17).logicalSrcIdx = 18;
	  section.data(17).dtTransOffset = 88;
	
	  ;% Lewitacja_new_P.CurrentFilter_A
	  section.data(18).logicalSrcIdx = 19;
	  section.data(18).dtTransOffset = 89;
	
	  ;% Lewitacja_new_P.CurrentFilter_C
	  section.data(19).logicalSrcIdx = 20;
	  section.data(19).dtTransOffset = 90;
	
	  ;% Lewitacja_new_P.CurrentFilter1_A
	  section.data(20).logicalSrcIdx = 21;
	  section.data(20).dtTransOffset = 91;
	
	  ;% Lewitacja_new_P.CurrentFilter1_C
	  section.data(21).logicalSrcIdx = 22;
	  section.data(21).dtTransOffset = 92;
	
	  ;% Lewitacja_new_P.Saturation_UpperSat
	  section.data(22).logicalSrcIdx = 23;
	  section.data(22).dtTransOffset = 93;
	
	  ;% Lewitacja_new_P.Saturation_LowerSat
	  section.data(23).logicalSrcIdx = 24;
	  section.data(23).dtTransOffset = 94;
	
	  ;% Lewitacja_new_P.Integrator2_IC
	  section.data(24).logicalSrcIdx = 25;
	  section.data(24).dtTransOffset = 95;
	
	  ;% Lewitacja_new_P.Constant_Value
	  section.data(25).logicalSrcIdx = 26;
	  section.data(25).dtTransOffset = 96;
	
	  ;% Lewitacja_new_P.Gain_Gain
	  section.data(26).logicalSrcIdx = 27;
	  section.data(26).dtTransOffset = 97;
	
	  ;% Lewitacja_new_P.Integrator_IC
	  section.data(27).logicalSrcIdx = 28;
	  section.data(27).dtTransOffset = 98;
	
	  ;% Lewitacja_new_P.Integrator1_IC
	  section.data(28).logicalSrcIdx = 29;
	  section.data(28).dtTransOffset = 99;
	
	  ;% Lewitacja_new_P.PWM_P1_Size
	  section.data(29).logicalSrcIdx = 30;
	  section.data(29).dtTransOffset = 100;
	
	  ;% Lewitacja_new_P.PWM_P1
	  section.data(30).logicalSrcIdx = 31;
	  section.data(30).dtTransOffset = 102;
	
	  ;% Lewitacja_new_P.PWM_P2_Size
	  section.data(31).logicalSrcIdx = 32;
	  section.data(31).dtTransOffset = 103;
	
	  ;% Lewitacja_new_P.PWM_P2
	  section.data(32).logicalSrcIdx = 33;
	  section.data(32).dtTransOffset = 105;
	
	  ;% Lewitacja_new_P.PWMBrake_Value
	  section.data(33).logicalSrcIdx = 34;
	  section.data(33).dtTransOffset = 106;
	
	  ;% Lewitacja_new_P.PWMMode_Value
	  section.data(34).logicalSrcIdx = 35;
	  section.data(34).dtTransOffset = 107;
	
	  ;% Lewitacja_new_P.PWMPrescaler_Value
	  section.data(35).logicalSrcIdx = 36;
	  section.data(35).dtTransOffset = 108;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% Lewitacja_new_P.ManualSwitch_CurrentSetting
	  section.data(1).logicalSrcIdx = 37;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Lewitacja_new_P.ManualSwitch1_CurrentSetting
	  section.data(2).logicalSrcIdx = 38;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Lewitacja_new_P.ManualSwitch2_CurrentSetting
	  section.data(3).logicalSrcIdx = 39;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Lewitacja_new_P.ManualSwitch3_CurrentSetting
	  section.data(4).logicalSrcIdx = 40;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (Lewitacja_new_B)
    ;%
      section.nData     = 20;
      section.data(20)  = dumData; %prealloc
      
	  ;% Lewitacja_new_B.Control
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Lewitacja_new_B.AnalogInputs
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Lewitacja_new_B.PositionscalingVtom
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 3;
	
	  ;% Lewitacja_new_B.ManualSwitch
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 4;
	
	  ;% Lewitacja_new_B.Memory
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 5;
	
	  ;% Lewitacja_new_B.T0
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 6;
	
	  ;% Lewitacja_new_B.ManualSwitch1
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 7;
	
	  ;% Lewitacja_new_B.Fcn
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 8;
	
	  ;% Lewitacja_new_B.ManualSwitch2
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 9;
	
	  ;% Lewitacja_new_B.Saturation
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 10;
	
	  ;% Lewitacja_new_B.ManualSwitch3
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 11;
	
	  ;% Lewitacja_new_B.Saturation_l
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 12;
	
	  ;% Lewitacja_new_B.Gain
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 13;
	
	  ;% Lewitacja_new_B.Gain1
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 14;
	
	  ;% Lewitacja_new_B.Integrator1
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 15;
	
	  ;% Lewitacja_new_B.Sum2
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 16;
	
	  ;% Lewitacja_new_B.PWM
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 17;
	
	  ;% Lewitacja_new_B.PWMBrake
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 18;
	
	  ;% Lewitacja_new_B.PWMMode
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 19;
	
	  ;% Lewitacja_new_B.PWMPrescaler
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 20;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 2;
    sectIdxOffset = 1;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (Lewitacja_new_DW)
    ;%
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Lewitacja_new_DW.Memory_PreviousInput
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% Lewitacja_new_DW.MagLevsystemControlandStates_PW.LoggedData
	  section.data(1).logicalSrcIdx = 1;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Lewitacja_new_DW.Scope_PWORK.LoggedData
	  section.data(2).logicalSrcIdx = 2;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Lewitacja_new_DW.Scope1_PWORK.LoggedData
	  section.data(3).logicalSrcIdx = 3;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 1193695991;
  targMap.checksum1 = 512664707;
  targMap.checksum2 = 3481952353;
  targMap.checksum3 = 2175739642;

