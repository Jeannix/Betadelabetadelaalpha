#ifndef JUMBO_H
#define JUMBO_H
#include <Avion.h>

class Jumbo : public Avion
{
    public:
        Jumbo();
        Jumbo(char *modelo1,int year1, char *color1);
        virtual ~Jumbo();
        void Saludo();
        char getModelo();
        int getYear();
    protected:
        char *modelo;
        int year;
        char *color;
};

#endif // JUMBO_H
