#include <Servo.h>
Servo miservo;

int angulo=90;

void setup()
{
  miservo.attach(10);
}

void loop()
{
 miservo.write(90);
 delay(100);
  
}

