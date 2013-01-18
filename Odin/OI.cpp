// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.


#include "OI.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/SetCommand.h"

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
	// Process operator interface input here.
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS

	driver = new Joystick(1);
	coDriver = new Joystick(2);
	
	cButton5 = new JoystickButton(coDriver, 5);
	cButton5->WhileHeld(new SetCommand(1.0));
	cButton6 = new JoystickButton(coDriver, 6);
	cButton6->WhileHeld(new SetCommand(-1.0));
			
	cButton4 = new JoystickButton(coDriver, 4);
	cButton4->WhileHeld(new Convey(-1.0));
	cButton3 = new JoystickButton(coDriver, 3);
	cButton3->WhileHeld(new Convey(1.0));
		
	cButton6 = new JoystickButton(coDriver, 6);
	cButton6->WhenPressed(new on());
	cButton5 = new JoystickButton(coDriver, 5);
	cButton5->WhenPressed(new off());
	cButton1 = new JoystickButton(coDriver, 1);
	cButton1->WhenPressed(new ONOFF());

        // SmartDashboard Buttons
	SmartDashboard::PutData("Raise BAD",new SetCommand(1.0));
	SmartDashboard::PutData("Lower BAD",new SetCommand(-1.0));
	SmartDashboard::PutData("ConveyIn", new Convey(1.0));
	SmartDashboard::PutData("ConveyOut", new Convey(-1.0));
	SmartDashboard::PutBoolean("frontLightSensor", Robot::cANJaguarConveyor->frontLightSensor->Get());
	SmartDashboard::PutBoolean("middleLightSensor", Robot::cANJaguarConveyor->middleLightSensor->Get());
	SmartDashboard::PutBoolean("backLightSensor", Robot::cANJaguarConveyor->backLightSensor->Get());
		//on/off buttons
	SmartDashboard::PutData("on", new on());
	SmartDashboard::PutData("off", new off());
	SmartDashboard::PutData("ONOFF", new ONOFF());

        // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

Joystick* OI::getDriver() {
	return driver;
}
Joystick* OI::getCoDriver()
{
	return coDriver;
}

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
