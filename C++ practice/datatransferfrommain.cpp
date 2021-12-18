#include<iostream>
using namespace std;

class base{
    public :
        int num;

        void display(){
            cout<<num<<endl;
        }

};

class derived : public base{

    public :

    void display1(){
        cout<<num<<endl;
    }
};

int main(){
    base b;
    derived d;
    b.num = 4;// this will only provide the value to the base class display
    // but not to the derived display
    b.display();
    d.display1();

    return 0;

}
