// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Launcher.h"

Launcher::Launcher() {
  // Implementation of subsystem constructor goes here.
}

frc2::CommandPtr Launcher::ExampleMethodCommand() {
  // Inline construction of command goes here.
  // Subsystem::RunOnce implicitly requires `this` subsystem.
  return RunOnce([/* this */] { /* one-time action goes here */ });
}

bool Launcher::ExampleCondition() {
  return rpm >= testRPM;
}

void Launcher::ShooterState(double rpm, double intakeVolts,
                                    double agitatorVolts) {
  this->rpm = rpm;
  this->intakeVolts = intakeVolts;
  this->agitatorVolts = agitatorVolts;
}

void Launcher::Periodic() {
  // Implementation of subsystem periodic method goes here.
}

void Launcher::SimulationPeriodic() {
  // Implementation of subsystem simulation periodic method goes here.
}
