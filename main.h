#include <SevSeg.h>

SevSeg sevseg;

void setup() {
  // Number of digits in display
  byte numDigits = 4;   
  // Display select pins
  // one resistor (ex: 220 Ohms, or 330 Ohms, etc, on each digit pin)
  byte digitPins[] = {12, 10, 11, 13};
  //Segments: A,B,C,D,E,F,G,Period
  byte segmentPins[] = {2, 3, 4, 5, 6, 7, 8, 9};

  bool resistorsOnSegments = false; // 'false' means resistors are on digit pins
  byte hardwareConfig = COMMON_ANODE; // See README.md for options
  bool updateWithDelays = false; // Default 'false' is Recommended
  bool leadingZeros = false; // Use 'true' if you'd like to keep the leading zeros
  bool disableDecPoint = false; // Use 'true' if your decimal point doesn't exist or isn't connected. Then, you only need to specify 7 segmentPins[]

  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments, updateWithDelays, leadingZeros, disableDecPoint);
  sevseg.setBrightness(25); 

}

void loop() {

  sevseg.setNumber(1234,2);
  sevseg.refreshDisplay();
  // put your main code here, to run repeatedly:

}
