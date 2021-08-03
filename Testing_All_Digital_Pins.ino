//Welcome to the Arduino Uno Pin tester
/** 
The Arduino Uno is a development board designed and manufactured by the 
Arduino Team in Italy. The board is used for prototyping small scale projects
that require little computing power.



What's on the board
1  I/O Pinheaders "those black things you see with holes in them on the board"
2  USB Serial Connector
3  ISP Pinpout " Insystem Programming"
4  Power State LED
5  Receive LED
7  Transmit LED
8  Reset Button
9  Microcontroller "Atmega 328P"
10 A few resistors
11 Capacitors
12 Automatic Voltage Regulator


What you need to Test your Arduino Uno Board
*An Arduino Uno Board
*A USB Cable
*Jumper Wires "Male to Male"
*A Breadboard
*An LED "any color" 3.3v/5v Norminal
*A Computer / PC / Desktop, 

/*
Program Function:
This program simply makes all 14pins HIGH on the Arduino UNO 
and all 54 digital Pins on the Arduino Due HIGH also.

Simply attached your arduino board to your computer (Mac/ Windows)
and select upload.



*/
const int i;
void setup() {
  // put your setup code here, to run once:
for(i=0;i<=54;i++){
  pinMode(i,OUTPUT);             
  }
  Serial.begin(9600);            //Serial begin is used to Initial coomunication With the Serial monitor Located under tools.
}


void loop()// Void loop is a built function used for repeating all code inside it.
{                         
while(5<6){
  for(i=0;i<=54;i++)
  {
  digitalWrite(i,HIGH); 
  }        
}
}
