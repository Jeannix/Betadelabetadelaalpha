#include <iostream>
using namespace std;

void changeNumbers(int &a , int &b)
{
  int temporal = a;
  a = b;
  b = temporal;
}

int main()
{
  cout << "Problema 7"
  int number_a , number_b;
  cout << "Intercambiaremos 2 numeros " << endl;
  cout << "Ingresa el numero A" << endl;
  cin >> number_a;
  cout << "Ingresa el numero B" << endl;
  cin >> number_b;

  cout << "El valor de A es " << number_a << endl;
  cout << "El valor de B es " << number_b << endl;

  changeNumbers(number_a, number_b);

  cout << "El valor de A ahora es " << number_a << endl;
  cout << "El valor de B ahora es " << number_b << endl;

}
