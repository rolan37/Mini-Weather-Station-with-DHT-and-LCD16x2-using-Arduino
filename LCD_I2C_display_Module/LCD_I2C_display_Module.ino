//Electronicssimplified - LCD I2C Module
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{

  lcd.begin();


  lcd.backlight();
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Like | Share");
  lcd.setCursor(0,1);
  lcd.print("Subscribe");
}

void loop()
{
}
