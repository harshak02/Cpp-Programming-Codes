#include<iostream>
using namespace std;

int main(){
    
    // // int a = 4;
    // // int *ptr = &a;

    // int *ptr1 = new int(4);// new way of creating the pointer
    // // we can ecven write like float *ptr2 = new float(47.89);

    // // cout<<"The value of a is : "<<*ptr<<endl;
    // // cout<<"The value of address a is : "<<ptr<<endl;
    // cout<<"The value of a is : "<<*ptr1<<endl;
    // cout<<"The value of address a is : "<<ptr1<<endl;

    // // int arr[3];
    // // int *ptr = arr;

    int *arr = new int[3];
    // float *ptr2 = new float(47.89);

    // this is new way of printing arrays
    //new ka ek dost keyword hey delete;

    for(int i =0; i<3; i++){
        arr[i] = i;
    }


    // delete arr; //this is used to earse the memory alloted to the
    // particular thing from use input or saved
    // delete [] arr;

    for(int i =0; i<3; i++){
        cout<<"The "<<i<<"th element of array is : "
        <<arr[i]<<endl;
    }

    // for(int i =0; i<3; i++){
    //     cout<<"The "<<i<<"th element of array is : "
    //     <<*(arr+i)<<endl;
    // }

    return 0;
}
