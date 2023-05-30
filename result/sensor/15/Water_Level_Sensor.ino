// Water_Level_Sensor.ino
// Date: 2020/05/02

int analog_pin=A0;

void setup() {
    pinMode(analog_pin, INPUT);
    Serial.begin(9600);
}

void loop() {
    double temp = (long)analogRead(analog_pin);
    double data = (temp/650)*4;
    Serial.print("the depth is:");
    Serial.print(data);
    Serial.println("cm");
    delay(1000);
}