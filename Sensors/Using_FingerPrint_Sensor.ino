//Biometric Authentication for DoorLock
#include <Adafruit_Fingerprint.h>
#if (defined(__AVR__) || defined(ESP8266)) && !defined(__AVR_ATmega2560__)
SoftwareSerial mySerial(2, 3);
#else
#define mySerial Serial1
#endif
Adafruit_Fingerprint finger = Adafruit_Fingerprint(&mySerial);

void setup()
{
  Serial.begin(9600);
  while (!Serial);  // For Yun/Leo/Micro/Zero/...
  delay(100);
  pinMode(13,OUTPUT);
  Serial.println("\n\nFingePrint Detection");
  // set the data rate for the sensor serial port
  finger.begin(57600);
  delay(5);
  if (finger.verifyPassword()) {
    Serial.println("FingerPrint Sensor Connected!");
  } else {
    Serial.println("Sensor Not Found !");
    while (1) { delay(1); }
  }

  
