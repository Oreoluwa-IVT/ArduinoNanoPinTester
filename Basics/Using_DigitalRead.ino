const int button=2;
const int ledpin=8;
void setup() {
  // put your setup code here, to run once:
pinMode(ledpin,OUTPUT); // DigitalPin 9 , is set an an OUTPUT pin Here
pinMode(button,INPUT);  // Digitalpin 2 , is set as an INPUT pin here
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(button)==HIGH){  //if the function see that input is HIGH/ 1 , it executes the next statement
  digitalWrite(ledpin,HIGH);    // if the previous condition is correct, the statement will be executed

}
else{
  digitalWrite(ledpin,LOW);    // If the the condition state earlier is false, this statement will execute

}
}

// Remember to add a pull down resistor to ground ,in-order to remove fluctuating reading on the input pin.
