#ifndef CONSERJE_H
#define CONSERJE_H
#include <Persona.h>
#include <Cumpleanho.h>

class Conserje : public Persona
{
protected:
    int salario;
public:
    Conserje(const string minombre, const string miempleo, Cumpleanho mybirthday, const int miSalario);
    int getEdad();
    const string getNombre();
    const string getEmpleo();
    const int getSalario();

};
#endif // CONSERJE_H
