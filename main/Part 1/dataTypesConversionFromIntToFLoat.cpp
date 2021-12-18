#include<iostream>

//********************Type Casting********************
using namespace std;
int main(){
    int i =34;
    float j = 45.45f;
    int c = int(j);

    cout<<"The value of the i is : "<<i<<endl;
    cout<<"The value of the i is : "<<(float)i<<endl;
    cout<<"The value of the i is : "<<float(i)<<endl;
    cout<<"The value of the j is : "<<j<<endl;
    cout<<"The value of the j is : "<<(int)j<<endl;
    cout<<"The value of the j is : "<<int(j)<<endl;
    cout<<"The value of c is : "<<c<<endl;

    cout<<"The sum is i and int of j is : "<<(i+(int)j)<<endl;
}