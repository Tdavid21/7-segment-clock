#include <DS3231.h>
#include <Wire.h>
#include <time.h>


DS3231 myRTC;




void setup() {
  Serial.begin(57600);
  Wire.begin();
  // put your setup code here, to run once:
}

void loop() {

  DateTime currentMoment = RTClib::now();

  // put your main code here, to run repeatedly:
  Serial.print(currentMoment.hour());
  Serial.print(":");
  Serial.print(currentMoment.minute());
  Serial.print(":");
  Serial.println(currentMoment.second());
  delay(1000);
}
