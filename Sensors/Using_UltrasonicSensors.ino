#define trigpin 10
#define echopin 13
float distance , duration;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(trigpin,OUTPUT); // we are sending pulses
pinMode(echopin,INPUT);  // we are getting the input backinto the sensor
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigpin,LOW); //
delayMicroseconds(2);
digitalWrite(trigpin,HIGH); 
delayMicroseconds(10);
digitalWrite(trigpin,LOW);

duration=pulseIn(echopin,HIGH);
// this measures the duration of a pulse on a particular pin 
// we are measuring the time the pin stays high
distance=(duration/2)*0.0343;

Serial.print("Distance=");
if(distance>=400 or distance <=2){
  Serial.print("Out of Range");
}
else{
  Serial.print(distance);
  Serial.println("cm");
  delay(10);
}

delay(10);
}




/**
Using the NewPing Library

#include "NewPing.h"

#define trigpin 10
#define echopin 13
#define maxdistance 400

NewPing sonar(trigpin,echopin,maxdistance);
float distance;

void setup(){
Serial.begin(9600);
}

void loop(){
distance =sonar.ping_cm();
Serial.print("Distance=");
if(distance>=400 or distance <=2){
Serialprintln("Out of Range");

}
else{
Serial.print(distance);
Serial.println("cm");
delay(500);
}
delay(500);
}
 */