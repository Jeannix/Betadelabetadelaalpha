#include <iostream>
using namespace std;

void createArreglo( int arreglo[],int lenght)
{
  for( int i = 0 ; i < lenght ; i++)
  {
    int askNumber; cin >> askNumber;
    arreglo[i] = askNumber;
  }
}
void insertionSort( int arreglo[], int lenght)
{

  for( int  i = 1 ; i < lenght ; i++)
  {
    int j = i;
    while ( j > 0 && arreglo[j-1] > arreglo [j])
    {
      int temp = arreglo[j];
      arreglo[j]=arreglo[j-1];
      arreglo[j-1]=temp;
      j--;
    }
  }

}

void printArreglo(int arreglo[],int lenght)
{
  cout << "La lista es: ";
  for(int x = 0 ; x < lenght ; x++)
  {
    cout << arreglo[x] << " " ;
  }
  cout << endl;
}

int main9()
{
  cout << "Problema 9" << endl;
  cout << "Ingrese la cantidad de elementos: ";
  int lenght; cin >> lenght;
  cout << endl;
  int arreglo[lenght];
  createArreglo(arreglo,lenght);
  cout << endl;
  printArreglo(arreglo,lenght);

  insertionSort(arreglo,lenght);
  printArreglo(arreglo,lenght);

}
