#include "Avion.h"

Avion::Avion()
{
    n_Vuelo=0;
    n_Av=0;
}
Avion::Avion(int n_Vuelo1, int n_Av)
{
    n_Vuelo1=n_Vuelo;
    n_Av1=n_Av;
}
int Avion::getVuelo()
    {return n_Vuelo;}
int Avion::getAvion()
    {return n_Av;}
