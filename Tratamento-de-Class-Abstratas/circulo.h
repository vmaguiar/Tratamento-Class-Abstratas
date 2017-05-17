#ifndef CIRCULO_H
#define CIRCULO_H
#include "figurageometrica.h"
using namespace std;

class Circulo : public FiguraGeometrica
{
private:
    int xc, yc; // coordenada do centro
    int raio, preencher;
public:
    Circulo(int x, int y, int r, int p);
    void draw(Screen &t);
};

#endif // CIRCULO_H
