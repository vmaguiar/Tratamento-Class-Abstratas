#include "screen.h"
#include <vector>
#include <fstream>

Screen::Screen()
{
    //redimensionar a matriz de acordo com o valor passado de num de linhas
    // e colunas pelo usuario.
}
void Screen::tamanho(int nlinhas, int ncolunas)
{
    this->nlinhas = nlinhas;
    this->ncolunas = ncolunas;

    matriz.resize(nlinhas);
    for(int i=0;i<nlinhas;i++){
        matriz[i].resize(ncolunas);
    }
    /*for(int i=0; i<nlinhas; i++){
        for(int j=0; j<ncolunas; j++){
            matriz[i][j] = ' ';
        }
    }*/
}

void Screen::setpixel(int x, int y)
{
    //coloca o valor do char brush para o desenho na matriz
    //(que de inicio esta vazia).
    matriz[x][y] = brush;
}

void Screen::clear()
{
    //limpar a matriz com espaços
    for(int i=0; i<nlinhas; i++){
        for(int j=0; j<ncolunas; j++){
            matriz[i][j] = ' ';
        }
    }
}

void Screen::setbrush(char brush)
{
    this->brush = brush;
}

int Screen::getlinhas()
{
    return(nlinhas);
}

int Screen::getcolunas()
{
    return(ncolunas);
}
ostream &operator<<(ostream &os, Screen &t)
{
    for(int i=0; i< t.nlinhas; i++){
        for(int j=0; j< t.ncolunas; j++){
            os<<t.matriz[i][j]<<' ';
        }
        os<<endl;
    }
}
