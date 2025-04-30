int ledpin_1 = 12;

void setup() {
  pinMode(ledpin_1,   OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.print("Setup done.");
}

void loop() {
  digitalWrite(ledpin_1, HIGH);
  Serial.print("LEDs are on.");
  delay(1000);
  digitalWrite(ledpin_1, LOW);
  Serial.print("LEDs are off.");
  delay(1000);
}
