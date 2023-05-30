// FigureSensor.ino
// Date: 2020/05/03

int Led_pin=A5;
int Sensor_pin=A0;

void setup() 
{  
    pinMode(Led_pin, OUTPUT); 
    pinMode(Sensor_pin, INPUT);
    Serial.begin(9600);
}  

void loop() 
{  
    int value=digitalRead(Sensor_pin);
    Serial.println(value);
    if(value==1)
    { 
        digitalWrite(Led_pin, HIGH); 
    } 
    else 
        digitalWrite(Led_pin, LOW); 
    } 
}