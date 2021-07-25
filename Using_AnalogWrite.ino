int a=A0;
int b=9;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int c=analogRead(a);

int okay=map(c,0,1023,0,255);
Serial.println(okay);

analogWrite(b,okay);


}
