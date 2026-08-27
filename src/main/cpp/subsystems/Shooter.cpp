// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Shooter.h"

Shooter::Shooter() {
  // Implementation of subsystem constructor goes here.
}

  void setShooterVoltage(units::volt_t volts) {
    m_rollerMotor.SetVoltage(volts);
  };

  frc2::CommandPtr RunShootingCommand() {
  return frc2::cmd::StartEnd([this] { SetShooterVoltage(7_V); },
                             [this] { SetShooterVoltage(0_V); }, {this});
}



void Shooter::Periodic() {
  // Implementation of subsystem periodic method goes here.
}

void Shooter::SimulationPeriodic() {
  // Implementation of subsystem simulation periodic method goes here.
}
