#include "irCMDs.h"

int timer = 10000;

void setup() {
  // setup code, runs once
  
  Serial.begin(9600);   
  
}

void loop() {
  // main code here, run repeatedly

  delay(timer);
  // select sigInputOne
  // delay 1 minute....
  // select sigInputTwo
  // delay 1 minute
  // select sigInputThree
  // delay 1 minute and loop
}
