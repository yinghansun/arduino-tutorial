// MagicLED.ino
// Date: 2020/05/03

const int  LED_PIN=A0;
const int  SWITCH_PIN=A1;  

void setup() 
{  
  pinMode(LED_PIN, OUTPUT);
  pinMode(SWITCH_PIN, INPUT);
  Serial.begin(9600);
}

void loop() 
{  
    int value = digitalRead(SWITCH_PIN);
    Serial.println(value);
    if(value==0)
    { 
        digitalWrite(LED_PIN, HIGH); 
    } 
    else 
    {  
        digitalWrite(LED_PIN, LOW); 
    } 
}