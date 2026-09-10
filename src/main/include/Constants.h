// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

/**
 * The Constants header provides a convenient place for teams to hold robot-wide
 * numerical or boolean constants.  This should not be used for any other
 * purpose.
 *
 * It is generally a good idea to place constants into subsystem- or
 * command-specific namespaces within this header, which can then be used where
 * they are needed.
 */

namespace OperatorConstants {

inline constexpr int kDriverControllerPort = 0;

}  // namespace OperatorConstants

namespace ShooterConstants {
    inline constexpr int kShooterUpPort = 16;
    inline constexpr int kShooterDownPort = 18;
    inline constexpr int kGatePort = 20;
}

namespace IntakeConstants {
    inline constexpr int kIntakeRollerPort = 24;
     inline constexpr int kIntakeUp = 30;
     inline constexpr int kIntakeDown = 0;
    // inline constexpr units::volt_t kIntakeVolts = 5_V;
}