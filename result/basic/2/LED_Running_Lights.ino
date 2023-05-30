// LED_Running_Lights.ino
// Date: 2020/04/17

int led_array[8] = { 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
int flash_speed = 500 ;

/* flash led form left to right one by one */
void led_flash(void)
{
    for(int i = 0; i < 8; i++)
    {
        digitalWrite(led_array[i], LOW);
        delay(flash_speed);
        digitalWrite(led_array[i], HIGH);
    }
}

/* turn on all led form left to right */
void led_turn_on(void)
{
    for(int i = 0; i < 8; i++)
    {
        digitalWrite(led_array[i], LOW);
        delay(flash_speed);
    }
}

/* turn off all led  */
void led_turn_off(void)
{
    for(int i = 0; i < 8; i++ )
    {
        digitalWrite(led_array[i], HIGH);
        delay(flash_speed);
    }
}

void setup() 
{
    Serial.begin(115200);
    for(int i = 0; i < 8; i++)
    {
        pinMode(led_array[i], OUTPUT);
        // set led control pin defalut HIGH turn off all LED
        digitalWrite(led_array[i], HIGH);   
    }
}

void loop() 
{
    Serial.println("start flash led!");
    led_flash();
    led_turn_off();
    led_turn_on();
}
