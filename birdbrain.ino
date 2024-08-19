// 
// Birds Are Not Real - Surveillance bird
// https://www.lampysecurity.com/
// Code generated by https://www.tinkercad.com/
//
#include <Servo.h>

Servo servo_9;

void setup()
{
  pinMode(8, OUTPUT);
  servo_9.attach(9, 500, 2500);

  delay(7000); // Wait for 7000 millisecond(s)
}

void loop()
{
  digitalWrite(8, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(8, LOW);

  servo_9.write(90);
  delay(5000); // Wait for 5000 millisecond(s)
  servo_9.write(15);
  delay(2000); // Wait for 2000 millisecond(s)
  servo_9.write(45);
  delay(4000); // Wait for 4000 millisecond(s)
  servo_9.write(0);
  delay(6000); // Wait for 6000 millisecond(s)
}