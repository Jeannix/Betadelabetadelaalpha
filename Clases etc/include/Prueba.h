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
    Vehiculo(const string &myLicencia, const string myAnho, const int misRuedas);
        ///: licencia(myLicencia), anho(myAnho), ruedas(misRuedas){}
    const string getDesc(); ///const
        ///{return licencia + " from " + anho;}
    const string getLicencia(); ///const {return licencia;}
    const string getAnho(); ///const {return anho;}
    const int getRuedas(); ///const {return ruedas;}
};

#endif // PRUEBA_H
