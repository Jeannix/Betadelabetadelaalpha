#ifndef PERSONA_H
#define PERSONA_H
#include <string>
#include <Cumpleanho.h>

using namespace std;

class Persona
{
protected:
    string nombre;
    string empleo;
    Cumpleanho birthday;
public:
    Persona(const string minombre, const string miempleo, Cumpleanho mybirthday);
    virtual int getEdad() = 0;
    const string getNombre();
    const string getEmpleo();


//        virtual ~Persona();

};

#endif // PERSONA_H
