#include <iostream>
#include <Persona.h>
#include <Cumpleanho.h>
#include <Gerente.h>
using namespace std;

int main()
{
    Cumpleanho N(26,05,1993);
    Gerente Jose("Jose", "Gerente", N,3500);
    cout << Jose.getEdad() << endl;
    cout << Jose.getEmpleo() << endl;

    return 0;
}
