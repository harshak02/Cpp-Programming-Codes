#include<iostream>
using namespace std;

enum fruits{
    apple,
    mango,
    orange,
};


int main(){

fruits harsha;
harsha = mango;
fruits *ptr;
// ptr = &harsha;// this is wromg
ptr = &harsha;
// this is crct
cout<<*ptr<<endl;

    return 0;
}
