#include "Persona.h"

Persona::Persona(const int miedad, const string minombre, const string miempleo){
    edad=miedad;
    nombre=minombre;
    empleo=miempleo;
}
const int Persona::getEdad()
    {return edad;}
const string Persona::getNombre()
    {return nombre;}
const string Persona::getEmpleo()
    {return empleo;}

//Persona::~Persona()
//{
    //dtor
//}
