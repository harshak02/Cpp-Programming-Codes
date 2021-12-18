#include<iostream>
using namespace std;

int main(){
    const int a = 5;
    cout<<"before a is : "<<a<<endl;
    //a = 6;// dont work
    cout<<"after a is : "<<a<<endl;

    return 0;
}
