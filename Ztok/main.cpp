#include <iostream>
#include <stdexcept>
#include <vector>
#include <map>
using namespace std;

template < class T> class Stack;

template < class T> Stack <T> operator +( const Stack <T> &s1 , const Stack <T> &s2);

template < class T>
class Stack {
    friend Stack <T> operator +<>( const Stack <T> &s1 , const Stack <T> &s2);
    vector <T> items ;
public :
    bool empty () const { return items . empty () ;}
    void push ( const T & item ) { items . push_back ( item );}
    void pop () { items.pop_back();}
    T top(){T last = items . back (); return last;}
    void getDatos(){
        for ( unsigned i = 0; i < items . size (); ++i) {
            cout <<items [i]<<" ";
        }
        cout<<endl;
    }
};
template < class T>
Stack <T> operator +( const Stack <T> &s1 , const Stack <T> &s2)
{
    Stack <T> result = s1;
    for ( unsigned i = 0; i < s1. items . size (); ++i) {
        result.items.push_back(s2.items[i]);
    }
    return result;
}

int main()
{
    Stack <int > a, b;
    a. push (1) ;
    a. push (2) ;
    b. push (3) ;
    b. push (4) ;
    Stack <int > c = a + b;
    c.getDatos();
    cout<<c.top()<<endl;
    cout << "Hello world!" << endl;
    return 0;
}
