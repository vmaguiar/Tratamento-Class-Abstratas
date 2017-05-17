#include "retangulo.h"
#include <iostream>
using namespace std;

Retangulo::Retangulo(int x, int y, int l, int a)
{
    xesq = x;
    yesq = y;
    largura = l;
    altura = a;
}
void Retangulo::draw(Screen &t)
{
    for(int i = yesq; i< yesq+altura; i++){
        for (int j = xesq; j<xesq+largura; j++){
            t.setpixel(i, j); // dar uma olhada dps se algo der errado :)
        }
    }
}
