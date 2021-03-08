// Orhun Dogan
// October 22nd 2020
// This program draws a shape

#include <stdio.h>
#include "graphic.h"

void pattern(){
    const int squareSize = 15;
    const int width = 20;
    const int height = 20;

    colour colourCycle[] = {blue, blue, blue, yellow, blue, yellow, yellow, yellow, blue, yellow};

    int cycleLength = sizeof(colourCycle) / sizeof(colour);
    int rowStartColourIndex = 0;
    for(int row = 0; row<height; row++){
        int nextColourIndex = rowStartColourIndex;
        rowStartColourIndex = (rowStartColourIndex+3) % cycleLength;
        for(int column = 0; column < width; column++){
            setColour(colourCycle[nextColourIndex++ % cycleLength]);
            fillRect(column*squareSize, row*squareSize, squareSize, squareSize);
        }
    }
}

int main(void){
    pattern();
}