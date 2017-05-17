#include "reta.h"
#include <iostream>
using namespace std;

Reta::Reta(int x1, int x2, int y1, int y2)
{
    this->x1 = x1;
    this->x2 = x2;
    this->y1 = y1;
    this->y2 = y2;
}
void Reta::draw(Screen &t)
{
    //equação da reta (y = ax + b)
    //algoritmo de bresenham:
    /*int slope;
    int dx, dy, incE, incNE, d, x, y;
    int aux = 0;
    //inverte a linha x1 > x2
    if (x1 > x2){
        aux = x1;
        x1 = x2;
        x2 = aux;
    }
    dx = x2 - x1;
    dy = y2 - y1;

    if (dy < 0){
        slope = -1;
        dy = -dy;
    }
    else{
        slope = 1;
    }
    // Constante de Bresenham
    incE = 2 * dy;
    incNE = 2 * dy - 2 * dx;
    d = 2 * dy - dx;
    y = y1;
    for (x = x1; x <= x2; x++){
        t.setpixel(x, y);
        if (d <= 0){
            d += incE;
        }
        else{
            d += incNE;
            y += slope;
        }
    }*/
    int i=0,j=0;
    for(float a=0.0; a < 1; a+=0.01){ //a = parametro da reta
        i =(int) (x1 + a*(x2-x1));
        j =(int) (y1 + a*(y2-y1));
        t.setpixel(i,j);
    }

}
