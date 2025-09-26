const int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);

  unsigned long start = millis();
  const long duration = 1000;

  for ( ; millis() - start < duration; ) {
  }

  digitalWrite(ledPin, LOW);

  start = millis();

  for ( ; millis() - start < duration; ) {
  }
}
