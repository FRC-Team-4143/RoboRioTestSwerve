// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#ifndef OI_H
#define OI_H
#include "WPILib.h"
class OI {
private:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	Joystick* driverJoystick;
	Joystick* pickerJoystick;
	JoystickButton* smartDashboardButton;
	JoystickButton* y;
	JoystickButton* x;
	JoystickButton* l;
	JoystickButton* r;
	JoystickButton* a;
	JoystickButton* b;
	JoystickButton* select;
	JoystickButton* start;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
public:
	OI();
 
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES
	Joystick* getDriverJoystick();
	Joystick* getPickerJoystick();
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES
	float GetJoystickX();
	float GetJoystickY();
	float GetJoystickZ();
	float GetJoystickA();
	float GetJoystickB();
};
#endif
