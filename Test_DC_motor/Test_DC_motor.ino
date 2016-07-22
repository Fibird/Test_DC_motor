/*
 Name:		Test_DC_motor.ino
 Created:	7/22/2016 8:56:52 PM
 Author:	Chaoyang Liu
 Editor:	http://www.visualmicro.com
*/

#include "Test_DC_motorLib.h"
#include <Adafruit-Motor-Shield-library-master\AFMotor.h>

AF_DCMotor rightFront(1);
AF_DCMotor leftFront(2);
AF_DCMotor rightBack(3);
AF_DCMotor leftBack(4);


char incoming_chr;
char cmd;
// the setup function runs once when you press reset or power the board
void setup() {
	Serial.begin(57600);
}

// the loop function runs over and over again until power down or reset
void loop() {
	while (Serial.available() > 0) {
		incoming_chr = Serial.read();
	}
}
