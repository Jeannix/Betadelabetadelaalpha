#ifndef GERENTE_H
#define GERENTE_H
#include <Persona.h>
#include <Cumpleanho.h>

class Gerente : public Persona
{
protected:
    int salario;
public:
    Gerente(const string minombre, const string miempleo, Cumpleanho mybirthday, const int miSalario);
    int getEdad();
    const string getNombre();
    const string getEmpleo();
    const int getSalario();

};

#endif // GERENTE_H
