#include<iostream>
using namespace std;

class base{
    
    private : 
    int data1;

    public :
    int data2;
    int result;

    void setdata();
    int getdata1();
    int getdata2();

    // base();

};

// base :: base(){

// };

class derived : public base{

    private :
    int data3;

    public :

    void process();
    void display();

};

void base :: setdata(){
    data1 = 10;
    data2 = 20;
}

int base :: getdata1(){

    result = data1;
    return result; 
}

int base :: getdata2(){

    return data2;
}

void derived :: process(){

    data3 = data2*result;
}

void derived :: display(){

    cout<<"The value of data1 is : "<<result<<endl;
    cout<<"The value of data2 is : "<<data2<<endl;
    cout<<"The value of data3 is : "<<data3<<endl;
}


int main(){

    int result;
    derived der;
    base b;

    der.setdata();
    result = der.getdata1();
    der.process();
    der.display();

    
    return 0;
}
