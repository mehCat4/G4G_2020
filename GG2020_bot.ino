#include <Wire.h>
#include <Adafruit_MotorShield.h>
#include "utility/Adafruit_MS_PWMServoDriver.h"

/* https://learn.adafruit.com/adafruit-motor-shield-v2-for-arduino/using-dc-motors */

Adafruit_MotorShield AFMS = Adafruit_MotorShield(); 

// This is the right side of the bot defined at the M3 port
Adafruit_DCMotor *myMotorRight = AFMS.getMotor(3);
// This is the left side of the bot defined at the M4 port
Adafruit_DCMotor *myMotorLeft = AFMS.getMotor(4);

void setup() {
  // put your setup code here, to run once:
  AFMS.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  myMotorRight->setSpeed(150);
  myMotorRight->run(FORWARD);
  
   myMotorLeft->setSpeed(150);
  myMotorLeft->run(FORWARD);

  // Do a right turn
   myMotorRight->setSpeed(0);
  myMotorRight->run(RELEASE);

  myMotorLeft->setSpeed(150);
  myMotorLeft->run(FORWARD);

  // Go straight again
   myMotorRight->setSpeed(150);
  myMotorRight->run(FORWARD);
  
   myMotorLeft->setSpeed(150);
  myMotorLeft->run(FORWARD);
  

  // Do a left turn
   myMotorLeft->setSpeed(0);
  myMotorLeft->run(RELEASE);
   myMotorRight->setSpeed(150);
  myMotorRight->run(FORWARD);

}
