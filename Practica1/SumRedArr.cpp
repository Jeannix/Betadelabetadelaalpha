#include <iostream>
using namespace std;

int sumaArray(int arreglo[], int len, int x, int total)
{
  if (x == len ){
    return total;
  }
  total = total + arreglo[x];
  return sumaArray(arreglo,len,x+1,total);
  }

void crearArreglo( int arreglo[],int lenght)
{
  for( int i = 0 ; i < lenght ; i++)
  {
    int askNumber; cin >> askNumber;
    arreglo[i] = askNumber;
  }
}
void imprimirArreglo(int arreglo[],int lenght)
{
  cout << "La lista es: ";
  for(int x = 0 ; x < lenght ; x++)
  {
    cout << arreglo[x] << " " ;
  }
  cout << endl;
}

int main14(){
    cout <<"Problema 14" <<endl;
    int len4;
    cout <<"Ingrese el tamanho del arreglo : ";
    cin >> len4;
    int array4[len4];
    crearArreglo(array4,len4);
    cout <<sumaArray(array4,len4,0,0)<<endl;
    imprimirArreglo(array4,len4);

}
