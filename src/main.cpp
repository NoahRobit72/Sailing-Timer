#include <Arduino.h>

int threeMinButton = 3;
int threeAndTwo = 6;
int relayOutput = 7;
int millSeconds;

// Function Definitions
void runThreeMinutes();
// void runThreeAndTwo();

void horn(int);


void setup() {
  Serial.begin(9600);
  pinMode(threeMinButton, INPUT); // Input button for runThreeMinutes()
  pinMode(threeAndTwo, INPUT); // Input botton for runThreeAndTwo()
  pinMode(relayOutput, OUTPUT); // Output for Relay for horn
}

void loop() {

}

void horn(int millSeconds){
  digitalWrite(7,HIGH);
  delay(millSeconds);
  digitalWrite(7, LOW);
}


void runThreeMinutes(){
  // 3 min Horn
  horn(1000);
  delay(500);
  horn(1000);
  delay(500);
  horn(1000);

  // 1 min space
  delay(60000);

  // 2 min Horn
  horn(1000);
  delay(500);
  horn(1000);

  // :30 sec space
  delay(30000);

  // 1:30 Horn
  horn(1000);
  delay(500);

  horn(500);
  delay(200);
  horn(500);
  delay(200);
  horn(500);
  
  // :30 sec space
  delay(30000);

  // 1:00 Horn
  horn(1000);

  // :30 sec space
  delay(30000);

  // :30 Horn
  horn(500);
  delay(200);
  horn(500);
  delay(200);
  horn(500);

  // :10 sec space
  delay(10000);

  // :20 Horn
  horn(500);
  delay(200);
  horn(500);

  // :10 sec space
  delay(10000);

  // :10 Horn
  horn(500);

  // :5 sec space
  delay(5000);

  // :5,4,3,2,1
  horn(250);
  delay(100);
  horn(250);
  delay(100);
  horn(250);
  delay(100);
  horn(250);
  delay(100);
  horn(250);
 
  delay(100);

  // Go!
  horn(10000);


  
}

