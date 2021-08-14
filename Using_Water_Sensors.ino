int abc= A1; //analogpin A0 is represented with the variable name abc
int xyz= A7; //analogpin A1 is represeted with the variable name xyz
int boo=8;  // digitalpin 3 is represented with the variable name boo
int bae=6;// digitalpin 7 is represented with the variable name bae
int relay=11;
void setup() {
  // put your setup code here, to run once:
pinMode(boo,OUTPUT); // Digitalpin boo/3 is set as an OUTPUT pin here
pinMode(bae,OUTPUT);// Digitalpin bae/7 is set as an OUTPUT pin here
pinMode(6,OUTPUT); // DigitalPin9 is set as an OUTPUT pin here
pinMode(relay,OUTPUT);
Serial.begin(9600); // Serial Communication between PC and Arduino is set at 9600 bits per second
}
//boo=red
//bae=green
//4=blue

void loop() { // Code in the function repeat over and over again

int you=analogRead(abc);// Values read from sensor1 are assigned to varaible name "you"
int me=analogRead(xyz); // Values read from sensor2 are assigned to variable name " xyz"
if(you<=190){  // Sensor 1 has to satisfy the condition state here to execute the following lines
  digitalWrite(4,LOW); // Green Led is set Off
  digitalWrite(boo,HIGH); // Red Led is configured on
  delay(100); //Red Led is on for 100 milliseconds
  digitalWrite(boo,LOW); // Red Led is configured off
  delay(100);  //Red Led is off for 100 milliseconds
  digitalWrite(bae,LOW);
  digitalWrite(relay,LOW);
  delay(10);
  digitalWrite(relay,LOW);
  delay(10);
}

else if(you>150)
{
  digitalWrite(boo,LOW); //Since RGB is command anode, this line turns Green led off
  digitalWrite(4,HIGH); //Since RGB is command anode, this line turns Blue led on (Indicating HalfFull Tank)
  digitalWrite(bae,LOW); //Since RGB is command anode, this line turns Red led off
} 
if(you>190 && me>160) // Both Sensor1 and 2 have to read based on this condition stated in this line
{
  digitalWrite(boo,LOW);//Since RGB is common anode this line turns Red led off
  digitalWrite(bae, HIGH);//Since RGB is common anode, this line turns Green led on (Indicating Full Tank)
  digitalWrite(9,LOW); //Since RGB is common anode, this line turns blue led off
}

Serial.print(you); //Prints Sensor1 Values on the Serial Monitor
Serial.print("\t");
Serial.println(me);//Prints Sensor2 Values on the Serial Monitor



}
