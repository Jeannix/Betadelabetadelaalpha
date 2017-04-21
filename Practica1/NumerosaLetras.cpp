#include <iostream>

using namespace std;

int main5()
{
    cout<<"Problema 5"<<endl;
    int num1;
    cout << "Ingresar un numero del 0 al 9 : ";
    cin >> num1;
    cout << "" << endl;
    bool cont1 = true;
    if (num1 != -1){
        while (cont1 == true){
        switch(num1){
            case 0:
                cout << "cero" <<endl;
                break;
            case 1:
                cout << "uno" <<endl;
                break;
            case 2:
                cout << "dos" <<endl;
                break;
            case 3:
                cout << "tres" <<endl;
                break;
            case 4:
                cout << "cuatro" <<endl;
                break;
            case 5:
                cout << "cinco" <<endl;
                break;
            case 6:
                cout << "seis" <<endl;
                break;
            case 7:
                cout << "siete" <<endl;
                break;
            case 8:
                cout << "ocho" <<endl;
                break;
            case 9:
                cout << "nueve" <<endl;
                break;
            case -1:
                cont1 = false;
                cout << "FIN" <<endl;
                break;
            default:
                cout <<"Numero no permitido" <<endl;
                break;
            }
            if (cont1 == true){
                cout << "Ingresar un numero del 0 al 9 : ";
                cin >> num1;
                cout << "" << endl;
            }
        }
    }


  return 0;
}





