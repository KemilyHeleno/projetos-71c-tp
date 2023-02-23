const int pinoLED = 10;
const int pinoPot = A5;
int leituraA5;

float luminosidadeLED = 0;

void setup() {
  pinMode(pinoPot, INPUT);
  pinMode(pinoLED, OUTPUT);
}

void loop() {
 leituraA5 = analogRead (pinoPot);
 luminosidadeLED = map (leituraA5, 0, 1023, 0, 255);
 analogWrite(pinoLED, luminosidadeLED);
}
