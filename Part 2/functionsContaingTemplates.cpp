#include<iostream>
using namespace std;

template <class T1 , class T2>

float average(T1 a , T2 b){
    float result;

    result = (float)(a+b)/2;// even if if it written or not it 
    //will come if a and b are defined as the float values if not
    //defined as afloat values then put (float) to get float values
    return result;
}

template<class T>

void change(T *ptr1, T *ptr2){
    T temp;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main(){

    float result;

    // int a = 4;
    // int b = 5;
    // int *ptr1 = &a;
    // int *ptr2 = &b;

    float a = 4.25;
    float b = 5.65;// we can use any values since template is 
    float *ptr1 = &a;// is created
    float *ptr2 = &b;

    result = average(4.6,5.6);
    printf("The value of the average is %.2f\n",result);

    change(ptr1,ptr2);

    cout<<"The value of a is : "<<a<<endl;
    cout<<"The value of b is : "<<b<<endl;

    return 0;
}

