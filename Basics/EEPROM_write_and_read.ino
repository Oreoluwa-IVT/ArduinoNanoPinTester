//Author: Oluwafemi Oreoluwa
//Date Created: August 13 2021
//Program: Writing to and Reading from the AtMega328 EEPROM
#include<EEPROM.h> //This Library allows us to use functions defined inside it
int address=0; // We Created an address variable named address and assigned gave it memory location 0
int address2=56; // We Created another address varialbe named address2 and gave it memory loation 56
int value=12; // This is a random value to be written and read into the eeprom
int val=233; // This is another random value to be written and read into the eeprom
int look; // Read Values will be assigned to variable name "look"
int red; // Another Read Value will be assigned to variable name "red"
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); // We just initialised Serial communication at 9600 bits per second
EEPROM.write(address,value); //Write() method takes two arguments, the memory address we are writing to and the value we are writing
EEPROM.write(address2,val); //----
}

void loop() {
  // put your main code here, to run repeatedly:

look=EEPROM.read(address); //read() method simply takes one argument. The address it's reading from
red=EEPROM.read(address2);

Serial.print(look); // The first value is read and assigned to variable name "look". This line print what's assigned to "look"
Serial.print ("\t");// Skip a tab
Serial.println(red);// Print value and moves to the next line in the serial monitor
delay(1000);// The Microcontrolller holds/delay for 1000milliseconds.
}
