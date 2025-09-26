const int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);

  unsigned long start = millis();
  const long duration = 1000;

  while (millis() - start < duration) {
  }

  digitalWrite(ledPin, LOW);

  start = millis();

  while (millis() - start < duration) {
  }
}
