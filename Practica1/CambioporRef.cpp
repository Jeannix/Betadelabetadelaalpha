#include <iostream>
using namespace std;

void intercambio1(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main7()
{
  cout << "Problema 7" << endl;
  int number_a , number_b;
  cout << "Intercambio de 2 numeros " << endl;
  cout << "Ingresa el numero A" << endl;
  cin >> number_a;
  cout << "Ingresa el numero B" << endl;
  cin >> number_b;

  cout << "El valor de A es " << number_a << endl;
  cout << "El valor de B es " << number_b << endl;

  intercambio1(number_a, number_b);

  cout << "El valor de A ahora es " << number_a << endl;
  cout << "El valor de B ahora es " << number_b << endl;

}
