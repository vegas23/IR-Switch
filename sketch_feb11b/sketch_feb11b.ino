// #include "irCMDs.h"
#include <IRremote.h> // use the library

int timer = 61000;

unsigned int sigInputOne[68] = { 
	30432, 8850,
	4400, 600,
	1650, 550,
	550, 550,
	550, 550,
	600, 550,
	550, 550,
	600, 550,
	500, 600,
	500, 550,
	600, 500,
	1650, 550,
	1650, 600,
	1650, 500,
	1700, 550,
	1700, 550,
	1650, 550,
	1650, 550,
	1650, 600,
	600, 500,
	550, 500,
	550, 550,
	600, 500,
	600, 500,
	600, 550,
	600, 500,
	600, 500,
	1650, 600,
	1650, 550,
	1700, 550,
	1650, 500,
	1650, 600,
	1650, 550,
	1650, 550 
};

// input 2: 807F906F
unsigned int sigInputTwo[68] = {
	3296, 8950,
	4350, 650,
	1600, 550,
	550, 600,
	500, 550,
	550, 600,
	500, 600,
	550, 550,
	550, 550,
	550, 550,
	550, 550,
	1650, 600,
	1600, 650,
	1600, 550,
	1650, 600,
	1650, 550,
	1650, 550,
	1650, 550,
	1650, 600,
	500, 600,
	500, 600,
	1650, 550,
	550, 550,
	550, 600,
	500, 600,
	500, 550,
	600, 550,
	1650, 550,
	1650, 600,
	500, 550,
	1650, 600,
	1650, 550,
	1650, 600,
	1600, 600 
};

// input 3: 807F00FF

unsigned int sigInputThree[68] = {
	18590, 8900,
	4400, 600,
	1600, 600,
	500, 600,
	500, 600,
	550, 550,
	550, 550,
	550, 550,
	550, 550,
	550, 600,
	500, 550,
	1650, 600,
	1650, 600,
	1600, 550,
	1650, 600,
	1650, 600,
	1600, 550,
	1650, 600,
	500, 600,
	550, 550,
	550, 550,
	550, 550,
	550, 550,
	550, 600,
	500, 550,
	600, 550,
	1650, 550,
	1600, 650,
	1600, 600,
	1600, 600,
	1650, 550,
	1650, 550,
	1650, 550,
	1650, 650
};

IRsend irsend;

void setup() {
  // setup code, runs once
  
  Serial.begin(9600);   
  
}

void loop() {
  // main code here, run repeatedly
  
  Serial.print("Sending NEC 0x807F807F (Input 1)...");
  irsend.sendNEC(0x807F807F,32);
  Serial.println("done.");
  delay(timer);
  Serial.print("Sending NEC 0x807F906F (Input 2)...");
  irsend.sendNEC(0x807F906F,32);
  Serial.println("done.");
  delay(timer);
  Serial.print("Sending NEC 0x807F00FF (Input 3)...");
  irsend.sendNEC(0x807F00FF,32);
  Serial.println("done.");
  delay(timer);
  
  /*
  delay(timer);
  Serial.print("Sending NEC 0x807F807F (Input 1)...");
  irsend.sendRaw(sigInputOne,68);
  Serial.println("done.");
  delay(timer);
  Serial.print("Sending NEC 0x807F906F (Input 2)...");
  for(int i = 0; i < 68; i++) {
    irsend.sendRaw(sigInputTwo,i);
  }
  Serial.println("done.");
  delay(timer);
  Serial.print("Sending NEC 0x807F00FF (Input 3)...");
  for(int i = 0; i < 68; i++) {
    irsend.sendRaw(sigInputThree,i);  
  }
  Serial.println("done.");
  */
  
}

