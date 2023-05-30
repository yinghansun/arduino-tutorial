// ActiveBuzzer.ino
// Date: 2020/04/22

int buzzer = 9;

void setup()
{
    pinMode(buzzer, OUTPUT);
}

void loop()
{
    digitalWrite(buzzer, HIGH); // sound production
    delay(1000);
    digitalWrite(buzzer, LOW);
    delay(1000);
}