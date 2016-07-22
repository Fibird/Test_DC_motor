#include <Adafruit-Motor-Shield-library-master\AFMotor.h>

#define FLEFT           0
#define FRIGHT          1
#define BLEFT			2
#define BRIGHT			3

AF_DCMotor rightFront(1);
AF_DCMotor leftFront(2);
AF_DCMotor rightBack(3);
AF_DCMotor leftBack(4);

void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int fleftSpeed, int frightSpeed, int bleftSpeed, int brightSpeed);
