SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
void setup() {
  
  //comment
}
void loop() {
  pinMode(D5, OUTPUT);
  delay(1000);
  digitalWrite(D5, HIGH);
  delay(1000);
  digitalWrite(D5, LOW);
}