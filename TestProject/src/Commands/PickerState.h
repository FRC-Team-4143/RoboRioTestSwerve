// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.


#ifndef PICKERSTATE_H
#define PICKERSTATE_H


#include "Commands/Subsystem.h"
#include "../Robot.h"

#define WINGIN -1
#define WINGOUT 1

/**
 *
 *
 * @author ExampleAuthor
 */
class PickerState: public Command {
public:
	PickerState(int rightwing, int rightroller, int leftwing, int leftroller, float timeout);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();

private:
	int Rightwing, Rightroller, Leftwing, Leftroller;
	float Timeout;
};

#endif
