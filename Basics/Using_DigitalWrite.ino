const int ledpin  =7;
const int ledpin2 = 9;
void setup() {
  // put your setup code here, to run once:
pinMode(ledpin,OUTPUT);
pinMode(ledpin2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:gi
digitalWrite(ledpin,HIGH);
delay(100);
digitalWrite(ledpin,LOW);
delay(50);

digitalWrite(ledpin2,HIGH);
delay(100);
digitalWrite(ledpin2,LOW);
delay(50);
}
