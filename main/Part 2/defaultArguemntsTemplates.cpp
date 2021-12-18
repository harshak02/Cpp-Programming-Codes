#include<iostream>
using namespace std;

template <class T1 = int ,class T2 = float ,class T3 = char>
class harry{

    public :
        T1 data1;
        T2 data2;
        T3 data3;

        harry(T1 x, T2 y, T3 z){

            data1 = x;
            data2 = y;
            data3 = z;

        }

        void display(){

            cout<<"The value of data1 is : "<<this->data1<<endl;
            cout<<"The value of data2 is : "<<this->data2<<endl;
            cout<<"The value of data3 is : "<<this->data3<<endl;
        }
};

int main(){

    harry <> harsha(25,99.12,'a');
    harsha.display();

    cout<<endl;

    harry <char,int,float> sree('c',36,99.14);
    // we can even erase the deafult arguments if we create new 
    // data type in the template
    sree.display();

    return 0;
}
