/*
Name:		motor_driver.ino
Created:	7/22/2016 8:56:52 PM
Author:	Chaoyang Liu
*/

#include "motor_driver.h"

AF_DCMotor rightFront(1);
AF_DCMotor leftFront(2);
AF_DCMotor rightBack(3);
AF_DCMotor leftBack(4);

void setMotorSpeed(int i, int spd) {
	switch (i) {
		case FLEFT:
			if (spd > 0) {
				leftFront.setSpeed(spd);
				leftFront.run(FORWARD);
			}
			else {
				leftFront.setSpeed(-spd);
				leftFront.run(BACKWARD);
			}
		break;
		case FRIGHT:
			if (spd > 0) {
				rightFront.setSpeed(spd);
				rightFront.run(FORWARD);
			}
			else {
				rightFront.setSpeed(-spd);
				rightFront.run(BACKWARD);
			}
			break;
		case BLEFT:
			if (spd > 0) {
				leftBack.setSpeed(spd);
				leftBack.run(FORWARD);
			}
			else {
				leftBack.setSpeed(-spd);
				leftBack.run(BACKWARD);
			}
			break;
		case BRIGHT:
			if (spd > 0) {
				rightBack.setSpeed(spd);
				rightBack.run(FORWARD);
			}
			else {
				rightBack.setSpeed(-spd);
				rightBack.run(BACKWARD);
			}
			break;
		default:
			Serial.println(F("Invalid Arguement"));
			break;
	}
}

void stopMotor(int i) {
	switch (i) {
		case FLEFT:
			leftFront.run(RELEASE);
			break;
		case FRIGHT:
			rightFront.run(RELEASE);
			break;
		case BLEFT:
			leftBack.run(RELEASE);
			break;
		case BRIGHT:
			rightBack.run(RELEASE);
			break;
		default:
			Serial.println(F("Invalid Arguement"));
			break;
	}
}

void setMotorSpeeds(int fleftSpeed, int frightSpeed, int bleftSpeed, int brightSpeed) {
	setMotorSpeed(FLEFT, fleftSpeed);
	setMotorSpeed(FRIGHT, frightSpeed);
	setMotorSpeed(BLEFT, bleftSpeed);
	setMotorSpeed(BRIGHT, brightSpeed);
}

void stopMotors() {
	leftFront.run(RELEASE);
	leftBack.run(RELEASE);
	rightFront.run(RELEASE);
	leftBack.run(RELEASE);
}
