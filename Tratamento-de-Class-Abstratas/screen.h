#ifndef SCREEN_H
#define SCREEN_H
#include <vector>
#include <fstream>
using namespace std;

class Screen
{
private:
    int nlinhas, ncolunas;
    char brush;
    vector< vector<char> >matriz;
public:
    Screen();
    void tamanho( int nlinhas, int ncolunas);
    void setpixel(int x, int y);
    void clear();
    void setbrush(char brush);
    friend ostream &operator<<(ostream &os, Screen &t);
    int getlinhas();
    int getcolunas();
};

#endif // SCREEN_H
