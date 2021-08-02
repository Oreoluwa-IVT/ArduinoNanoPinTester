void setup() {
  // put your setup code here, to run once:
pinMode(9,OUTPUT); // DigitalPin 9 , is set an an OUTPUT pin Here
pinMode(2,INPUT);  // Digitalpin 2 , is set as an INPUT pin here
Serial.begin(9600); // We set serial communication between the computer and the arduino to 9600 bits per second.
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(2)==HIGH){  //if the function see that input is HIGH/ 1 , it executes the next statement
  digitalWrite(9,HIGH);    // if the previous condition is correct, the statement will be executed
}
else{
  digitalWrite(9,LOW);    // If the the condition state earlier is false, this statement will execute
}
Serial.println(digitalRead(2)); // we enable the serial monitor to display what INPUT pin 9 Is reading
}

// Remember to add a pull down resistor to ground ,in-order to remove fluctuating reading on the input pin.
