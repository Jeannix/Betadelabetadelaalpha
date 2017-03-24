#include <iostream>

using namespace std;

int main()
{
    float a;
//    cout<<"Ingrese el valor de a: ";
//    cin >> a;
    float b;
//    cout<<"Ingrese el valor de b: ";
//    cin >> b;
    float d;
    cout<<"Ingrese el valor del radio d: " << endl;
    cin>> d;
    float e;
    float pi = 3.1416;

    // Operaciones Fundamentales

//    float c=a+b;
//    cout << "La Suma de "<< a <<" y de "<< b <<" es: "<< c << endl;
//    c=a-b;
//    cout << "La Resta de "<< a <<" y de "<< b <<" es: "<< c << endl;
//    c=a*b;
//    cout << "La Multiplicacion de "<< a <<" y de "<< b <<" es: "<< c << endl;
//    c=a/b;
//    cout << "La Division de "<< a <<" y de "<< b <<" es: "<< c << endl;

    //Areas de las figuras geometricas

    cout << "El diametro es: " << 2*d << endl;
    cout << "El area del circulo es:" << pi*(d*d) << endl;
    cout << "Ingrese la altura del rectangulo: " << endl;
    cin>> d;
    cout << "Ingrese la base del rectangulo: " << endl;
    cin>> e;
    cout << "El area del rectangulo es: " << e*d << endl;
    cout << "Ingrese el valor de un lado del cuadrado" << endl;
    cin>> e;
    cout << "El area del cuadrado es: " << e*e << endl;

    //Intercambio de Variables

    cout << "Ingrese el valor de a: " << endl;
    cin >> a;
    cout << "Ingrese el valor de b: " << endl;
    cin >> b;
    cout << "Ahora habra un intercambio de valores de a=" << a << " y b=" << b << endl;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout << "a="<< a << " y b=" << b << endl;

    //Comparacion de variables

    cout << "Ingrese un numero: " << endl;
    cin >> d;
    cout << "Ingrese otro numero: " << endl;
    cin >> e;
    if (d>e){
        cout << "El numero mayor es :" << d << endl;
    }
    else{
        cout << "El numero mayor es :" << e << endl;
    }

    //Intercambio de solo 2 variables

    cout << "Ingrese un numero: " << endl;
    cin >> a;
    cout << "Ingrese un numero: " << endl;
    cin >> b;
    cout << "Los valores ingresados son: " << a << " y " << b << endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout << "Los valores intercambiados son: " << a << " y " << b << endl;
    cout << endl;
    cout << "GG EZ :V" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "okno no me jale profe plox :'v" << endl;
    return 0;
}
