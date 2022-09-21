// C++ code
//
void setup()
{
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(A0, INPUT);
}

void loop()
{
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(A1, HIGH);
  digitalWrite(A2, LOW);
  digitalWrite(A3, LOW);
  noTone(13);
  if (analogRead(A0) > 410) {
    digitalWrite(A1, LOW);
    digitalWrite(A2, HIGH);
    digitalWrite(A3, LOW);
    tone(13, 294, 500); // play tone 50 (D4 = 294 Hz)
  }
  if (analogRead(A0) > 501) {
    digitalWrite(A1, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(A3, HIGH);
    tone(13, 294, 3000); // play tone 50 (D4 = 294 Hz)
  }
}