#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <dht.h> // inlcude the library of DHT11
#define dht_apin A0  // define the analog pin that we need to connect

LiquidCrystal_I2C lcd(0x27, 16, 2);

dht DHT; // giving out dht sensor a name

void setup() {

  lcd.begin();
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Humidity Sensor");
  lcd.clear();
  DHT.read11(dht_apin);
  lcd.setCursor(0,0);
  lcd.print(DHT.humidity);
  delay(1000);
  lcd.setCursor(0,1);
  lcd.print(DHT.temperature);
  delay(5000);

}

void loop() {
  //Start of Program

  DHT.read11(dht_apin); //function to read the values from the pin A0

  //Serial.print("Current humidity = ");
  //Serial.print(DHT.humidity);
  //Serial.print("%  ");
  //Serial.print("temperature = ");
  //Serial.print(DHT.temperature);
  //Serial.println("C  ");
   //Use a delay before taking another set,(always try to use a delay greater than 2 secs)



}
