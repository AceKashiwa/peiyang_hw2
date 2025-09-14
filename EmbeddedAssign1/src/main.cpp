#include <Arduino.h>

void setup() {
  for (int pin : {27,2, 4, 5, 18, 19}) {
    pinMode(pin, OUTPUT);
  }
}

void loop() {
  for (int pin : {27, 2, 4, 5, 18, 19}) {
    digitalWrite(pin, HIGH);
    delay(500);
    digitalWrite(pin, LOW);
    delay(500);
  }
  for (int pin : {19, 18, 5, 4, 2, 27}) {
    digitalWrite(pin, HIGH);
    delay(500);
    digitalWrite(pin, LOW);
    delay(500);
  }
}