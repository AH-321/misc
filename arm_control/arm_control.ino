#include <Servo.h>
#include <LiquidCrystal.h>

// Pin assignments for servos
const int basePin = 9;
const int armSegment1Pin = 10;
const int armSegment2Pin = 11;
const int armSegment3Pin = 12;
const int grabberPin = 13;

// Create Servo objects
Servo baseServo;
Servo armSegment1Servo;
Servo armSegment2Servo;
Servo armSegment3Servo;
Servo grabberServo;

// Joystick analog pins
const int joystick1XPin = A0;
const int joystick1YPin = A1;
const int joystick2XPin = A2;
const int joystick2YPin = A3;

// Servo position limits
int baseServoPos = 90;
int armSegment1Pos = 90;
int armSegment2Pos = 90;
int armSegment3Pos = 90;
int grabberPos = 90;

void setup() {
  // Attach servos to pins
  baseServo.attach(basePin);
  armSegment1Servo.attach(armSegment1Pin);
  armSegment2Servo.attach(armSegment2Pin);
  armSegment3Servo.attach(armSegment3Pin);
  grabberServo.attach(grabberPin);
  
  // Set initial servo positions
  baseServo.write(baseServoPos);
  armSegment1Servo.write(armSegment1Pos);
  armSegment2Servo.write(armSegment2Pos);
  armSegment3Servo.write(armSegment3Pos);
  grabberServo.write(grabberPos);

  // Initialize Serial monitor (optional for debugging)
  Serial.begin(9600);
}

void loop() {
    
}