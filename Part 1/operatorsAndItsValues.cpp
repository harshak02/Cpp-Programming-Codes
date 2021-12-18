#include<iostream>

// #include"this.h"// we can enter manually the library but this names
//file should be present

using namespace std;

int main(){
    int a=4;
    int b=5;

    cout<<"This is hello world programme"<<endl
    <<"These are the following operators in c++"<<"\n";

    cout<<"The sum of a and b is : "<<a+b<<endl;
    cout<<"The difference of a and b is : "<<a-b<<endl;
    cout<<"The product of a and b is : "<<a*b<<endl;
    cout<<"The division of a and b is : "<<a/b<<endl;
    cout<<"The modular div of a and b is : "<<a%b<<endl;
    cout<<"The value of a++ is : "<<a++<<endl;
    cout<<"The value of a-- is : "<<a--<<endl;
    cout<<"The value of ++a is : "<<++a<<endl;
    cout<<"The value of --a is : "<<--a<<endl;

    cout<<"These are the comparison operators"<<endl;

    cout<<"The value of a==b is : "<<(a==b)<<endl;
    cout<<"The value of a!=b is : "<<(a!=b)<<endl;
    cout<<"The value of a<=b is : "<<(a<=b)<<endl;
    cout<<"The value of a>=b is : "<<(a>=b)<<endl;
    cout<<"The value of a<b is : "<<(a<b)<<endl;
    cout<<"The value of a>b is : "<<(a>b)<<endl;

    cout<<"The logical opertaors of C++"<<endl;

    cout<<"The value of the ((a==b)&&(a<b)) is "<<((a==b)&&(a<b))<<endl;
    cout<<"The value of the ((a==b)||(a<b)) is "<<((a==b)||(a<b))<<endl;
    cout<<"The value of the (!(a==b)) is "<<(!(a==b))<<endl;




    return 0;
}
