#include "Gerente.h"

Gerente::Gerente(const string minombre, const string miempleo, Cumpleanho mybirthday, const int miSalario)
    :Persona(minombre, miempleo, mybirthday), salario(miSalario) {}

int Gerente::getEdad()
{
    int esteanho = 2017;
    int estemes = 6;
    int estedia = 1;
    int laedad = esteanho - birthday.getAnho();
    if (birthday.getMes() > estemes){
        laedad=laedad-1;
    }
    else {
        if (birthday.getMes() == estemes){
            if (birthday.getDia() > estedia){
                laedad = laedad -1;
            }
        }
    }
    return laedad;
}
const string Gerente::getNombre()
    {return nombre;}
const string Gerente::getEmpleo()
    {return empleo;}
const int Gerente::getSalario()
    {return salario;}
