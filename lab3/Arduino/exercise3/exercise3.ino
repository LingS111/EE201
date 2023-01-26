int inPin = 13;
int val = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(inPin);
  if (val == 0) {
    Serial.println("It's 2023");
  } else {
    Serial.println("Hello World!");
  }
}
