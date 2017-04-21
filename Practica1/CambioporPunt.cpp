#include <iostream>
using namespace std;


void changeNumbers(int *r, int *s)
  {
     int temp = *r;
     *r = *s;
     *s = temp;
     return;
  }

int main8()
{
  cout << "Problema 8" << endl;
  int number_a , number_b;
  cout << "Intercambio de 2 numeros " << endl;
  cout << "Ingresa el numero A" << endl;
  cin >> number_a;
  cout << "Ingresa el numero B" << endl;
  cin >> number_b;

  cout << "El valor de A es " << number_a << endl;
  cout << "El valor de B es " << number_b << endl;

  int *ptrA = &number_a;
  int *ptrB = &number_b;
  changeNumbers(ptrA, ptrB);

  cout << "El valor de A ahora es " << number_a << endl;
  cout << "El valor de B ahora es " << number_b << endl;

}
