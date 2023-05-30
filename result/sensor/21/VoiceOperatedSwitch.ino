// VoiceOperatedSwitch.ino
// Date: 2020/05/02

int Voice_pin = A0 ;     // define analog 0 pin for voice-sensor pin  
int LED_pin = 11;

void setup()
{  
    pinMode(LED_pin, OUTPUT);   
    pinMode(Voice_pin, INPUT);       
    digitalWrite(LED_pin, LOW);      
    Serial.begin(9600);
}

void loop()
{
    int value = analogRead(Voice_pin); 
    Serial.println(value);
    if(value >48)              
    {
        digitalWrite(LED_pin, HIGH);  
        delay(500);
    }
    else
    {
        digitalWrite(LED_pin, LOW);      
    }  
}