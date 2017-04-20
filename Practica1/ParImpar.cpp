#include <iostream>

using namespace std;

int main5()
{
    cout<<"Problema 3"<<endl;
    long int number_input;
    cout << "Comprobacion para saber si es par o impar" << endl;
    cout << "Para Salir ingresa -1" << endl;
    bool stop = false;
    while ( !stop )
    {
      cin >> number_input;
      if( number_input == -1)
      {
        cout <<"FIN";
        break;
      }
      if(number_input % 2 == 0 )
      {
        cout << number_input << " Es par " << endl;
      }
      else
      {
        cout << number_input << " Es impar " << endl;
      }

    }
  return 0;
}
