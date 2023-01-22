// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include <stdio.h>
#include <iostream>

#include "commands/CmdFindAndGoToTarget.h"
#include "commands/CmdFindAndGoToCone.h"
#include "subsystems/SubLimeLight.h"
#include "Constants.h"

CmdFindAndGoToCone::CmdFindAndGoToCone(SubDriveTrain* driveTrain, SubLimeLight* limeLight,  frc::Joystick *driverController) 
  : CmdFindAndGoToTarget(driveTrain, limeLight, driverController) {
}

// Called when the command is initially scheduled.
void CmdFindAndGoToCone::Initialize() {
  m_limeLight->SelectPipeline(LL_PIPELINE_YELLOW_CONE_NUMBER);  
}