#include<iostream>
using namespace std;

class base{

    public :
        int base_int = 4;

        virtual void display(){

            cout<<"1. The value of integer in the base is : "<<base_int<<endl;
        }

};

class derived : public base{

    public :
        int derived_int = 5;

        void display(){

            cout<<"2. The value of integer in the base is : "<<base_int<<endl;
            cout<<"2. The value of integer in the derived is : "<<derived_int<<endl;
        }

};

int main(){

    base b;
    derived d;

    base *ptrb;
    ptrb = &d;

    ptrb->display();
    /*if we dont want the display should be runned from base class which is as per rule
    we can use the virtual keyword and make the unnesacry function to virtual function
    */
    
    return 0;
}
