// Orhun Dogan 
// October 6th 2020
// This program displays a bar chart

#include "graphic.h"

int main(void) {

    // Lines 
    drawLine(30,30,30,230);
    drawLine(25,230,430,230);
    drawLine(30,180,25,180);
    drawLine(30,130,25,130);
    drawLine(30,80,25,80);

    // Strings
    drawString("150", 0, 80);
    drawString("100", 0, 130);
    drawString("50", 0, 180);
    drawString("CDs", 60, 240);
    drawString("DVDs", 140, 240);
    drawString("Books", 220,240);
    drawString("Clothes", 300, 240);
    drawString("Shoes", 380, 240);

    // Rectangles
    setColour(black);
    fillRect(30, 175, 80, 55);
    setColour(yellow);
    fillRect(110,92, 80, 138);
    setColour(red);
    fillRect(190, 110, 80, 120);
    setColour(blue);
    fillRect(270,130, 80, 100);
    setColour(green);
    fillRect(350, 92, 80, 138);




    return 0;
}