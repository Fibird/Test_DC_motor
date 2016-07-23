/*
Name:		motor_driver.h
Created:	7/22/2016 8:56:52 PM
Author:	Chaoyang Liu
*/

#include <AFMotor.h>

#define FLEFT           0
#define FRIGHT          1
#define BLEFT			      2
#define BRIGHT			    3

void setMotorSpeed(int i, int spd);
void stopMotor(int i);
void setMotorSpeeds(int fleftSpeed, int frightSpeed, int bleftSpeed, int brightSpeed);
void stopMotors();
