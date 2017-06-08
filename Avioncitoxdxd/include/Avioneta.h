#ifndef AVIONETA_H
#define AVIONETA_H
#include <Avion.h>

class Avioneta : public Avion
{
public:
        Avioneta();
        Avioneta(char *modelo1,int year1, char *color1);
        virtual ~Avioneta();
        void Saludo();
        char getModelo();
        int getYear();
    private:
        char *modelo;
        int year;
        char *color;
};

#endif // AVIONETA_H
