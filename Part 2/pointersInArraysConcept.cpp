#include<iostream>
using namespace std;

class base{
    public :
        int *ptr;
        int size;


        base(int x){
            size = x;
            ptr = new int [size];
        }

};

int main(){

    base b1(3);

    b1.ptr[0] = 4;
    b1.ptr[1] = 5;
    b1.ptr[2] = 6;

    cout<<b1.ptr[1];
    
    return 0;
}

