// Reed_Switch_Module.ino
// Date: 2020/05/02

int Led_pin=11;
int Buzzer_pin=13;
int Sensor_pin=12; 

void setup() 
{  
    pinMode(Led_pin, OUTPUT);
    pinMode(Buzzer_pin, OUTPUT);
    pinMode(Sensor_pin, INPUT);
    Serial.begin(9600);
}  

void loop() 
{  
    int value=digitalRead(Sensor_pin);
    Serial.println(value);
    if(value==0)
    { 
        digitalWrite(Led_pin, HIGH); 
        digitalWrite(Buzzer_pin, HIGH);
    } 
    else 
    {  
        digitalWrite(Led_pin, LOW); 
        digitalWrite(Buzzer_pin, LOW);
    } 
}