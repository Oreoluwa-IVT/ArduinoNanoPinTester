//Author: Oluwafemi Oreoluwa
//Created: August 13th 2021
#include<EEPROM.h>
int cell=0; //Memory location 0 represented with variable name "cell"
int value=4; // Variable assigned to integer 4
int value2=5;// Variable assigned to integer 5
void setup() {
  // put your setup code here, to run once:
EEPROM.write(cell,value); //write() method takes 2 arguments.The memory location and the value to be stored
Serial.begin(9600); // Communication between PC and Arduino is at 9600 bits per second
}

void loop() {
  // put your main code here, to run repeatedly:
int store=EEPROM.read(cell); // read() method allows us to assigned the read value to another variable name
Serial.print(store); // The read value is printed to the serial monitor
delay(3000); // All Processes halt for 3 seconds
EEPROM.update(cell,value2); //Using the upated function we can write to the same memory location again only if the new value differs from the former
Serial.println(" \nMemory Updated"); // A prompt is displayed, showing us " Memory updated"





}
