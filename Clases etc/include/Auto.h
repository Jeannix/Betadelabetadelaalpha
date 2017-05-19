#ifndef AUTO_H
#define AUTO_H
#include <Prueba.h>

class Auto : public Vehiculo
{
    string style;
public:
    Auto(const string &myLicencia, const string myAnho, const string &myStyle, const int misRuedas)
        : Vehiculo(myLicencia, myAnho, misRuedas), style(myStyle) {}
    const string &getStyle() {return style;}
    const int getRuedas() const {return ruedas;}
};

#endif // AUTO_H
