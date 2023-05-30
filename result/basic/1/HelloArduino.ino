// HelloArduino.ino
// Date: 2020/04/17

void setup() 
{
    Serial.begin(9600);
}

void loop()
{
    Serial.println("Hello Arduino!");
    delay(1000);
}