// Raindrop_Sensor.ino
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
    int data = analogRead(analogPin);
    int j = 1023 - data;
    lcd.setCursor(0, 0);
    lcd.print("The rainfall is: ");
    // set the cursor to column 0, line 1
    // (note: line 1 is the second row, since counting begins with 0)
    lcd.setCursor(0, 1);
    // print the number of seconds since reset:
    lcd.print((float)j, 2);
    lcd.print("mm");
    delay(200);
}