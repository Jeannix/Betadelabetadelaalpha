#include <iostream>
using namespace std;

int main()
{
    cout << "Problema 6" << endl;
    double numa , numb,resultado;
    char opera;
    cout << "Ingresa un operador y dos numeros de esta manera: op a b " << endl;
    cin >> opera >> numa >> numb;
    bool cortador = true;
    while (cortador)
    {
        if(opera=='+' || opera == '-' || opera == '*' || opera == '/')
        {
        cortador = false;
        if (opera == '+'){resultado = numa + numb;}
        else if (opera == '-'){resultado = numa - numb;}
        else if (opera == '*'){resultado = numa * numb;}
        else if (opera == '/'){resultado = numa / numb;}
        cout << "Los valores ingresados fueron " << endl;
        cout << numa << "    " << numb <<endl <<  "El operador escogido fue " << opera << endl;
        cout << "El resultado es " << endl;
        cout << resultado << endl;
        }
        else
        {
        cout << endl << endl << "Ha ingresado un operador incorrecto" << endl;
        break;
        }
    }

}
