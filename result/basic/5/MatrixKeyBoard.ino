// MatrixKeyBoard.ino
// Date: 2020/04/18

#include "Keypad.h"

#define   ROW_1   4
#define   ROW_2   5
#define   ROW_3   6
#define   ROW_4   7
#define   COL_1   8
#define   COL_2   9
#define   COL_3   10
#define   COL_4   11

const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns

char hexaKeys[ROWS][COLS] = {
    {'1','2','3','A'},
    {'4','5','6','B'},
    {'7','8','9','C'},
    {'*','0','#','D'}
};
byte rowPins[ROWS] = {ROW_1, ROW_2, ROW_3, ROW_4};
byte colPins[COLS] = {COL_1, COL_2, COL_3, COL_4};

Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);

void setup()
{
    for(int i=0; i < ROWS; i++)
    {
        pinMode(rowPins[i], OUTPUT);
        pinMode(colPins[i], OUTPUT);
    }
    Serial.begin(115200);
}

void loop()
{
    char customKey = customKeypad.getKey();
    if (customKey){
        Serial.println(customKey);
    }
}
