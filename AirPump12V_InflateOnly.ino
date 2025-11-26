int air = 3;
int LED = 13;

void setup() {
  Serial.begin(9600);
  pinMode(air, OUTPUT);
  pinMode(LED, OUTPUT);

  digitalWrite(air, LOW);
  digitalWrite(LED, LOW);
}

void loop() {
  //turn on
  digitalWrite(air, HIGH);
  digitalWrite(LED, HIGH);
  delay(10000);

  //turn off
  digitalWrite(air, LOW);
  digitalWrite(LED, LOW);
  delay(3000);

}
