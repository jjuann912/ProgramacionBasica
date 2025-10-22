const int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int blinkCount = 0;

  while (blinkCount < 5) { 
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
    blinkCount++;
  }

  delay(2000);
}
