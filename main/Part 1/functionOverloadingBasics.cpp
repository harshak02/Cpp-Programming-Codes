#include<iostream>
using namespace std;

int sum(int a,int b){
    cout<<"The complier used two arguments function\n";
    return a+b;
}

int sum(int a,int b,int c){
    cout<<"The complier used three arguments function\n";
    return a+b+c;
}


int main(){
    int a,b,c;
    int result;

    cout<<"The sum of 6 and 7 is : "<<endl<<sum(6,7)<<endl;
    cout<<"The sum of 6,7 and 8 is : "<<endl<<sum(6,7,8)<<endl;
    return 0;
}