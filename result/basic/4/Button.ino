// Button.ino
// Date: 2020/04/18

int led_out = 11 ;
int keypad_pin = 7;

int getState(int iterator)
{
    for(int i = 0; i < iterator; i++)
    {
        if(digitalRead(keypad_pin)==0)
        {
            return 0;
        }
    }
    return 1;
}

void setup()
{
    pinMode(led_out, OUTPUT);    
    pinMode(keypad_pin, INPUT);        
    digitalWrite(led_out, LOW);
    Serial.begin(9600);
}

void loop()
{
    int state = getState(100);

    delay(1000);
    if(state == 0)
    {
        digitalWrite(led_out, HIGH);
        Serial.println("turn on the LED");
    }
    else
    {
        digitalWrite(led_out, LOW);
        Serial.println("turn off the LED");
    }
}
