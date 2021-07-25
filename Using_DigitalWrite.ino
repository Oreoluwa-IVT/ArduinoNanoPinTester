int pin1 =2; // We assigned Digitalpin "2" with variable name "pin1"

void setup() {
  // put your setup code here, to run once:
pinMode(pin1,OUTPUT); // pin1 is configured as an OUTPUT pin
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(pin1,HIGH);  // pin1, is keep HIGH , meaning voltage is applied to the pin
delay(500);  // the pin is keep high for 500milliseconds
digitalWrite(pin1,LOW);  // pin1 is keep LOW, meaning there's no voltage applied 
delay(500); // the previous line is delayed for 500 millisecond.
}
