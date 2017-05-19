#ifndef PRUEBA_H
#define PRUEBA_H
#include <string>

using namespace std;

class Vehiculo
{
protected:
    string licencia;
    string anho;
    int ruedas;
public:
    Vehiculo(const string &myLicencia, const string myAnho, const int misRuedas)
        : licencia(myLicencia), anho(myAnho), ruedas(misRuedas){}
    const string getDesc() const
        {return licencia + " from " + anho;}
    const string &getLicencia() const {return licencia;}
    const string getAnho() const {return anho;}
    const int getRuedas() const {return ruedas;}
};

class Auto : public Vehiculo
{
    string style;
public:
    Auto(const string &myLicencia, const string myAnho, const string &myStyle, const int misRuedas)
        : Vehiculo(myLicencia, myAnho, misRuedas), style(myStyle) {}
    const string &getStyle() {return style;}
    const int getRuedas() const {return ruedas;}
};
class Camion : public Vehiculo
{
    string style;
public:
    Camion(const string &myLicencia, const string myAnho, const string &myStyle, const int misRuedas)
        : Vehiculo(myLicencia, myAnho, misRuedas), style(myStyle) {}
    const string &getStyle() {return style;}
    const int getRuedas() const {return ruedas;}
};
class Bicicleta : public Vehiculo
{
    string style;
public:
    const string &getStyle() {return style;}
};

#endif // PRUEBA_H
