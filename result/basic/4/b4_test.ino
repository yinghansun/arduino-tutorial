int keypad_pin = 7;
int value;

void setup()
{  
    pinMode(keypad_pin, INPUT);
    Serial.begin(9600);
}

void loop()
{
    value = digitalRead(keypad_pin);
    Serial.println(value);
}