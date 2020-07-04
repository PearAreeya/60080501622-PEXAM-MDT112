#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  
void setup()
{
  lcd.init();                   
  lcd.init();
  // Print a message to the LCD.
  lcd.backlight();
   lcd.clear();
  lcd.setCursor(3,0);
  lcd.print("Hello  MDT");
 
    delay(1000);    
}


void loop()
{
}
