// This code draws a line and puts a green rectangle on it

#include "graphic.h"

int main(void) {

    drawLine(0,0,499,299);
    setColour(green);
    fillRect(150,50,100,200);
    return 0;
}