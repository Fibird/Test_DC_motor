/*
Name:		motor_driver.h
Created:	7/22/2016 8:56:52 PM
Author:	Chaoyang Liu
*/

#include <AFMotor.h>

#define FLEFT           1
#define FRIGHT          0
#define BLEFT			      3
#define BRIGHT			    2

void setMotorSpeed(int i, int spd);
void stopMotor(int i);
void setMotorSpeeds(int fleftSpeed, int frightSpeed, int bleftSpeed, int brightSpeed);
void stopMotors();
