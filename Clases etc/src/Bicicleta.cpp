#include "Bicicleta.h"
#include "Prueba.h"

Bicicleta :: Bicicleta(const string &myLicencia, const string myAnho, const string &myStyle, const int misRuedas)
        : Vehiculo(myLicencia, myAnho, misRuedas), style(myStyle) {}
const string Bicicleta :: getStyle()
{
    return style;
}
const int Bicicleta :: getRuedas()
{
    return ruedas;
}


