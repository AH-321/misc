LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int potPinG = A1;
const int potPinB = A0;
String disp;

void setup() {
  GServo.attach(11);
  BServo.attach(10);
  lcd.begin(16, 2);
  Serial.begin(9600);
}

void loop() {
  grabServo();
  baseServo();
}

void grabServo() {
  int potVal = analogRead(potPinG);
  int pos = map(potVal, 0, 1023, 84, 156);
  GServo.write(pos);
  // Update display
  lcd.setCursor(0, 0);
  lcd.print("GServo Raw: " + String(potVal));
  lcd.setCursor(0, 1);
  lcd.print("Position: " + String(pos));
  delay(30);
  lcd.clear();
}

void baseServo() {
  int potVal = analogRead(potPinB);
  int pos = map(potVal, 0, 1023, 0, 180);
  BServo.write(pos);
}