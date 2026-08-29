// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Intake.h"
#include "frc/smartdashboard/SmartDashboard.h"
#include "frc2/command/CommandPtr.h"
#include "frc2/command/Commands.h"
#include "rev/ConfigureTypes.h"
#include "rev/config/SparkMaxConfig.h"
#include "units/voltage.h"

Intake::Intake() { configureIntakeRollerMotor(); }

void Intake::configureIntakeRollerMotor() {
  rev::spark::SparkMaxConfig config{};

  config.SmartCurrentLimit(25);

  m_intakeRollerMotor.Configure(config, rev::ResetMode::kResetSafeParameters,
                          rev::PersistMode::kPersistParameters);
}

  void Intake::setIntakeRollerVoltage(units::volt_t volts) {
    m_intakeRollerMotor.SetVoltage(volts);
  };

  frc2::CommandPtr Intake::RunIntakingCommand() {
  return frc2::cmd::StartEnd([this] { setIntakeRollerVoltage(3_V); },
                             [this] { setIntakeRollerVoltage(0_V); }, {this});
}

void Intake::Periodic() {
  // Implementation of subsystem periodic method goes here.
}

void Intake::SimulationPeriodic() {
  // Implementation of subsystem simulation periodic method goes here.
}
