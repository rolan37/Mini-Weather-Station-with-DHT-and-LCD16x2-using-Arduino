#include <Wire.h> 
#include <LiquidCrystal_I2C.h> //LCD library for i2c
#include <dht.h> //DHT11 library (view my previous tutorials)
#define dht_apin A0 // the A0 pin for the humidity sensor

LiquidCrystal_I2C lcd(0x27, 16, 2);

dht DHT; 

void setup() {
  lcd.begin();
  lcd.backlight(); //To turn the backlight ON
}

void loop() {
  //Start of Program
  DHT.read11(dht_apin); 
  lcd.clear(); //important as we clear the old data from the LCD before loading more data on to it
  lcd.setCursor(0,0);
  lcd.print("Humidity: ");
  lcd.print(DHT.humidity);
  lcd.setCursor(0,1);
  lcd.print("Temp: ");
  lcd.print(DHT.temperature);
  delay(5000); //The sample rate at which we will take the readings




}
