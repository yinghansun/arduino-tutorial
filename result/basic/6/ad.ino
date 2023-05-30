// ad.ino
// Date: 2020/04/22

int   ADPIN   = A0 ;
int   LEDPIN  = 13 ;
int   value   = 0 ;
float voltage = 0.0 ;

void setup()
{
    pinMode(ADPIN, INPUT);   // define ADPIN to be input 
	pinMode(LEDPIN, OUTPUT); // define LEDPIN to be output
    Serial.begin(9600);      // Serial Baud rate is 115200
}

void loop()
{
    digitalWrite(LEDPIN, HIGH);          // light on led
    value =  analogRead(ADPIN);          // read analog pin raw data
    voltage = ((float)value ) / 1023 ;
    voltage = voltage * 5 ;              // convert analog raw data to real voltage = (analog/1023)*5
    Serial.print("get ad pin value ");   // printf Analog pin value
    Serial.print(value);
    Serial.println("\nvoltage =  ");
    Serial.println(voltage);
    delay(1000);
    digitalWrite(LEDPIN, LOW);           // turn off led
}