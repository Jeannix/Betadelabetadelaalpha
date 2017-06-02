#include "Conserje.h"

Conserje::Conserje(const string minombre, const string miempleo, Cumpleanho mybirthday, const int miSalario)
    :Persona(minombre, miempleo, mybirthday), salario(miSalario) {}

int Conserje::getEdad()
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
const string Conserje::getNombre()
    {return nombre;}
const string Conserje::getEmpleo()
    {return empleo;}
const int Conserje::getSalario()
    {return salario;}
