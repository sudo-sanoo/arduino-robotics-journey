void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Red Light
  digitalWrite(8, LOW);
  digitalWrite(12, HIGH);
  delay(5000);

  // Green Light
  digitalWrite(12, LOW);
  digitalWrite(7, HIGH);
  delay(5000);

  // Yellow Light
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  delay(2500);
}
