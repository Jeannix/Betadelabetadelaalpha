#include <iostream>
#include <Prueba.h>
#include <Auto.h>
#include <Bicicleta.h>

using namespace std;

int main()
{
    cout << "Licencia, Descripcion, Estilo y Ruedas del Auto" << endl;
    Auto bc("ISO3002","1993","Mustang",5);
    cout << bc.getDesc() << endl;
    cout << bc.getLicencia() << endl;
    cout << bc.getStyle() << endl;
    cout << bc.getRuedas() << endl;
    Bicicleta d("0","0","BMX",2);
    cout << "Ruedas y estilo de la Bicicleta" << endl;
    cout << d.getRuedas() << endl;
    cout << d.getStyle() << endl;
    return 0;
}
