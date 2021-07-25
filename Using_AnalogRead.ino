//Using a Potentiometer
int zero = A0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); // Serial Monitor is being initiated for Serial communication between the arduion and the computer
}

void loop() {
  // put your main code here, to run repeatedly:
int reader=analogRead(zero); // we read analog values using the analogread function
Serial.println(reader); // the values read from the previous statement is being printed in the serial monitor.
}
