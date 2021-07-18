//Add the Servo.h library to be used in our code later
#include <Servo.h>
Servo myServo;

//Declare variables
int const potPin = A0;
int potVal;
int angle;

void setup() 
{
 myServo.attach(9);

 Serial.begin(9600);
}

void loop() 
{
 potVal = analogRead(potPin);
 Serial.print("potVal: ");
 Serial.print(potVal);

 //angle = map(potVal, 0, 1023, 0, 179); Clockwise rotation
 angle = map(potVal, 1023, 0, 179, 0); //Counterclockwise rotation
 Serial.print(", angle: ");
 Serial.println(angle);

 myServo.write(angle);
 delay(15);
}
