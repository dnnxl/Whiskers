/*
   Project Whiskers
   Arm robot
   author @Danny Xie Li
*/

#include <Servo.h>

Servo servoOne;
Servo servoTwo;
Servo servoThree;
Servo servoFour;
Servo servoFive;

int servoOnePin;
int servoTwoPin;
int servoThreePin;
int servoFourPin;
int servoFivePin;

int angulo;

void setup()
{
  angulo = 0;

  servoOnePin = 5;
  servoTwoPin = 6;
  servoThreePin = 7;
  servoFourPin = 8;
  servoFivePin = 9;

  servoOne.attach(servoOnePin);
  servoTwo.attach(servoTwoPin);
  servoThree.attach(servoThreePin);
  servoFour.attach(servoFourPin);
  servoFive.attach(servoFivePin);
}

void loop()
{
  servoOne.write(angulo);
  delay(250);
  servoTwo.write(angulo);
  delay(250);
  servoThree.write(angulo);
  delay(250);
  servoFour.write(angulo);
  delay(250);
  servoFive.write(angulo);
  delay(250);

}
