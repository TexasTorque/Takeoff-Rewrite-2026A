// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/CommandPtr.h>
#include <frc2/command/SubsystemBase.h>

class Shooter : public frc2::SubsystemBase {
 public:
 double shooterRPM = 0.0;

  Shooter();

  /**
   * Example command factory method.
   */
  frc2::CommandPtr ExampleMethodCommand();

  /**
   * An example method querying a boolean state of the subsystem (for example, a
   * digital sensor).
   *
   * @return value of some boolean subsystem state, such as a digital sensor.
   */
  bool Launching();

  void ShooterState(double rpm, double intakeVolts, double agitatorVolts);


  frc2::CommandPtr ShooterCommand(double rpm, double intakeVolts, double agitatorVolts);
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
  int testRPM = 300;
  double rpm = 0.0;
  double intakeVolts = 0.0;
  double agitatorVolts = 0.0;
  static volatile Shooter instance;
  const double voltage;
};
