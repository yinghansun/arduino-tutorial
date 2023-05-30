// RGB_Breathing_Light.ino
// Date: 2020/04/17

#define RGB_RED    11
#define RGB_GREEN  10
#define RGB_BLUE   9

void setup()
{
    pinMode(RGB_RED, OUTPUT);
    pinMode(RGB_GREEN, OUTPUT);
    pinMode(RGB_BLUE, OUTPUT);
}

void setColor(int r, int g, int b)
{
    analogWrite(RGB_RED, r);
    analogWrite(RGB_GREEN, g);
    analogWrite(RGB_BLUE, b);
}

void loop()
{
    for(int i=0; i<256; i++)
    {
        setColor(i,0,0);
        delay(10);
    }
    delay(1000);

    for(int i=0; i<256; i++)
    {
        setColor(0,i,0);
        delay(10);
    }
    delay(1000);
  
    for(int i=0; i<256; i++)
    {
        setColor(0,0,i);
        delay(10);
    }
    delay(1000);
}