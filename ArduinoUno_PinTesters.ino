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


 **/
long int allread;      
long int allanalog[6]={A0,A1,A2,A3,A4,A5};
int i;
void setup() {
  // put your setup code here, to run once:
for(i=0;i<=14;i++){
  pinMode(i,OUTPUT);             
  }
  Serial.begin(9600);            //Serial begin is used to Initial coomunication With the Serial monitor Located under tools.
}


void loop()                      // Void loop is a built function used for repeating all code inside it.
{
int atest;
                                 // put your main code here, to run repeatedly:
                                 // This part of the program tests the digital pins on the arduino Uno
while(5<6)
for(i=0;i<=13;i++){
  digitalWrite(i,HIGH);          
}
                                 //This part of the program test the Analog pins
atest=analogRead(allanalog[6]);  // this part of the program reads the data and stores it in the "atest" Variable
Serial.println(atest,"\n");          // this part of the code reads data from Analog pins on the arduino
                                //and displays it on the serial monitor. (Click - TOOLS - SERIAL MONITOR)




}
