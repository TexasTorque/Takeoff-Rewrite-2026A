// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Shooter.h"

Shooter::Shooter() {
  // Implementation of subsystem constructor goes here.
}

frc2::CommandPtr Shooter::ExampleMethodCommand() {
  // Inline construction of command goes here.
  // Subsystem::RunOnce implicitly requires `this` subsystem.
  return RunOnce([/* this */] { /* one-time action goes here */ });
}

bool Shooter::ExampleCondition() {
  return rpm >= testRPM;
}

void Shooter::ShooterState(double rpm, double intakeVolts,
                                    double agitatorVolts) {
  this->rpm = rpm;
  this->intakeVolts = intakeVolts;
  this->agitatorVolts = agitatorVolts;
}

void Shooter::Periodic() {
  // Implementation of subsystem periodic method goes here.
}

void Shooter::SimulationPeriodic() {
  // Implementation of subsystem simulation periodic method goes here.
}
