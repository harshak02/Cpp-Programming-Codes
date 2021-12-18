#include<iostream>
using namespace std;

class complex{

    protected :
        int real;
        int imag;

    public :
        complex(int x,int y){
            real = x;
            imag = y;
        }

        complex(){
            real = 0;
            imag = 0;
        }

        complex operator +(complex c);

        // complex operator +(complex c){// automatically call ho jata + ko dekhe

        //     complex result;
        //     result.real = real + c.real;
        //     result.imag = imag + c.imag;

        //     return result;// everthing will be done in simple manner if we use operator
        //     //operations like if we wanted to return something no need any syntax in main
        //     //function
        // }

        // complex sumvecctor(complex n){
        //     complex result;
        //     result.real = this->real + n.real;
        //     result.imag = this->imag + n.imag;
        //     return result;
        // }

        void display(){
            cout<<"The complex number is : "<<real<<" + "<<imag<<"i"<<endl;
        }
};


complex complex :: operator+ (complex c){

    complex result;
    result.real = this->real + c.real;
    result.imag = this->imag + c.imag;

    return result;
}

int main(){

    complex c1(3,4);
    complex c2(5,6);
    complex result;
    complex c4(10,20);

    c1.display();
    c2.display();
    c4.display();

    // result = c1.sumvecctor(c2);
    // result = c1+c2;

    result = c1 + c2 + c4;// operator overloading we only defined for two objs
    // but even the operator function can handle 3 
    result.display();

    
    return 0;
}
