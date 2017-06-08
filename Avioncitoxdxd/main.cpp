#include <iostream>
#include <Avion.h>
#include <Avioneta.h>
#include <Jumbo.h>
#include <Torre.h>

using namespace std;

int main()
{
    Avioneta Av1();
    Avioneta Av2("Avioneta",1998,"RojoAzulado");
    Jumbo Ju1();
    Jumbo Ju2("Jumbo",2002,"VerdeCamuflado");
    Torre torreA;
    torreA.agregarAvion(&Av2);
    torreA.imprimirMensaje();
    torreA.agregarAvion(&Ju2);
    torreA.imprimirMensaje();
}
