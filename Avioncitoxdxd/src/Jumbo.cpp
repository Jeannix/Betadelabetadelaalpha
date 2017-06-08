#include "Jumbo.h"

Jumbo::Jumbo()
{
    this -> modelo = NULL;
    this -> year = NULL;
    this -> color = NULL;
}
Jumbo::Jumbo(char *modelo1,int year1,char *color1)
{
    modelo = new char[20];
    this -> modelo = modelo1;
    this -> year = year1;
    color = new char [20];
    this -> color = color1;
}
Jumbo::~Jumbo()
{
    delete[] modelo;
    delete[] color;
}
void Jumbo::Saludo()
{
    cout <<"Hola soy un : "<<modelo<<endl;
    cout <<"Fui fabricado en el "<<year<<endl;
}
int Jumbo::getYear(){return year;}
