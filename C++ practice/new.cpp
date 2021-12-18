#include<iostream>
using namespace std;

class base{

    protected :
        int num = 4;

    public : 
        void get_data(int x){
            num =  x;

        }

        int seta(int y){
            return y;
        }

        void display(){
            cout<<"The value of a in the base cls is : "<<num<<endl;
        }

};


class derived : public base{

    protected :

    public : 

        void setainderived(){

            num = seta(num);
        }

        void display(){
            cout<<"The value of a in the derived cls is : "<<num<<endl;
        }

};



int main(){
    
    base b;
    derived d;

    b.get_data(4);
    
    // d.seta(5);// this one will not do anythijng and this is wrong
    // int returning functions can only written inside  a function
    // or in an equation or in the printf or cout statemnet

    b.display();
    d.display();// here the derived cls display will only run;
    return 0;
}
