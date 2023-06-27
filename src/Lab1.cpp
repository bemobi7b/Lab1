/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/Rich/CTD2023/Lab1/src/Lab1.ino"
void setup();
void loop();
#line 1 "c:/Users/Rich/CTD2023/Lab1/src/Lab1.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
void setup() {
  
  //comment
}
void loop() {
  pinMode(D5, OUTPUT);
  delay(1000);
  digitalWrite(D5, HIGH);
  delay(1000);
  digitalWrite(D5, LOW);
}