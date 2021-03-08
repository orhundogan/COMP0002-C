// Orhun Dogan
// October 6th 2020
// This program draws a sine wave

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "graphics.h"


int main() {
int prevx=0;
int prevy=0;
int y=0;
for (int radiant=0;radiant<100;radiant++) {
    prevy=y;

    y=(int)(sin(radiant/(2*M_PI))*100);
    if (radiant>0) {
        y=100-y;
        drawLine(radiant-1,prevy,radiant,y);
    }
}

}