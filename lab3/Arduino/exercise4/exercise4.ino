void setup() {
  // put your setup code here, to run once:
  pinMode (13, OUTPUT);
  pinMode (12, OUTPUT);
  pinMode (9, OUTPUT);
  pinMode (8, OUTPUT);
  pinMode (7, OUTPUT);
  pinMode (4, OUTPUT);
  pinMode (2, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(2, LOW);
  delay(1500);

  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(4, LOW);
  digitalWrite(2, LOW);
  delay(1500);

  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(2, HIGH);
  delay(1500);

  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(4, LOW);
  digitalWrite(2, LOW);
  delay(1500);

  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(2, LOW);
  delay(1500);


  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(2, LOW);
  delay(1500);

  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(2, LOW);
  delay(1500);

  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(2, LOW);
  delay(1500);

  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(2, HIGH);
  delay(1500);

  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(4, LOW);
  digitalWrite(2, HIGH);
  delay(1500);

  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(2, HIGH);
}
