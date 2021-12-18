#include<iostream>
using namespace std;
// exmaple for construction overloading
// if we had the same function name with different no. of arguments is overloading

class complex{

    private :

    int a;
    int b;

    public :

    complex(int x, int y);

    complex(int x){
        a = x;
        b = 0;
    }

    complex(){
        a =0;
        b =0;
    }

    void display();
};

complex :: complex(int x,int y){
    a = x;
    b = y;
}

void complex :: display(){
    cout<<"The complex number is : "<<a<<" + "<<b<<"i"<<endl;
}


int main(){

    complex c1(2,3);
    complex c2(4);
    complex c3;

    c1.display();
    c2.display();
    c3.display();


    return 0;
}
