#include <Wire.h> 

#define SENSOR_ADDR 0x77 
#define LCD_ADDR 0x27    

void setup() {
  Wire.begin(); 
  Serial.begin(9600); 
}

void loop() {
  Wire.beginTransmission(SENSOR_ADDR); 
  Wire.write(0xF4); 
  Wire.endTransmission();
  Wire.requestFrom(SENSOR_ADDR, 2); 
  int temp = Wire.read() << 8 | Wire.read(); 

  Wire.beginTransmission(LCD_ADDR);
  Wire.write("Temp: ");
  Wire.write(temp);
  Wire.endTransmission();

  delay(1000);
}
