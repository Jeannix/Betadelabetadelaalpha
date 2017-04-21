#include <iostream>
using namespace std;

void reversa(int arreglo[],int len)
{
  int temp;
  int limit = len-1;
  for(int i = 0 ; i < (len/2) ;i++)
  {
    temp= arreglo[i];
    arreglo[i]=arreglo[limit];
    arreglo[limit]=temp;
    --limit;
  }
}

void createArreglor( int arreglo[],int lenght)
{
  for( int i = 0 ; i < lenght ; i++)
  {
    int askNumber; cin >> askNumber;
    arreglo[i] = askNumber;
  }
}

void printArreglor(int arreglo[],int lenght)
{
  cout << "La lista es: ";
  for(int x = 0 ; x < lenght ; x++)
  {
    cout << arreglo[x] << " " ;
  }
  cout << endl;
}

int main()
{
  cout << "Utilizando la funcion Reversa"<< endl;
  cout << "Cuantos elementos ingresaras a la lista: ";
  int lenght; cin >> lenght;
  cout << endl;
  int arreglo[lenght];
  createArreglor(arreglo,lenght);
  cout << endl;
  printArreglor(arreglo,lenght);

  reversa(arreglo,lenght);
  printArreglor(arreglo,lenght);

}

