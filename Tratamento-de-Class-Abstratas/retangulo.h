#ifndef RETANGULO_H
#define RETANGULO_H
#include "figurageometrica.h"
using namespace std;
class Retangulo : public FiguraGeometrica
{
private:
    int largura, altura, xesq, yesq;
public:
    Retangulo(int x, int y, int l, int a);
    void draw(Screen &t);
};

#endif // RETANGULO_H
