const int button = 2;
const int ledPin = 13;
int buttonState = 0;

void setup(){
   
  pinMode(button, INPUT); 
  pinMode(ledPin, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);

}

void   loop(){
  buttonState = digitalRead(button);
  if (buttonState == HIGH) {
    digitalWrite(LED_BUILTIN, HIGH);
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(LED_BUILTIN, LOW);
    digitalWrite(ledPin, LOW);
  }
}
