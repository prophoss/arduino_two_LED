const int ledPin1 = 11;
const int ledPin2 = 9;
void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  static int delayPeriod = 500;
  digitalWrite(ledPin1,LOW);
  delay(delayPeriod);
  digitalWrite(ledPin1, HIGH);
  delay(delayPeriod);
  digitalWrite(ledPin2,LOW);
  delay(delayPeriod);
  digitalWrite(ledPin2, HIGH);
  delay(delayPeriod); 
}
