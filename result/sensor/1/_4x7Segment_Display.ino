// _4x7Segment_Display.ino
// Date: 2020/05/03

#include "TM1637.h"
#define CLK A5
#define DIO A4

int8_t Disp[] = {1, 2, 3, 4};

TM1637 _4Segment_Display(CLK, DIO);

void setup()
{
    _4Segment_Display.set();
    _4Segment_Display.init();
    _4Segment_Display.point(POINT_OFF);
}
void loop()
{
    _4Segment_Display.display(Disp);
    while(1);
}