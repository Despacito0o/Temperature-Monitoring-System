#include <DHT.h>
#define DHTPIN 2     // 传感器信号引脚
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600); // 设置串口波特率
  dht.begin();        // 初始化传感器
}

void loop() {
  delay(2000);        // 每2秒读取一次
  float temp = dht.readTemperature(); // 读取温度
  if (isnan(temp)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println(" *C");
}