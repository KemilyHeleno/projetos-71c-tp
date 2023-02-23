const int pinoPot = A5;
int leituraA5;

void setup() {
  pinMode(pinoPot, INPUT);
  Serial.begin(9600);
}

void loop() {
 leituraA5 = analogRead (pinoPot);
 Serial.print(leituraA5);
 Serial.println("bita");
 delay(100);
}
