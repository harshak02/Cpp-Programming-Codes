#include<iostream>
using namespace std;

int sum(int a,int b){
    int result;
    result = a+b;
    return result;
}

// void g();
void g(void);

int main(){
    int a,b;
    int result;

    cout<<"Enter the value of first num"<<endl;
    cin>>a;
    cout<<"Enter the value of second num"<<endl;
    cin>>b;

    result = sum(a,b);
    g();

    cout<<"The sum of the two numbers entered is : "<< result;
    return 0;
}

void g(){
    cout<<"\nFunction completed"<<endl;
}