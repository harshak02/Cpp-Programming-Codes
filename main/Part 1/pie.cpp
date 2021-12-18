#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float num1;
    num1 = (float)22/7;
    int num2;

    cout<<"Enter the number of digits of precision"<<endl;
    cin>>num2;

    cout<<setprecision(num2+1)<<num1;
    return 0;
}