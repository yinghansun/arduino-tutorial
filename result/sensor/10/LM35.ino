// LM35.ino
// datee: 2020/05/03

int Temp_Pin = A0; 

void setup()
{
    Serial.begin(115200);      
}

void loop()
{
    int value = analogRead(Temp_Pin);   
    float voltage = ((float)value) / 1023 ;
    voltage = voltage * 5 ;  
    int date = voltage * 100;  
    Serial.print("Current Temp : ");
    Serial.print(date);
    Serial.println("C");
    delay(500);     
}