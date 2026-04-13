const int sensorPins[2] = {A0, A1}; // 2 kênh cảm biến

void setup() {
  Serial.begin(9600);
}

void loop() {
  int adcValues[2];
  float tempC[2];

  // Vòng lặp đọc 2 kênh
  for(int i=0; i<2; i++) {
    adcValues[i] = analogRead(sensorPins[i]);
    tempC[i] = (adcValues[i] * 500.0) / 1023.0;
  }

  // Gửi dữ liệu định dạng CSV: Temp1,Temp2
  Serial.print(tempC[0]);
  Serial.print(",");
  Serial.println(tempC[1]);

  delay(1000);
}