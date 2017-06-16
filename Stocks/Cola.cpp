#include <iostream>
#include <vector>

using namespace std;

template < class B> class Queue;

template < class B> Queue <B> operator +( const Queue <B> &s1 , const Queue <B> &s2);

template < class B> Queue <B> operator -( const Queue <B> &s1 , const Queue <B> &s2);

template < class B>
class Queue {
    friend Queue <B> operator +<>( const Queue <B> &s1 , const Queue <B> &s2);
    friend Queue <B> operator -<>( const Queue <B> &s1 , const Queue <B> &s2);
    vector <B> items ;
public :
    bool empty () const { return items . empty () ;}
    void push ( const B & item ) { items . push_back ( item );}
    B pop () {
        B last = items . back ();
        items . pop_back ();
        return last ;
    }
    void getDatos(const Queue <B> &s1){
        for ( unsigned i = 0; i < s1. items . size (); ++i) {
            cout <<s1. items [i]<<" ";

        }
    }
};
template < class B>
Queue <B> operator +( const Queue <B> &s1 , const Queue <B> &s2)
    {
    Queue <B> result = s1;
    for ( unsigned i = 0; i < s1. items . size (); ++i) {
        result . items . push_back (s2. items [i]);
    }
    return result ;
}
template < class B>
Queue <B> operator -( const Queue <B> &s1 , const Queue <B> &s2)
    {
    Queue <B> result = s1;
    int temp;
    for (unsigned int i = 0; i<s1.items.size();i++) {
        if(s1. items [i] == s2. items [i]){
            while(i<s1.items.size()-1){
                temp = result.items [i+1];
                result.items[i] = result.items[i+1];
                result.items[i+1] = temp;
                i++;
            }
            result . items . pop_back();
        }
    }
    return result ;
}
