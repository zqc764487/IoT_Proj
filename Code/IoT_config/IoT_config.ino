#include <SoftwareSerial.h>
SoftwareSerial esp8266(2,3);
void setup() {
  Serial.begin(9600);
  Serial.println("Wifi started");
  esp8266.begin(9600);
}
void loop() {
  if (esp8266.available() > 0){
      byte c = esp8266.read();
      Serial.write(c);  
    } 
  if(Serial.available() > 0)
  {
      byte c = Serial.read();
      esp8266.write(c); 
  }
}

