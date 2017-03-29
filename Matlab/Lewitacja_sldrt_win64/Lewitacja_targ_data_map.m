  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 2;
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
    ;% Auto data (Lewitacja_P)
    ;%
      section.nData     = 32;
      section.data(32)  = dumData; %prealloc
      
	  ;% Lewitacja_P.MagneticLevitationSystem_T0
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Lewitacja_P.Control_Value
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Lewitacja_P.PositionFilter_A
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Lewitacja_P.PositionFilter_C
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Lewitacja_P.AnalogInputs_P1_Size
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Lewitacja_P.AnalogInputs_P1
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 6;
	
	  ;% Lewitacja_P.AnalogInputs_P2_Size
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 7;
	
	  ;% Lewitacja_P.AnalogInputs_P2
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 9;
	
	  ;% Lewitacja_P.AnalogInputs_P3_Size
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 11;
	
	  ;% Lewitacja_P.AnalogInputs_P3
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 13;
	
	  ;% Lewitacja_P.AnalogInputs_P4_Size
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 15;
	
	  ;% Lewitacja_P.AnalogInputs_P4
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 17;
	
	  ;% Lewitacja_P.PositionscalingVtom_XData
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 18;
	
	  ;% Lewitacja_P.PositionscalingVtom_YData
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 46;
	
	  ;% Lewitacja_P.VelocityFilter_A
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 74;
	
	  ;% Lewitacja_P.VelocityFilter_C
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 75;
	
	  ;% Lewitacja_P.Memory_X0
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 76;
	
	  ;% Lewitacja_P.CurrentFilter_A
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 77;
	
	  ;% Lewitacja_P.CurrentFilter_C
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 78;
	
	  ;% Lewitacja_P.CurrentFilter1_A
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 79;
	
	  ;% Lewitacja_P.CurrentFilter1_C
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 80;
	
	  ;% Lewitacja_P.Saturation_UpperSat
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 81;
	
	  ;% Lewitacja_P.Saturation_LowerSat
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 82;
	
	  ;% Lewitacja_P.PositionFilter1_A
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 83;
	
	  ;% Lewitacja_P.PositionFilter1_C
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 84;
	
	  ;% Lewitacja_P.PWM_P1_Size
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 85;
	
	  ;% Lewitacja_P.PWM_P1
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 87;
	
	  ;% Lewitacja_P.PWM_P2_Size
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 88;
	
	  ;% Lewitacja_P.PWM_P2
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 90;
	
	  ;% Lewitacja_P.PWMBrake_Value
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 91;
	
	  ;% Lewitacja_P.PWMMode_Value
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 92;
	
	  ;% Lewitacja_P.PWMPrescaler_Value
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 93;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% Lewitacja_P.ManualSwitch_CurrentSetting
	  section.data(1).logicalSrcIdx = 32;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Lewitacja_P.ManualSwitch1_CurrentSetting
	  section.data(2).logicalSrcIdx = 33;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Lewitacja_P.ManualSwitch2_CurrentSetting
	  section.data(3).logicalSrcIdx = 34;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Lewitacja_P.ManualSwitch3_CurrentSetting
	  section.data(4).logicalSrcIdx = 35;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
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
    ;% Auto data (Lewitacja_B)
    ;%
      section.nData     = 16;
      section.data(16)  = dumData; %prealloc
      
	  ;% Lewitacja_B.Control
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Lewitacja_B.AnalogInputs
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Lewitacja_B.PositionscalingVtom
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 3;
	
	  ;% Lewitacja_B.ManualSwitch
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 4;
	
	  ;% Lewitacja_B.Memory
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 5;
	
	  ;% Lewitacja_B.T0
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 6;
	
	  ;% Lewitacja_B.ManualSwitch1
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 7;
	
	  ;% Lewitacja_B.Fcn
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 8;
	
	  ;% Lewitacja_B.ManualSwitch2
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 9;
	
	  ;% Lewitacja_B.Saturation
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 10;
	
	  ;% Lewitacja_B.ManualSwitch3
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 11;
	
	  ;% Lewitacja_B.PositionFilter1
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 12;
	
	  ;% Lewitacja_B.PWM
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 13;
	
	  ;% Lewitacja_B.PWMBrake
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 14;
	
	  ;% Lewitacja_B.PWMMode
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 15;
	
	  ;% Lewitacja_B.PWMPrescaler
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 16;
	
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
    ;% Auto data (Lewitacja_DW)
    ;%
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Lewitacja_DW.Memory_PreviousInput
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Lewitacja_DW.MagLevsystemControlandStates_PW.LoggedData
	  section.data(1).logicalSrcIdx = 1;
	  section.data(1).dtTransOffset = 0;
	
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


  targMap.checksum0 = 1360664273;
  targMap.checksum1 = 2268696333;
  targMap.checksum2 = 227861092;
  targMap.checksum3 = 2574047189;
