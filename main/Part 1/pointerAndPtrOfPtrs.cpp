#include<iostream>
using namespace std;

int main(){
    int a=3;
    int *b = &a;

    // & is the address of operator
    // * is the dereference of the operator
    cout<<"The address of a is : "<<&a<<endl;
    cout<<"The address of a is : "<<b<<endl;
    // dereferencing operator is used as 
    cout<<"The value of number at address in b is : "<<*b<<endl;

    int **c = &b;

    cout<<"The value of address of b is : "<<&b<<endl;
    cout<<"The value of address of b is : "<<c<<endl;
    cout<<"The value of b is : "<<*c<<endl;
    cout<<"The value of value of c is : "<<**c<<endl;
    return 0;
}