#include <Servo.h>

Servo servo9;
Servo servo10;
Servo servo11;
Servo servo12;
//Servo servo13;
const int buttonPin = 7;
int buttonState = 0;         // variable for reading the pushbutton status

void setup()
{
  servo9.attach(9);
  servo10.attach(10);
  servo11.attach(11);
  servo12.attach(12);
  //servo13.attach(13);
  pinMode(buttonPin, INPUT);
}

void loop()
{
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    servo9.write(110);
    delay(1000);
    servo10.write(80);
    delay(1000);

    servo11.write(45);
    delay(1000);

    servo12.write(80);
    delay(1000);

    servo11.write(90);
    delay(1000);
    servo9.write(0);
    delay(1000);

    servo11.write(45);
    delay(1000);

    servo12.write(45);
  } else{
  }
}
