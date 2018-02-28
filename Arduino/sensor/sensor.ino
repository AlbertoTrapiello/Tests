#include <Servo.h>
int sensor1=2;
int sensor2=3;
int motor=HIGH;
Servo myservo;
void setup() {
  // put your setup code here, to run once:
pinMode(sensor1,INPUT);
pinMode(sensor2,INPUT);
pinMode (12,OUTPUT);
pinMode (13,OUTPUT);
myservo.attach(10);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite (13,motor);
if ((digitalRead (sensor1)==LOW)&&(digitalRead (sensor2)==HIGH))
  do
   { 
    myservo.write(90-45);
   }while ((digitalRead (sensor1)==LOW)&&(digitalRead (sensor2)==HIGH));

if ((digitalRead (sensor2)==LOW)&&(digitalRead (sensor1)==HIGH))
  do
   { 
    myservo.write(90+45);
   }while ((digitalRead (sensor2)==LOW)&&(digitalRead (sensor1)==HIGH));
   
if ((digitalRead (sensor2)==LOW)&&(digitalRead (sensor1)==LOW))
  do 
   {
    motor=HIGH;
    myservo.write(90);
   }while ((digitalRead (sensor2)==LOW)&&(digitalRead (sensor1)==LOW));
if ((digitalRead (sensor2)==HIGH)&&(digitalRead (sensor1)==HIGH))
  do
  {
    motor=LOW;
    myservo.write(0);
    //FRENA
  }while((digitalRead (sensor2)==HIGH)&&(digitalRead (sensor1)==HIGH));
}

