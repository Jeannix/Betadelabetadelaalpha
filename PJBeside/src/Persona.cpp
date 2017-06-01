#include "Persona.h"
#include "Cumpleanho.h"

Persona::Persona(const string minombre, const string miempleo, Cumpleanho _mybirthday){
    mybirthday = _mybirthday;
    nombre=minombre;
    empleo=miempleo;
}
const string Persona::getNombre()
    {return nombre;}
const string Persona::getEmpleo()
    {return empleo;}

//Persona::~Persona()
//{
    //dtor
//}
