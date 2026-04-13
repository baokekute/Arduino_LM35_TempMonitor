const int sensorPins[2] = {A0, A1};
void setup() { Serial.begin(9600); }
void loop() {
  int adcValues[2]; float tempC[2];
  for(int i=0; i<2; i++) {
    adcValues[i] = analogRead(sensorPins[i]);
    tempC[i] = (adcValues[i] * 500.0) / 1023.0;
  }
  // --- DOAN CODE NAY SE BI XUNG DOT ---
  Serial.print(tempC[0]);
  Serial.print(",");
  Serial.println(tempC[1]);
  // ------------------------------------
  delay(1000);
}