// Copyright (c) 2025, Aiden Haglund, Axion Dynamics

#include <Servo.h>
#include <LiquidCrystal.h>

const int rs = 13, en = 12, d4 = 7, d5 = 6, d6 = 5, d7 = 4;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// Pin assignments for servos
const int basePin = 2;
const int armSegment1Pin = 8;
const int armSegment2Pin = 9;
const int armSegment3Pin = 10;
const int grabberPin = 3;

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

// Servo initial positions
int baseServoPos = 90;
int armSegment1Pos = 90;
int armSegment2Pos = 90;
int armSegment3Pos = 90;
int grabberPos = 156;

void setup() {
  // Setup LCD
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);

  // Setup servos
  baseServo.attach(basePin);
  armSegment1Servo.attach(armSegment1Pin);
  armSegment2Servo.attach(armSegment2Pin);
  armSegment3Servo.attach(armSegment3Pin);
  grabberServo.attach(grabberPin);
  
  Serial.begin(9600);
}

void loop() {
  // X axis 1
  if(analogRead(joystick1XPin) <= 505) {
  baseServoPos -= 5;
  baseServoPos = constrain(baseServoPos, 0, 180);
  baseServo.write(baseServoPos);
  } 
  else if(analogRead(joystick1XPin) >= 518) {
  baseServoPos += 5;
  baseServoPos = constrain(baseServoPos, 0, 180);
  baseServo.write(baseServoPos);
  }

  // Y axis 1
  if(analogRead(joystick1YPin) <= 505) {
    armSegment1Pos -= 5;
    armSegment1Pos = constrain(armSegment1Pos, 0, 180);
    armSegment1Servo.write(armSegment1Pos);
  }
  else if(analogRead(joystick1YPin) >= 518) {
    armSegment1Pos += 5;
    armSegment1Pos = constrain(armSegment1Pos, 0, 180);
    armSegment1Servo.write(armSegment1Pos);
  }
    
  // X axis 2
  if(analogRead(joystick2XPin) <= 505) {
    grabberPos -= 2;
    grabberPos = constrain(grabberPos, 84, 156);
    grabberServo.write(grabberPos);
  }
  else if(analogRead(joystick2XPin) >= 518) {
    grabberPos += 2;
    grabberPos = constrain(grabberPos, 84, 156);
  }

  // Y axis 2
  if()
}

void displayValues() {
  
}

void initialize() { 
  // Set initial servo positions
  baseServo.write(baseServoPos);
  armSegment1Servo.write(armSegment1Pos);
  armSegment2Servo.write(armSegment2Pos);
  armSegment3Servo.write(armSegment3Pos);
  grabberServo.write(grabberPos);
}