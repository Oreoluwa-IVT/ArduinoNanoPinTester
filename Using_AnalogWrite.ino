int a=A0; // assigning our Analog Pin "A0" as  "a "
int b=5; //  assigning our Digital pin , Led pin "5" as  " b "
void setup() { 
  // put your setup code here, to run once:
Serial.begin(5600); // We instantiated Serial communication between the Arduino and the computer at 5600 bits per second
pinMode(b,OUTPUT); //  Pin 5/b is configured as an OUTPUT digital pin
}

void loop() {
  // put your main code here, to run repeatedly:
int c=analogRead(a);  // we used the analogRead() function to read continuous varying values from our Analog pin "A0 / a "

int okay=map(c,0,1023,0,255); // Because AnalogWrite functions only range from 0 to 255, we used the map function to get and equivalent of 0to 1023 into 0 to 255
Serial.println(okay); // The value of okay is displayed on out serial monitor

analogWrite(b,okay);  // We used the analogWrite() function to generate varing digital output from 0 to 255


} // This closes the void loop() function
