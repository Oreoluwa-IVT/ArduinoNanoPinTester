int pin1=9; // Digital pin9 is declared as pin1 here. This will function as our button input
int pin2=3; // Digital pin3 is declared as pin2 here. This will function as our output pin for our led
void setup() {
  // put your setup code here, to run once:
pinMode(
pinMode(pin1,INPUT);
pinMode(pin2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(pin1)==HIGH){
  digitalWrite(pin2,HIGH); // The pin is set high here. LED light up. (if connected properly).
}
else{
  digitalWrite(pin2,LOW); // The pin is set low here. Meaning there's no power supply on this pin
}

}
