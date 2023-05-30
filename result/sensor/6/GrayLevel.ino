// GrayLevel.ino
// Date: 2020/05/03

#include <Wire.h>
#include "LiquidCrystal_I2C.h"

int analogPin = A0;
LiquidCrystal_I2C lcd(0x27, 16, 2); 

void setup()
{
    lcd.init();
    lcd.backlight();
    pinMode(analogPin, INPUT);
    Serial.begin(9600);
}

void loop() {
    float data = analogRead(analogPin);
    Serial.println(data);             
    lcd.setCursor(0, 0);   
    lcd.print("The range is: ");
    lcd.setCursor(0, 1);      
    lcd.print(data, 2);       
    delay(200);
}