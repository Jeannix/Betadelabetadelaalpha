#include "Prueba.h"

Vehiculo::Vehiculo(const string &myLicencia, const string myAnho, const int misRuedas){
    licencia=myLicencia;
    anho=myAnho;
    ruedas=misRuedas;
}

const string Vehiculo::getDesc()
    {return licencia + " from " + anho;}
const string Vehiculo::getLicencia()
    {return licencia;}
const string Vehiculo::getAnho()
    {return anho;}
const int Vehiculo::getRuedas()
    {return ruedas;}
