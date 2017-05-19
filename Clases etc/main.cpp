#include <iostream>
#include <Prueba.h>

using namespace std;

int main()
{
    Auto bc("ISO3002","1993","Mustang",5);
    cout << bc.getLicencia();
    return 0;
}
