// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.

//#define TESTSWERVE

#include "RobotMap.h"

AnalogChannelVolt* RobotMap::driveTrainFrontRightPos = NULL;
SpeedController* RobotMap::driveTrainFrontRightSteer = NULL;
PIDController* RobotMap::driveTrainFrontRight = NULL;
AnalogChannelVolt* RobotMap::driveTrainFrontLeftPos = NULL;
SpeedController* RobotMap::driveTrainFrontLeftSteer = NULL;
PIDController* RobotMap::driveTrainFrontLeft = NULL;
AnalogChannelVolt* RobotMap::driveTrainRearRightPos = NULL;
SpeedController* RobotMap::driveTrainRearRightSteer = NULL;
PIDController* RobotMap::driveTrainRearRight = NULL;
AnalogChannelVolt* RobotMap::driveTrainRearLeftPos = NULL;
SpeedController* RobotMap::driveTrainRearLeftSteer = NULL;
PIDController* RobotMap::driveTrainRearLeft = NULL;
SpeedController* RobotMap::driveTrainFrontLeftDrive = NULL;
SpeedController* RobotMap::driveTrainFrontRightDrive = NULL;
SpeedController* RobotMap::driveTrainRearLeftDrive = NULL;
SpeedController* RobotMap::driveTrainRearRightDrive = NULL;

SpeedController* RobotMap::shooter = NULL;
AnalogChannelVolt* RobotMap::shooterpot = NULL;

Relay* RobotMap::leftroller = NULL;
Compressor* RobotMap::compressor = NULL;
Relay* RobotMap::rightroller = NULL;

Solenoid* RobotMap::rightwingin = NULL;
Solenoid* RobotMap::rightwingout = NULL;
Solenoid* RobotMap::leftwingin = NULL;
Solenoid* RobotMap::leftwingout = NULL;
Solenoid* RobotMap::reardeployin = NULL;
Solenoid* RobotMap::reardeploy = NULL;

//DigitalModule* RobotMap::i2cmodule = NULL;
I2C* RobotMap::m_i2c = NULL;

IMUAdvanced* RobotMap::imu = NULL;
SerialPort* RobotMap::serial_port = NULL;

#define CONTINUOUS true
#define P 1.0
#define I 0.0
#define D 0.2
#define F 0.0
#define POTMIN 0.0
#define POTMAX 5.0
#define STEERPOW  1.0
#define TOLERANCE 0.2
#define PERIOD .02



#ifdef TESTSWERVE
#define RATIO 2

#define FRD 2
#define FRP 1
#define FRS 5

#define FLD 1
#define FLP 4
#define FLS 8

#define RRD 3
#define RRP 3
#define RRS 7

#define RLD 4
#define RLP 2
#define RLS 6
#else // comp bot
#define RATIO 1

#define FRD 3
#define FRP 0
#define FRS 5

#define FLD 2
#define FLP 2
#define FLS 6

#define RRD 0
#define RRP 1
#define RRS 4

#define RLD 1
#define RLP 3
#define RLS 7
#endif



    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
void RobotMap::init() {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	//LiveWindow* lw = LiveWindow::GetInstance();

	compressor = new Compressor(2);
	leftwingin = new Solenoid(1);
	leftwingout = new Solenoid(2);
	rightwingin = new Solenoid(3);
	rightwingout = new Solenoid(4);
	reardeploy = new Solenoid(5);
	reardeployin = new Solenoid(6);

	driveTrainFrontRightDrive = new Talon(FRD);
	driveTrainFrontRightPos = new AnalogChannelVolt(FRP, true, RATIO);
	driveTrainFrontRightSteer = new Talon(FRS);
	driveTrainFrontRight = new PIDController(P, I, D, F,  driveTrainFrontRightPos,
                                           driveTrainFrontRightSteer, PERIOD);
	driveTrainFrontRight->SetContinuous(CONTINUOUS); 
  	driveTrainFrontRight->SetAbsoluteTolerance(TOLERANCE); 
        driveTrainFrontRight->SetInputRange(POTMIN, POTMAX);
        driveTrainFrontRight->SetOutputRange(-STEERPOW, STEERPOW);

	driveTrainFrontLeftDrive = new Talon(FLD);
	driveTrainFrontLeftPos = new AnalogChannelVolt(FLP, true, RATIO);
	driveTrainFrontLeftSteer = new Talon(FLS);
	driveTrainFrontLeft = new PIDController(P, I, D, F,  driveTrainFrontLeftPos,
                                          driveTrainFrontLeftSteer, PERIOD);
	driveTrainFrontLeft->SetContinuous(CONTINUOUS); 
  	driveTrainFrontLeft->SetAbsoluteTolerance(TOLERANCE); 
        driveTrainFrontLeft->SetInputRange(POTMIN, POTMAX);
        driveTrainFrontLeft->SetOutputRange(-STEERPOW, STEERPOW);

	driveTrainRearRightDrive = new Talon(RRD);
	driveTrainRearRightPos = new AnalogChannelVolt(RRP, true, RATIO);
	driveTrainRearRightSteer = new Talon(RRS);
	driveTrainRearRight = new PIDController(P, I, D, F,  driveTrainRearRightPos,
                                          driveTrainRearRightSteer, PERIOD);
	driveTrainRearRight->SetContinuous(CONTINUOUS); 
  	driveTrainRearRight->SetAbsoluteTolerance(TOLERANCE); 
        driveTrainRearRight->SetInputRange(POTMIN, POTMAX);
        driveTrainRearRight->SetOutputRange(-STEERPOW, STEERPOW);

	driveTrainRearLeftDrive = new Talon(RLD);
	driveTrainRearLeftPos = new AnalogChannelVolt(RLP, true, RATIO);
	driveTrainRearLeftSteer = new Talon(RLS);
	driveTrainRearLeft = new PIDController(P, I, D, F,  driveTrainRearLeftPos,
                                         driveTrainRearLeftSteer, PERIOD);
	driveTrainRearLeft->SetContinuous(CONTINUOUS); 
  	driveTrainRearLeft->SetAbsoluteTolerance(TOLERANCE); 
        driveTrainRearLeft->SetInputRange(POTMIN, POTMAX);
        driveTrainRearLeft->SetOutputRange(-STEERPOW, STEERPOW);

	shooter = new Talon(9);
	shooter->Set(0);
	shooterpot = new AnalogChannelVolt( 5, true, 1 );

	leftroller = new Relay(3);
	rightroller = new Relay(1);

    serial_port = new SerialPort(57600);
    imu = new IMUAdvanced(serial_port, 50);

	//m_i2c = DigitalModule::GetInstance(1)->GetI2C(0x04 << 1);
    m_i2c = new I2C((I2C::Port) 1, 0x04 << 1);
	compressor->Start();
}
