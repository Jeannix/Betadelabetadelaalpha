#include "Persona.h"
#include "Cumpleanho.h"

Persona::Persona(const string minombre, const string miempleo, Cumpleanho mybirthday){
    birthday = mybirthday;
    nombre=minombre;
    empleo=miempleo;
}
const string Persona::getNombre()
    {return nombre;}
const string Persona::getEmpleo()
    {return empleo;}
