// Joystick.ino
// Date: 2020/05/03

#define JOYSTICK_X    A0
#define JOYSTICK_Y    A1
#define JOYSTICK_SW   A2

#define LED_ENTER    8   //enter
#define LED_LEFT     9   //left
#define LED_UP      10   //up
#define LED_RIGHT   11   //right
#define LED_DOWN    12   //down

void setup()
{
    pinMode(JOYSTICK_X, INPUT);
    pinMode(JOYSTICK_Y, INPUT);
    pinMode(JOYSTICK_SW, INPUT_PULLUP);
    pinMode(LED_ENTER, OUTPUT); 
    pinMode(LED_LEFT, OUTPUT);
    pinMode(LED_UP, OUTPUT);
    pinMode(LED_RIGHT, OUTPUT);
    pinMode(LED_DOWN, OUTPUT);
    Serial.begin(9600); 
}

void loop() 
{
    int value_x = analogRead(JOYSTICK_X);  
    int value_y = analogRead(JOYSTICK_Y);  
    int value_sw = digitalRead(JOYSTICK_SW);

    if(value_x==0)
    {
        digitalWrite(LED_RIGHT, LOW);
        digitalWrite(LED_LEFT, HIGH);
        Serial.print("left");

    }
    else if(value_x==1023)
    {
        digitalWrite(LED_LEFT, LOW);
        digitalWrite(LED_RIGHT, HIGH);
        Serial.print("right");
    }
    else
    {
        digitalWrite(LED_LEFT, LOW);
        digitalWrite(LED_RIGHT, LOW);
    }

    if(value_y==0)
    {
        digitalWrite(LED_DOWN, LOW);
        digitalWrite(LED_UP, HIGH);
        Serial.print("up");
    }
    else if(value_y==1023)
    {
        digitalWrite(LED_UP, LOW);
        digitalWrite(LED_DOWN, HIGH);
        Serial.print("down");
    }
    else
    {
        digitalWrite(LED_UP, LOW);
        digitalWrite(LED_DOWN, LOW);
    }

    if(value_sw==0)
    {
        digitalWrite(LED_ENTER, HIGH);
        Serial.print("enter");
    }
    else
    {
        digitalWrite(LED_ENTER, LOW);
    }

    delay(100);
}