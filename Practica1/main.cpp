#include <iostream>

using namespace std;

int main2()
{
    cout<<"Problema 1"<<endl;
    const float km=1.60934;
    float millas;
    cout<<"Ingrese las millas"<<endl;
    cin>>millas;
    if (millas>=0){
        cout<<"Las millas ingresadas fueron "<<millas<<endl;
        cout<<"El resultado es "<<km*millas<<endl;
    }
    cout <<"Solo se permiten valores positivos"<<endl;


    return 0;
}
