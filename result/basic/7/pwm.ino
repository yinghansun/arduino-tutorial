// pwm.ino
// Date: 2020/04/18

int   ADPIN      = A0 ;
int   PWM_LEDPIN = 11 ;
int   value      = 0 ;
float voltage    = 0.0 ;

void setup()
{
    pinMode(ADPIN, INPUT);           // define ADPIN input PWM_LEDPIN output
    pinMode(PWM_LEDPIN, OUTPUT);
    Serial.begin(9600);              //Serial Baud rate is 115200
}

void loop()
{
    value = analogRead(ADPIN);       //read analog pin raw data

    voltage = (float)value / 1023;
    Serial.print("voltage==");
    Serial.println(voltage);

    value = (int)(voltage * 256);    //covert to voltage to PWM duty cycle
    Serial.print("value==");
    Serial.println(value);

    analogWrite(PWM_LEDPIN,value);
    delay(1000);
}
