SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
void setup() {
  pinMode(D5, OUTPUT);
  //comment
}
void loop() {
  delay(1000);
  digitalWrite(D5, HIGH);
  delay(1000);
  digitalWrite(D5, LOW);
}