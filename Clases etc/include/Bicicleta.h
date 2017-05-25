#ifndef BICICLETA_H
#define BICICLETA_H
#include <Prueba.h>

class Bicicleta : public Vehiculo
{
    string style;
public:
    Bicicleta(const string &myLicencia, const string myAnho, const string &myStyle, const int misRuedas);

    const string getStyle();/// {return style;}
    const int getRuedas();
};

#endif // BICICLETA_H
