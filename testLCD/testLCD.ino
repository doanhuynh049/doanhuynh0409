#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2); 

void setup()
{
  lcd.init();                    
  lcd.backlight();
  lcd.setCursor(2,0);
  lcd.print("Arduinokit.vn");
  lcd.setCursor(0,1);
  lcd.print("Xin chao cac ban");
   Serial.begin(9600);
}

void loop()
{
  Serial.print("Hello world\n");
  delay(1000);
}
