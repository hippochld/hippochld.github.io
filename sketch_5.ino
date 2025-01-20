#define PWM_PIN 3
#define PERIOD 2000

void setup() {
  pinMode(PWM_PIN, OUTPUT);
}

void loop() {
  digitalWrite(PWM_PIN, HIGH);
  delayMicroseconds(PERIOD /2);
  digitalWrite(PWM_PIN, LOW);
  delayMicroseconds(PERIOD /2);
}