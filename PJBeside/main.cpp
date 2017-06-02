#include <iostream>
#include <Persona.h>
#include <Cumpleanho.h>
#include <Gerente.h>
#include <Conserje.h>
using namespace std;

int main()
{
    Cumpleanho N(26,5,1990);
    Gerente Jose("Jose", "Gerente", N,3500);
    Cumpleanho B(27,7,1982);
    Conserje Miguel("Miguel", "Conserje", B,1700);
    cout << Jose.getNombre() << endl;
    cout << Jose.getEdad() << endl;
    cout << Jose.getEmpleo() << endl;
    cout << Miguel.getNombre() << endl;
    cout << Miguel.getEdad() << endl;
    cout << Miguel.getEmpleo() << endl;

    return 0;
}
