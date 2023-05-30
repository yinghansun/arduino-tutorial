// Serial_LCD1602_Display.ino
// Date: 2020/05/03

#include <Wire.h> 
#include "LiquidCrystal_I2C.h"

// set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);  

void setup()
{
    lcd.init();               // initialize the lcd
    // Print a message to the LCD.
    lcd.backlight();
    lcd.setCursor(2, 0);      // go to start of 2nd line
    lcd.print("Hello, world!");
    lcd.setCursor(4, 1);      // go to start of 2nd line
    lcd.print("keywish");
}

void loop(){}