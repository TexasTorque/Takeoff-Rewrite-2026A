// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Shooter.h"
#include "frc/smartdashboard/SmartDashboard.h"
#include "frc2/command/CommandPtr.h"
#include "frc2/command/Commands.h"
#include "rev/ConfigureTypes.h"
#include "rev/config/SparkMaxConfig.h"
#include "units/voltage.h"

Shooter::Shooter() { configureShooterMotors(); }

void Shooter::configureShooterMotors() {
  rev::spark::SparkMaxConfig config{};

  config.SmartCurrentLimit(40);

  m_upShooterMotor.Configure(config, rev::ResetMode::kResetSafeParameters,
                          rev::PersistMode::kPersistParameters);
  m_downShooterMotor.Configure(config, rev::ResetMode::kResetSafeParameters,
                          rev::PersistMode::kPersistParameters);
}

  void Shooter::setShooterVoltage(units::volt_t volts) {
    m_upShooterMotor.SetVoltage(volts);
    m_downShooterMotor.SetVoltage(-volts);
  };

  frc2::CommandPtr Shooter::RunShootingCommand() {
  return frc2::cmd::StartEnd([this] { setShooterVoltage(4_V); },
                             [this] { setShooterVoltage(0_V); }, {this});
}

void Shooter::Periodic() {
  // Implementation of subsystem periodic method goes here.
}

void Shooter::SimulationPeriodic() {
  // Implementation of subsystem simulation periodic method goes here.
}
