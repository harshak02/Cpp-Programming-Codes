#include<iostream>
using namespace std;

class complex{
    private :

    int a;
    int b;

    public :

    complex(int x,int y);
    // define function and other thing put after class

    void display(){
        cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex :: complex(int x,int y){
    a = x;
    b = y;
}

int main(){

    complex a(4,5);// compulsory we need to define like this with arguments

    a.display();
    
    return 0;
}
