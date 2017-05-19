#ifndef BICICLETA_H
#define BICICLETA_H
#include <Prueba.h>

class Bicicleta : public Vehiculo
{
    string style;
public:
    const string &getStyle() {return style;}
};

#endif // BICICLETA_H
