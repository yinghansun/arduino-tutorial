// photosensitive.ino
// Date: 2020/05/02

int  AD_pin  = A0  ;
int  LED_pin = 11 ;
int  value = 0 ;
float voltage = 0.0 ;

void setup()
{
    pinMode(LED_pin, OUTPUT);
    pinMode(AD_pin, INPUT);
    Serial.begin(9600); 

void loop()
{
    int value =  analogRead(AD_pin);    
    int voltage = ((float)value) / 1023 ;
    value = (int)(voltage*256) ;              //convert voltage to value
    Serial.println(value);
    analogWrite(LED_pin, value);
 
}