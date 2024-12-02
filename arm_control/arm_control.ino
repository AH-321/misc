#include <LiquidCrystal.h>
#include <Servo.h>

const int Xaxis1 = A0;
const int Yaxis1 = A1;
const int Xaxis2 = A3;
const int Yaxis2 = A4;

Servo GServo;
Servo BServo;

//const int rs = 13, en = 12, d4 = 7, d5 = 6, d6 = 5, d7 = 4;
//LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
    serial.begin(9600);
}

void loop() {

}

void get_joystick() {
    int posX1 = analogRead(Xaxis1);
    int posY1 = analogRead(Yaxis1);
    int posX2 = analogRead(Xaxis2);
    int posY2 = analogRead(Yaxis2);

    if(analogRead(Xaxis1) >= 490) {
        translateX1 = map(posX1, 498, 1023, 1, 10);
    } 
//

}