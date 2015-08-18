#include "HX711.h"

// HX711.DOUT	- pin #A1
// HX711.PD_SCK	- pin #A0

HX711 one(A1, A0);
//HX711 two(A2, A3);
//X711 three(A2, A3);
//HX711 four(A2, A3);

		// parameter "gain" is ommited; the default value 128 is used by the library
//HX711 scale(A2, A3);

void setup() {
  Serial.begin(38400);


  one.set_scale(2280.f);                      // this value is obtained by calibrating the scale with known weights; see the README for details
  one.tare();				        // reset the scale to 0

}

void loop() {

Serial.println((one.read_average(1)/100)+100000);
//Serial.println(two.read_average(1)/100);


}
