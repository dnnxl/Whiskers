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

Servo servo9;
Servo servo10;
Servo servo11;
Servo servo12;
Servo servo13;

int angulo = 0;

void setup()
{
  servo9.attach(9);
  servo10.attach(10);
  servo11.attach(11);
  servo12.attach(12);
  servo13.attach(13); 
}

void loop()
{
   servo9.write(110);
   servo10.write(80);
   servo11.write(45);
   servo12.write(80);
   servo11.write(90);
     
   servo9.write(0);
   servo11.write(45);
   servo12.write(45);
}
