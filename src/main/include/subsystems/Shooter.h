// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include "frc2/command/CommandPtr.h"
#include "frc2/command/SubsystemBase.h"
#include "Constants.h"
#include "units/voltage.h"
#include "rev/SparkLowLevel.h"
#include "rev/SparkMax.h"

class Shooter : public frc2::SubsystemBase {
 public:
  Shooter();

  /**
   * Example command factory method.
   */
  frc2::CommandPtr StartShooterCommand();

  frc2::CommandPtr RunShootingCommand();

  frc2::CommandPtr RunShooterIntakeCommand();

  /**
   * An example method querying a boolean state of the subsystem (for example, a
   * digital sensor).
   *
   * @return value of some boolean subsystem state, such as a digital sensor.
   */


  void setShooterVoltage(units::volt_t volts);

  void setGateVoltage(units::volt_t volts);

  void configureShooterMotors();

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;

  /**
   * Will be called periodically whenever the CommandScheduler runs during
   * simulation.
   */
  void SimulationPeriodic() override;

 private:
  rev::spark::SparkMax m_upShooterMotor{
    ShooterConstants::kShooterUpPort,
    rev::spark::SparkLowLevel::MotorType::kBrushless};
  
  rev::spark::SparkMax m_downShooterMotor{
    ShooterConstants::kShooterDownPort,
    rev::spark::SparkLowLevel::MotorType::kBrushless};

  rev::spark::SparkMax m_gateMotor{
    ShooterConstants::kGatePort,
    rev::spark::SparkLowLevel::MotorType::kBrushless};
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
};
