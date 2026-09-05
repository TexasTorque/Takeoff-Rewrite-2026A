// // Copyright (c) FIRST and other WPILib contributors.
// // Open Source Software; you can modify and/or share it under the terms of
// // the WPILib BSD license file in the root directory of this project.

// #include "subsystems/Drivebase.h"

// Drivebase::Drivebase():
//     frontLeft("FrontLeft", kFrontLeftPorts.driveMotorPort, kFrontLeftPorts.steerMotorPort, kFrontLeftPorts.encoderPort),
//     frontRight("FrontRight", kFrontRightPorts.driveMotorPort, kFrontRightPorts.steerMotorPort, kFrontRightPorts.encoderPort),
//     backLeft("BackLeft", kBackLeftPorts.driveMotorPort, kBackLeftPorts.steerMotorPort, kBackLeftPorts.encoderPort),
//     backRight("BackRight", kBackRightPorts.driveMotorPort, kBackRightPorts.steerMotorPort, kBackRightPorts.encoderPort),
//     poseEstimator(frc::Rotation2d{}, std::array<frc::SwerveModulePosition, 4>{}, frc::Pose2d{}, kKinematics){
//         realRotationController.SetTolerance(0.5);
//         realRotationController.EnableContinuousInput(0, 360);
//         simRotationController.SetTolerance(0.5);
//         simRotationController.EnableContinuousInput(0, 360);
//         ConfigureAutoBuilder();
//         ConfigureEstimator();
//         ConfigureTelemetry();

        
//         SetName("DrivebaseSubsystem");
//     }


// frc2::CommandPtr Drivebase::ExampleMethodCommand() {
//   // Inline construction of command goes here.
//   // Subsystem::RunOnce implicitly requires `this` subsystem.
//   return RunOnce([/* this */] { /* one-time action goes here */ });
// }

// bool Drivebase::ExampleCondition() {
//   // Query some boolean state, such as a digital sensor.
//   return false;
// }

// void Drivebase::Periodic() {
//   // Implementation of subsystem periodic method goes here.
// }

// void Drivebase::SimulationPeriodic() {
//   // Implementation of subsystem simulation periodic method goes here.
// }