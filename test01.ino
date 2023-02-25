#include <Wire.h>
int pHSense = A0;
void setup() {
  Serial.begin(9600);
  delay(100);
  Serial.println("PH SENSOR MODULE");
}
void loop() {
  int measuringVal = analogRead(pHSense);
  Serial.print("Measuring Raw Value > ");
  Serial.println(measuringVal);
  double vltValue = 3.3 / 1024.0 * measuringVal;
  Serial.print("Voltage Value > ");
  Serial.print(vltValue, 3);
  float P0 = 7 + ((2.5 - vltValue) / 0.18);
  Serial.println("");
  Serial.print("pH Value > ");
  Serial.println(P0, 3);
  Serial.println("");
  delay(500);
}
