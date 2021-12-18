#include<iostream>
using namespace std;

class base1{

    protected :
    int num1;

    public :
    base1(int x);
    void display1();

};

base1 :: base1(int x){
    num1 = x;
    cout<<"The base1 constructor has worked "<<endl;

}

void base1 :: display1(){

    cout<<"The value of num1 is : "<<num1<<endl;
}


class base2{

    protected :
    int num2;

    public :
    base2(int y);
    void display2();

};

base2 :: base2(int y){
    num2 = y;
    cout<<"The base2 constructor has worked "<<endl;

}

void base2 :: display2(){

    cout<<"The value of num2 is : "<<num2<<endl;

}

class derived : public base2 , public base1{

    protected :
    int num3;
    int num4;

    public :

    derived(int a, int b, int c, int d);
    // derived(int a, int b, int c, int d) : base1(a),base2(b){

    //     num3 = c;
    //     num4 = d;
    // }

    void display3();
};

derived :: derived(int a, int b, int c, int d) : base1(a),base2(b){

    num3 = c;
    num4 = d;
    cout<<"The base3 constructor has worked "<<endl;
}

void derived :: display3(){

    display1();
    display2();
    cout<<"The value of num3 is : "<<num3<<endl;
    cout<<"The value of num4 is : "<<num4<<endl;

}

int main(){

    derived harry(1,2,3,4);
    harry.display3();

    /* derived harsha(harry);
    harsha.display3();

    here if we use the harsha(harry) as of in the tut34.cpp here 
    we will grt printed only the num1 num2 num3 num4 but not the 
    base1 worked base2 worked base3 worked coz...aldready the 
    constructor we are passing is ready made so again they wont run
    ut down we mentioned the diaplay function which is 
    indepent from that line so... it runs*/

    return 0;
}
