#ifndef AVION_H
#define AVION_H


class Avion
{
    public:
        Avion();
        Avion(int n_Vuelo1, int n_Av);
        virtual void responda()=0;
        int getVuelo();
        int getAvion();
    protected:
        int n_Vuelo;
        int n_Av;
};

#endif // AVION_H
