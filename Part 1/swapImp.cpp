#include<iostream>
using namespace std;
// only in the above function we need to use *ptr generelly
// where as in the below function we need to use ptr generally

int & swap(int *ptr1,int *ptr2){
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    return *ptr1;
}

int main(){
    int a=4;
    int *ptr1 = &a;
    int b=5;
    int *ptr2 = &b;

    cout<<"The numbers a and b before swap are : "<<a<<" and "<<b
    <<endl;

    swap(ptr1,ptr2)= 766;
    // we used that float x =34.4
    // float & y = x;
    // here the x and y stores same value

    cout<<"The numbers a and b before swap are : "<<a<<" and "<<b
    <<endl;
    return 0;
}