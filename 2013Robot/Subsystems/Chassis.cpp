// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "Chassis.h"
#include "../Robotmap.h"
#include "../Commands/DriveWithJoystickCommand.h"
Chassis::Chassis() : Subsystem("Chassis") {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	leftDriveTalon = RobotMap::chassisLeftDriveTalon;
	rightDriveTalon = RobotMap::chassisRightDriveTalon;
	robotDrive21 = RobotMap::chassisRobotDrive21;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}
    
void Chassis::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
	SetDefaultCommand(new DriveWithJoystickCommand());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
void Chassis::Stop() {
	this->robotDrive21->ArcadeDrive(0.0, 0.0);
}
void Chassis::ArcadeDrive(Joystick *stick) {
	this->robotDrive21->ArcadeDrive(stick);
}
SpeedController *Chassis::GetLeftDriveTalon() {
	return this->leftDriveTalon;
}
SpeedController *Chassis::GetRightDriveTalon() {
	return this->rightDriveTalon;
}
RobotDrive *Chassis::GetRobotDrive() {
	return this->robotDrive21;
}
