const int sensorPins[3] = {A0, A1, A2}; // Khai báo 3 kênh cảm biến

void setup() {
  Serial.begin(9600);
}

void loop() {
  int adcValues[3];
  float tempC[3];

  // Vòng lặp đọc 3 kênh
  for(int i=0; i<3; i++) {
    adcValues[i] = analogRead(sensorPins[i]);
    tempC[i] = (adcValues[i] * 500.0) / 1023.0;
  }

  // In ra Serial dạng CSV (cách nhau bằng dấu phẩy)
  Serial.print(tempC[0]);
  Serial.print(",");
  Serial.print(tempC[1]);
  Serial.print(",");
  Serial.println(tempC[2]);

  delay(1000);
}