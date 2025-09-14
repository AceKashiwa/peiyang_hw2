#include <Arduino.h>

#define LED_1 2
#define LED_2 4
#define LED_3 27

String inputString = "";
String lastString = "";

void setup() {
  // pinMode(LED_1, OUTPUT);
  // pinMode(LED_2, OUTPUT);
  // pinMode(LED_3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // when led1 is on, turn it off; vice versa
  // if (Serial.available() > 0) {
  //   char c = Serial.read();
  //   if (c == '1') {
  //     digitalWrite(LED_1, !digitalRead(LED_1));
  //     Serial.print("LED 1 ");
  //     Serial.println(digitalRead(LED_1) ? "ON" : "OFF");
  //   }
  //   else if (c == '2') {
  //     digitalWrite(LED_2, !digitalRead(LED_2));
  //     Serial.print("LED 2 ");
  //     Serial.println(digitalRead(LED_2) ? "ON" : "OFF");
  //   }
  //   else if (c == '3') {
  //     digitalWrite(LED_3, !digitalRead(LED_3));
  //     Serial.print("LED 3 ");
  //     Serial.println(digitalRead(LED_3) ? "ON" : "OFF");
  //   }
  // }
  if (Serial.available() > 0) {
    inputString = Serial.readStringUntil('\n');
    if (lastString == "" && inputString != "AA") {
      Serial.println("Key Error");
    } else if (lastString == "AA" && inputString != "BB") {
      Serial.println("Key Error");
      lastString = "";
    } else if (lastString == "BB" && inputString != "CC") {
      Serial.println("Key Error");
      lastString = "";
    } else if (lastString == "CC" && inputString != "DD") {
      Serial.println("Key Error");
      lastString = "";
    } else if (lastString == "CC" && inputString == "DD") {
      Serial.println("Key Correct");
      lastString = "";
    } else {
      lastString = inputString;
    }
  }
}