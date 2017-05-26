#ifndef PERSONA_H
#define PERSONA_H
#include <string>

using namespace std;

class Persona
{
protected:
    int edad;
    string nombre;
    string empleo;
public:
    Persona(const int miedad, const string minombre, const string miempleo);
    virtual const int getEdad();
    const string getNombre();
    const string getEmpleo();


//        virtual ~Persona();

};

#endif // PERSONA_H
