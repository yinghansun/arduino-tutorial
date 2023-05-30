// Buzzer.ino
// Date: 2020/04/22

int buzzer = 9;

void frequence_1(void)    // 1k HZ
{
    for(int i=0; i<800; i++)
    {
      	digitalWrite(buzzer, HIGH);  // sound production
      	delay(0.5);
      	digitalWrite(buzzer, LOW);
      	delay(0.5);
    }
}

void frequence_2(void)    // 250 HZ
{
    for(int i=0; i<800; i++)
    {
      	digitalWrite(buzzer, HIGH);  // sound production
      	delay(2);
      	digitalWrite(buzzer, LOW);
      	delay(2);
    }
}

void setup()
{
    pinMode(buzzer, OUTPUT);
}

void loop() 
{
    frequence_1();
    delay(1000);
    frequence_2();
    delay(1000);
}


