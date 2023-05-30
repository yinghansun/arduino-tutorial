// Temperature_Humidity_Sensor.ino
// Date: 2020/05/02

#include <Wire.h>
#include"dht11.h"
#include "LiquidCrystal_I2C.h"

#define    DHT11PIN    8
dht11 DHT11;
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
    pinMode(DHT11PIN, OUTPUT);
    lcd.init();
    lcd.backlight();
    Serial.begin(9600);
}

void loop() {
    int chk = DHT11.read(DHT11PIN);
    lcd.setCursor(0, 0);
    lcd.print("Tep: ");
    lcd.print((float)DHT11.temperature, 2);
    lcd.print("C");
    lcd.setCursor(0, 1);
    lcd.print("Hum: ");
    lcd.print((float)DHT11.humidity, 2);
    lcd.print("%");
    delay(200);
}