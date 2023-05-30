// SoilMostureSensor.ino
// Date: 2020/05/02

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
    float data=analogRead(analogPin);
    Serial.println(data);
    float i = data / 1023;
    float j = (1-i) * 100;
    lcd.setCursor(0, 0);
    lcd.print("The hum is: ");
    lcd.setCursor(0, 1);
    lcd.print((float)j, 2);
    lcd.print("%");
    delay(200);
}