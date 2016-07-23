/*
Name:		motor_driver.h
Created:	7/22/2016 8:56:52 PM
Author:	Chaoyang Liu
*/

#include <AFMotor.h>

void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int fleftSpeed, int frightSpeed, int bleftSpeed, int brightSpeed);
