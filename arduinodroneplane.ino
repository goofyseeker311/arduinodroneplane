#include <SPI.h>
#include <WiFiNINA.h>

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(LEDR, OUTPUT);
  pinMode(LEDG, OUTPUT);
  pinMode(LEDB, OUTPUT);
  //pinMode(3, OUTPUT);
  //pinMode(5, OUTPUT);
  //pinMode(6, OUTPUT);
  //pinMode(9, OUTPUT);
}
void loop() {
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(LEDR, HIGH);
  digitalWrite(LEDG, LOW);
  digitalWrite(LEDB, LOW);
  //analogWrite(3, 255);
  //analogWrite(5, 255);
  //analogWrite(6, 255);
  //analogWrite(9, 255);
}