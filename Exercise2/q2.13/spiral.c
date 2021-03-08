// Orhun Dogan
// October 15th 2020
// This program displays a spiral using a series of points


#include <math.h>
#include "graphics.h"

#define PI 3.14159265

int main(void) {

    double radius, theta;
    double increment = 2.0*PI/100.0;
    int step;

    for(step = 0; step<1500;++step){
        theta+=increment;
        radius = 75.0*step/1000.0;
        int x = 250+(int)(radius*cos(theta));
        int y = 150 + (int)(radius*sin(theta));
        drawRect(x,y,1,1);
    }

    return 0;
}