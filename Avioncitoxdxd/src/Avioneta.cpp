#include "Avioneta.h"

Avioneta::Avioneta()
{
    this -> modelo = NULL;
    this -> year = NULL;
    this -> color = NULL;
}
Avioneta::Avioneta(char *modelo1,int year1,char *color1)
{
    modelo = new char[20];
    this -> modelo = modelo1;
    this -> year = year1;
    color = new char [20];
    this -> color = color1;
}
Avioneta::~Avioneta()
{
    delete[] modelo;
    delete[] color;
}
void Avioneta::Saludo()
{
    cout <<"Hola soy un : "<<modelo<<endl;
    cout <<"Fui fabricado en el "<<year<<endl;
}

int Avioneta::getYear(){return year;}
