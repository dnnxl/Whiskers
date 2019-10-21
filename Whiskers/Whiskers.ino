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

int anguloOne;
int anguloTwo;
int anguloThree;
int anguloFour;
int anguloFive;

void setup()
{
  anguloOne = 0;
  anguloTwo = 0;
  anguloThree = 0;
  anguloFour = 0;
  anguloFive = 0;

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
  servoOne.write(anguloOne);
  delay(250);
  servoTwo.write(anguloTwo);
  delay(250);
  servoThree.write(anguloThree);
  delay(250);
  servoFour.write(anguloFour);
  delay(250);
  servoFive.write(anguloFive);
  delay(250);

}
