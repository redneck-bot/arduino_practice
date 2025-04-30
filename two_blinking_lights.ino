int ledpin_1 = 12;
int ledpin_2 = 11;

void setup() {
  pinMode(ledpin_1,   OUTPUT);
  pinMode(ledpin_2, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.print("Setup done.");
}

void loop() {
  digitalWrite(ledpin_1, HIGH);
  digitalWrite(ledpin_2, HIGH);
  Serial.print("LEDs are on.");
  delay(1000);
  digitalWrite(ledpin_1, LOW);
  digitalWrite(ledpin_2, LOW);
  Serial.print("LEDs are off.");
  delay(1000);
}
