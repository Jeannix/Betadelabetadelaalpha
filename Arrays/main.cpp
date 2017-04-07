#include <iostream>

using namespace std;


int sum(const int array[],const int length){
    int sum=0;
    for(int i=0;i<length;sum+=array[i++]);
    return sum;
}

int prom(const int array[],const int length){
    int prom=0;
    for(int i=0;i<length;prom+=array[i++]);
    prom = prom/length;
    return prom;
}

void intercambio(int &a ,int&b){
    int t=a;
    a=b;
    b=t;
}

void inv(int array[], int length){
    for(int i=0;i<length/2;i++){
        intercambio(array[i],array[length-(i+1)]);
    }
    for(int i=0;i<length;i++){
        cout<<array[i];
    }

}

int orden(){


}

int main(){
    //Problema 1.1
    int n;cin>>n;
    int arreglo[n];
    for(int i=0; i<n; i++)
        cin>>arreglo[i];
    cout<<"sum: "<<sum(arreglo,n)<<endl;
    //Problema 1.2
    int m;cin>>m;
    int arrelos[m];
    for(int i=0; i<n; i++)
        cin>>arrelos[i];
    cout<<"prom: "<<prom(arrelos,m)<<endl;
    //Problema 1.3
    int z;cin>>z;
    int arre[z];
    for(int i=0; i<n; i++)
        cin>>arre[i];
    inv(arre,z);

}
