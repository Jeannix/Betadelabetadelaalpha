#include <iostream>
#include <vector>

using namespace std;

template < class T> class Stack ;
template < class T> Stack <T> operator +( const Stack <T> &s1 , const Stack <T> &s2);
template < class T> Stack <T> operator -( const Stack <T> &s1 , const Stack <T> &s2);

template < class T>
class Stack {
    friend Stack <T> operator +<>( const Stack <T> &s1 , const Stack <T> &s2);
    friend Stack <T> operator -<>( const Stack <T> &s1 , const Stack <T> &s2);
    vector <T> items ;
public :
    bool empty () const { return items . empty () ;}
    void push ( const T & item ) { items . push_back ( item );}
    T pop () {
        T last = items . back ();
        items . pop_back ();
        return last ;
    }
    void getDatos(const Stack <T> &s1){
        for ( unsigned i = 0; i < s1. items . size (); ++i) {
            cout <<s1. items [i]<<" ";

        }
    }
};
template < class T>
Stack <T> operator +( const Stack <T> &s1 , const Stack <T> &s2)
    {
    Stack <T> result = s1;
    for ( unsigned i = 0; i < s1. items . size (); ++i) {
        result . items . push_back (s2. items [i]);
    }
    return result ;
}
template < class T>
Stack <T> operator -( const Stack<T> &s1 , const Stack<T> &s2)
    {
	Stack<T> result=s1;
	int tam = s1.st.size()-1;
	for(tam;tam>=0;tam--){
		if(result.st[tam]== s2.st[tam])
			result.st.erase(result.st.begin()+tam);
	}
	return result ;
}
int main()
{
    Stack<int> stack1, stack2,stackres;
    stack1.push(8);
    stack2.push(5);
    stackres = (stack1+stack2);
    stackres.getDatos(stackres);

}
