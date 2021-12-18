#include<iostream>
using namespace std;

class A{

    private :
        int a;

        int set_data(int x){

            a = x;
            return a;
        }

    public :
        // void set_data(int a){
        //     this->a = a;
        //     // (*this).a = a;// if we take same variables like a = a the use 'this' pointer.
        // }

        // A & set_data(int a){
        //     this->a = a;
        //     // (*this).a = a;// if we take same variables like a = a the use 'this' pointer.

        //     return *this;
        // }

        // int set_data(int x){
        //     a = x;
        //     return a;
        // }


        void display(){
            // set_data(4);
            cout<<"The value of a is : "<<set_data(4)<<endl;
        }

};

int main(){
    
    A a;

    // a.set_data(4);
    a.display();
    //type of syntax
    // a.display();

    return 0;
}
