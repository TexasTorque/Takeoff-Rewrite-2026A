// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "RobotContainer.h"

#include <frc2/command/Commands.h>

RobotContainer::RobotContainer() { ConfigureBindings(); }

void RobotContainer::ConfigureBindings() {
  // Configure your trigger bindings here

  // Schedule `ExampleCommand` when `exampleCondition` changes to `true`
  // frc2::Trigger([this] {
  //   return m_shooter.ExampleCondition();
  // }).OnTrue(ExampleCommand(&m_shooter).ToPtr());

  // Schedule `ExampleMethodCommand` when the Xbox controller's B button is
  // pressed, cancelling on release.
  m_driverController.B().ToggleOnTrue(m_shooter.StartShooterCommand());
  m_driverController.A().WhileTrue(m_shooter.RunShootingCommand());
  m_driverController.Y().WhileTrue(m_shooter.RunShooterIntakeCommand());
  // m_driverController.RightTrigger().ToggleOnTrue(m_shooter.StartIntakeCommand());

  m_driverController.LeftTrigger().WhileTrue(m_intake.RunIntakingCommand());
  m_driverController.X().WhileTrue(m_intake.RunIntakeCommand());

}

frc2::CommandPtr RobotContainer::GetAutonomousCommand() {
  return frc2::cmd::Print("No autonomous command configured");

}