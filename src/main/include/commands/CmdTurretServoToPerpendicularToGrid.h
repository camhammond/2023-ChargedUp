// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/CommandBase.h>
#include <frc2/command/CommandHelper.h>

#include <frc2/command/button/CommandXboxController.h>

#include "subsystems/SubTurret.h"
#include "subsystems/SubDriveTrain.h"
#include "Constants/ConsControllers.h"

/**
 * An example command.
 *
 * <p>Note that this extends CommandHelper, rather extending CommandBase
 * directly; this is crucially important, or else the decorator functions in
 * Command will *not* work!
 */
class CmdTurretServoToPerpendicularToGrid
    : public frc2::CommandHelper<frc2::CommandBase, CmdTurretServoToPerpendicularToGrid> {
 public:
  CmdTurretServoToPerpendicularToGrid(SubTurret* subTurret, SubDriveTrain* SubDriveTrain, frc2::CommandXboxController* auxController);

  void Initialize() override;

  void Execute() override;

  void End(bool interrupted) override;

  bool IsFinished() override;
 private:
  SubTurret* m_subTurret;
  SubDriveTrain* m_subDriveTrain;
  frc2::CommandXboxController* m_auxController;
  bool m_finished = false;
  bool m_goingClockwise;
  double m_robotYaw = 0.0;
  double m_newTurretAngle = 0.0;
};
