#include <Arduino.h>

void blinky(int pin, int ms);

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
}

void loop() {
  blinky(LED_BUILTIN, 500);
}

void blinky(int pin, int ms) {
  digitalWrite(pin, HIGH);
  delay(ms);
  digitalWrite(pin, LOW);
  delay(ms);
}