const int sensorPin = A0; // Chân analog A0 nối với LM35

void setup() {
  // Khởi tạo giao tiếp Serial ở tốc độ 9600 baud
  Serial.begin(9600);
}

void loop() {
  // Đọc giá trị ADC từ cảm biến (0 - 1023)
  int adcValue = analogRead(sensorPin);
  
  // Chuyển đổi giá trị ADC sang nhiệt độ (độ C)
  float tempC = (adcValue * 500.0) / 1023.0;
  
  // In kết quả ra màn hình Serial Monitor
  Serial.print("Nhiet do LM35: ");
  Serial.print(tempC);
  Serial.println(" C");
  
  // Đợi 1 giây trước khi đọc lần tiếp theo
  delay(1000);
}