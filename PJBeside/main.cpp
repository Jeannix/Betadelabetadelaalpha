#include <iostream>
#include <Persona.h>
#include <Cumpleanho.h>

using namespace std;

int main()
{
    Persona Dn(23,"Jose","Gerente");
    cout << Dn.getEmpleo() << endl;
    Cumpleanho N(26,05,1993);
    cout << "Edad: "<< N.getEdad(2016)<< " Dia: "<< N.getDia()<< " Mes: " << N.getMes() << " Anho: "<< N.getAnho() << endl;
    return 0;
}
