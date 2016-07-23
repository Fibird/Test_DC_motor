/*
Name:		motor_driver.ino
Created:	7/22/2016 8:56:52 PM
Author:	Chaoyang Liu
*/
#include "command.h"

AF_DCMotor rightFront(1);
AF_DCMotor leftFront(2);
AF_DCMotor rightBack(3);
AF_DCMotor leftBack(4);

void setMotorSpeed(int i, int spd)
{
	if (i == FLEFT) {
		if (spd > 0) {
			leftFront.setSpeed(spd);
			leftFront.run(FORWARD);
		}
		else {
			leftFront.setSpeed(-spd);
			leftFront.run(BACKWARD);
		}
	}
	else if (i == FRIGHT) {
		if (spd > 0) {
			rightFront.setSpeed(spd);
			rightFront.run(FORWARD);
		}
		else {
			rightFront.setSpeed(-spd);
			rightFront.run(BACKWARD);
		}
	}
	else if (i == BLEFT) {
		if (spd > 0) {
			leftBack.setSpeed(spd);
			leftBack.run(FORWARD);
		}
		else {
			leftBack.setSpeed(-spd);
			leftBack.run(BACKWARD);
		}
	}
	else {
		if (spd > 0) {
			rightBack.setSpeed(spd);
			rightBack.run(FORWARD);
		}
		else {
			rightBack.setSpeed(-spd);
			rightBack.run(BACKWARD);
		}
	}
}

void setMotorSpeeds(int fleftSpeed, int frightSpeed, int bleftSpeed, int brightSpeed)
{
	setMotorSpeed(FLEFT, fleftSpeed);
	setMotorSpeed(FRIGHT, frightSpeed);
	setMotorSpeed(BLEFT, bleftSpeed);
	setMotorSpeed(BRIGHT, brightSpeed);
}
