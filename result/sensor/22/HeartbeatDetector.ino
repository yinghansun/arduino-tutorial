// HeartbeatDetector.ino
// Date: 2020/05/02

#include <Wire.h> 
#include "LiquidCrystal_I2C.h"

int analog_pin = A0;
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() 
{ 
    lcd.init();
    lcd.backlight();
    pinMode(analog_pin, INPUT);
    Serial.begin(9600);
} 

void loop() {
    float data = analogRead(analog_pin); 
    Serial.println(data);          
    lcd.setCursor(0, 0);   // print at row 0, col 0 of LCD
    lcd.print("The range is: ");
    lcd.setCursor(0, 1);   // print at row 1, col 0 of LCD  
    lcd.print(data, 2);       
    delay(500);
}