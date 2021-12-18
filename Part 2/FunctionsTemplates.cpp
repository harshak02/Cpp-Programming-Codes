#include<iostream>
using namespace std;

template <class T>
class harry{

    public :
        T data;

        harry(T x){
            data = x;
        }

        void display();

};


template <class T>// this  is also important
void harry <T> :: display(){//once we use template the class name is written
//as harry <T> not as imply harry (for example);

    cout<<"The value of data is : "<<data<<endl;
}

int main(){

    // harry <int> h(5);
    harry <char> h('&');
    cout<<"The value of data is : "<<h.data<<endl;
    h.display();
    
    return 0;
}
