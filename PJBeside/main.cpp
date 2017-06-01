#include <iostream>
#include <Persona.h>
#include <Cumpleanho.h>

using namespace std;

int main()
{
    Cumpleanho N(26,05,1993);
    cout << "Edad: "<< N.getEdad(2016)<< " Dia: "<< N.getDia()<< " Mes: " << N.getMes() << " Anho: "<< N.getAnho() << endl;
    return 0;
}
