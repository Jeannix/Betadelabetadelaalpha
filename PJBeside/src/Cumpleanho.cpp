#include "Cumpleanho.h"
#include "Persona.h"
Cumpleanho::Cumpleanho(int midia, int mimes, int mianho){
    dia=midia;
    mes=mimes;
    anho=mianho;
}
const int Cumpleanho::getEdad(int a)
{
    return a-anho;
}
const int Cumpleanho::getDia()
    {return dia;}
const int Cumpleanho::getMes()
    {return mes;}
const int Cumpleanho::getAnho()
    {return anho;}

