// Components/Modules needed
/*
 * 1 An Arduino Development Board,( UNO, Due, Nano, Pro Mini etc)
 * 2 A Soil Moisture Sensor with it's driver attached
 * 3 A PC/Mac
 * 4 Jumper Wires
 * 5 Solderless Board/BreadBoard
 * 6 An Arduino Type B cable
 */

const unsigned int AnalogPin=A0;// Data from sensor is read on AnalogPin A0
int astore; // Variable declared. assigned to keep values from analogRead() function
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); // Arduino Development board and the computer communicate at 9600 bits per second
Serial.println("Hii \n\n"); 
delay(2000);
}




void loop() {
  // put your main code here, to run repeatedly:
astore=analogRead(AnalogPin);
Serial.print("Soil Moisture Level: ");
int now = map(astore,0,1023,100,0);// The old but handy Map function was used here to make the sensor's raw value within
// the rage of 100-0.
Serial.print(now);
Serial.println("%");
delay(2000);
// Values Displayed on the Serial Monitor vary based on Soil Moisture.
// Higher values signifies High humidity "Plant has sufficient water"
// Lower values signifies Low Humidy. meaning "Plant needs more water " 
}