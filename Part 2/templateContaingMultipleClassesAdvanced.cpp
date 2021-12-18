#include<iostream>
using namespace std;

template <class T1 , class T2>
class myclass{

    public :
        T1 data1;
        T2 data2;

        myclass(T1 a,T2 b){

            data1 = a;
            data2 = b;
        }

        void display(){

            cout<<"The data1 is : "<<data1<<endl;
            // cout<<"The data2 is : "<<data2<<endl;
            cout<<"The data2 is : "<<this->data2<<endl;
            // this is used then first see the called class
            //function like harry.display(); this implis that
            // data2 is taken from the harry class
        }
};

int main(){

    myclass <int,char> harry(1,'c');
    harry.display(); 
    return 0;
}
