#include <iostream>

using namespace std;

int exponentep(int base, int exponente)
{
    if (exponente==0 and base !=0){
        return 1;
    }
    if (exponente!=0 and base ==0){
        return 0;
    }
    if (exponente==0 and base ==0){
        cout<<"Indeterminado"<<endl;
    }
    return (base^exponente);
}


int main()
{
    cout<<"Problema 4"<<endl;
    int base,exponente;
    cout<<"Ingrese la base"<<endl;
    cin>>base;
    cout<<"Ingrese la exponente"<<endl;
    cin>>exponente;
    cout<<exponentep(base,exponente)<<endl;


}
