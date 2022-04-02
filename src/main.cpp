#include <Arduino.h>

void setup() {
  pinMode(12, OUTPUT); // pin 13 - change value if you have LED on diff pin
  Serial.begin(9600);

  pinMode(3, INPUT); // Input button for runThreeMinutes()
  pinMode(6, INPUT); // Input botton for runThreeAndTwo()

  pinMode(7, OUTPUT); // Output for Relay for horn

}

void loop() {
  
}

// Fucntion to run a 3 minute starting sequence 
void runThreeMinutes(){
  ThreeMinHorn();
  
}

// Function to run 3 concective 2 minute starts 
void runThreeAndTwo(){

}

void ThreeMinHorn(){
// First Horn
  digitalWrite(7,HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  delay(500);
  // Second  Horn
  digitalWrite(7,HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  delay(500);
  // Thrid Horn
  digitalWrite(7,HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  delay(500);
}

void TwoMinHorn(){
// First Horn
  digitalWrite(7,HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  delay(500);
  // Second  Horn
  digitalWrite(7,HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  delay(500);
}

void OneMinHorn(){
// One Min Horn
  digitalWrite(7,HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  delay(500);
}



