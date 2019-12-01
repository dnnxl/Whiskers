/*
   Project Whiskers
   Arm robot
   author @Danny Xie Li
*/

/*
   Angles 
   Servo I   180
   Servo II  130
   Servo III 120
   Servo IV  
   Servo V    50

*/
#include <Servo.h>

Servo servo1;

int angulo = 0;
int Eje_X = A1;
int Eje_Y = A2;
int boton = 4;
const int buttonPin = 2;
float value;
int buttonState = 0;    
int once;

void setup()
{
  servo1.attach(6) ;
  pinMode(boton, INPUT_PULLUP) ;  
  pinMode(buttonPin, INPUT);
  value = 0;
}

void loop()
{
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    value = value;
    once = 1;
  }
  if (once == 1)
  {
    value = value;
  }
  else
  {
    value = analogRead(A1);
  }
  angulo  = map( value, 0, 1024, 0, 180);
  servo1.write(angulo);;
}
