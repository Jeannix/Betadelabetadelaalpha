#include "Cumpleanho.h"
#include "Persona.h"
Cumpleanho::Cumpleanho()
{
    anho = 0;
    mes = 0;
    dia = 0;
}
Cumpleanho::Cumpleanho(int midia, int mimes, int mianho){
    dia=midia;
    mes=mimes;
    anho=mianho;
}
const int Cumpleanho::getDia()
    {return dia;}
const int Cumpleanho::getMes()
    {return mes;}
const int Cumpleanho::getAnho()
    {return anho;}

