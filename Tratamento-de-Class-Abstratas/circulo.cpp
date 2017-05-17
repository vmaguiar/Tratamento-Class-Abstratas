#include "circulo.h"
#include <iostream>
#include <cmath>
using namespace std;

Circulo::Circulo(int x, int y, int r, int p)
{
xc = x;
yc = y;
raio = r;
preencher = p;
}
void Circulo::draw(Screen &t)
{
    /* contorno do circulo*/
    if(preencher == 0){
        for(int i=0; i< t.getlinhas(); i++){
            for(int j=0; j<t.getcolunas(); j++){
                if(sqrt(pow(i-xc, 2) + pow(j-yc, 2)) == raio){
                    t.setpixel(i, j);
                }
            }
        }
    }
    else {
        for(int i=0; i< t.getlinhas(); i++){
            for(int j=0; j<t.getcolunas(); j++){
                if(sqrt(pow(i-xc, 2) + pow(j-yc, 2)) <= raio){
                    t.setpixel(i, j);
                }
            }
        }
    }
}
