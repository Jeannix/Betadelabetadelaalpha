#include "Auto.h"
#include "Prueba.h"

Auto :: Auto(const string &myLicencia, const string myAnho, const string &myStyle, const int misRuedas)
        : Vehiculo(myLicencia, myAnho, misRuedas), style(myStyle) {}
const string  Auto :: getStyle()
{
    return style;
}
const int Auto :: getRuedas()
{
    return ruedas;
}
const string Auto :: getDesc()
{
    return licencia + " from " + anho;
}

