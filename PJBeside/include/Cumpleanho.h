#ifndef CUMPLEANHO_H
#define CUMPLEANHO_H
#include <string>

class Cumpleanho
{
protected:
    int dia;
    int mes;
    int anho;

public:
    Cumpleanho(int midia, int mimes, int mianho);
    const int getDia();
    const int getMes();
    const int getAnho();
    virtual const int getEdad(int a);


};

#endif // CUMPLEAÒOS_H
