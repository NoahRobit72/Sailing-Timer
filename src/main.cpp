#include <Arduino.h>

int threeMinButton = 3;
int threeAndTwo = 6;
int relayOutput = 7;

void runThreeMinutes();
void runThreeAndTwo();

void ThreeMinHorn();
void TwoMinHorn();
void OneMinHorn();

void setup() {
  Serial.begin(9600);

  pinMode(threeMinButton, INPUT); // Input button for runThreeMinutes()
  pinMode(threeAndTwo, INPUT); // Input botton for runThreeAndTwo()

  pinMode(relayOutput, OUTPUT); // Output for Relay for horn

}

void loop() {
  if(digitalRead(threeMinButton) == HIGH){
    runThreeMinutes();
    Serial.write("Three Min putton Pressed");
  }
  else if(digitalRead(threeAndTwo) == HIGH){
    runThreeAndTwo();
    Serial.write("Two min putton Pressed");
  }
}

/////////////////////////////
//   Starting Sequences    //
/////////////////////////////
void runThreeMinutes(){ // Fucntion to run a 3 minute starting sequence 
  ThreeMinHorn();
  TwoMinHorn();
  OneMinHorn();

}

void runThreeAndTwo(){ // Function to run 3 concective 2 minute starts 
  // Sequence #1
  TwoMinHorn();
  OneMinHorn();

  // Sequence #2
  TwoMinHorn();
  OneMinHorn();
}


/////////////////////////
//   Horn Functions    //
/////////////////////////
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



