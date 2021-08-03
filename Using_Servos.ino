#include <Servo.h> //
Servo newServo;
int potpin = A0;  // this pin is connected to the A0 AnalogPin
int val;    //   // this variable reads the data from the analogRead function
int servopin=3;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
newServo.attach(servopin); // we just told the arduino that our servo is on pin 3
pinMode(servopin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
val=analogRead(potpin);
int val2=map(val,0,1023,0,180);
newServo.write(val2);
delay(15);
Serial.println(val2);
} 
