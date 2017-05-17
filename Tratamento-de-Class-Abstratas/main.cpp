#include <iostream>
#include <fstream>
#include <cstring>
#include "figurageometrica.h"
#include "circulo.h"
#include "reta.h"
#include "retangulo.h"

using namespace std;

int main()
{
    Screen tela;
    int x0, y0, xe, ye, largura, altura, raio, preenchido;
    ifstream arqEntrada;
    ofstream arqSaida;
    char comandos[10];
    char pincel;
    arqEntrada.open("C:/Users/vmagu/Desktop/COMANDOS.txt");
    arqSaida.open("C:/Users/vmagu/Desktop/DESENHOS.txt");

    arqEntrada>>comandos;

    if(!arqEntrada.is_open()){
        cout<<"nao abriu o arquivo"<<endl;
        exit(0);
    }
    if(!arqSaida.is_open()){
        cout<<"nao abriu o arquivo saida"<<endl;
        exit(0);
    }
    while(arqEntrada.good()){
        if(strcmp("circle", comandos)==0){
            arqEntrada>>x0>>y0>>raio>>preenchido;
            Circulo circle(x0, y0, raio, preenchido);
            circle.draw(tela);
            cout<<"circulo com centro em: "<<x0<<" "<<y0<<" e raio = "<<raio<<endl;
        }
        else if (strcmp("rectangle", comandos)==0){
            arqEntrada>>x0>>y0>>largura>>altura;
            Retangulo rectangle(x0, y0, largura, altura);
            rectangle.draw(tela);
            cout<<"Retangulo com vertice em : ("<<x0 <<", "<< y0<<"); largura: "<< largura << " e altura: "<< altura <<endl;
        }
        else if(strcmp("line", comandos)==0){
            arqEntrada>>x0>>y0>>xe>>ye;
            Reta line(x0, y0, xe, ye);
            line.draw(tela);
            cout<<"reta com P0: ("<<x0<<", "<<y0<<") e P1:("<<xe<<", "<<ye<<")"<<endl;
        }
        else if(strcmp("brush", comandos)==0){
            arqEntrada>>pincel;
            tela.setbrush(pincel);
            cout<<"pincel: "<<pincel<<endl;
        }
        else if(strcmp("dim", comandos)==0){
            arqEntrada>>x0>>y0;
            tela.tamanho(x0,y0);
            cout<<"dimensao: "<<x0<<" "<<y0<<endl;
        }
        else if(!strcmp("clear", comandos)){
            tela.clear();
            cout<<"limpou a tela"<<endl;
        }
        arqEntrada>>comandos;
    }
    arqSaida<<tela;
    arqSaida.close();
    arqEntrada.close();
}
