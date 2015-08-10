#include "HX711.h"

HX711 one(A9, A8);
HX711 two(A11, A10);
HX711 three(A13, A12);
HX711 four(A15, A14);

void setup() {
  Serial.begin(38400);
}

void loop() {
Serial.println((one.read_average(2)/100)+100000);
Serial.println((two.read_average(2)/100)+200000);
Serial.println((three.read_average(2)/100)+300000);
Serial.println((four.read_average(2)/100)+400000);
}
