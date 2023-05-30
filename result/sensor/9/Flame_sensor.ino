// Flame_sensor.ino
// Date: 2020/04/30

int fire_pin = A0;  
int buzzer_pin = 13;  
int LED_pin = 11;

int count = 0;
int smooth_value = 5;

void setup()
{
    pinMode(buzzer_pin, OUTPUT);
    pinMode(LED_pin, OUTPUT);
    pinMode(fire_pin, INPUT);
    Serial.begin(9600);
    digitalWrite(buzzer_pin, LOW);    
}

void loop()
{
    int value = digitalRead(fire_pin);  
    Serial.println(value);

    if (value == 0)     
    {
        count++;
    }
    else
    {
        count = 0;
    }

    if (count >= smooth_value)    
    {
        digitalWrite(buzzer_pin, HIGH);
        digitalWrite(LED_pin, HIGH);
    }
    else
    {
        digitalWrite(buzzer_pin, LOW);
        digitalWrite(LED_pin, LOW);
    }

    // delay(500);
}