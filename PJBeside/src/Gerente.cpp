#include "Gerente.h"

Gerente::Gerente(const string minombre, const string miempleo, Cumpleanho mybirthday, const int miSalario)
        :Persona(minombre, miempleo, birthday), salario(miSalario) {}
//Gerente::int getEdad()
//    return{Cumpleanho;}
const string Gerente::getNombre()
    {return nombre;}
const string Gerente::getEmpleo()
    {return empleo;}
const int Gerente::getSalario()
    {return salario;}
