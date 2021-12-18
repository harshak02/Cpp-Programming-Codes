#include<iostream>
using namespace std;

class complex;

class calculator{

    public :

    int sumrealcomplex(complex o1,complex o2);
    int sumcompcomplex(complex o1,complex o2);

    void display1(int k1);

    void display2(int k2);
};

class complex{
    private :
    int a;
    int b;

    friend class calculator;
    // friend int calculator :: sumrealcomplex(complex o1,complex o2);

    // friend int calculator :: sumcompcomplex(complex o1,complex o2);

    public :

    void getdata(int x,int y){

        a=x;
        b=y;
    }

    void display();
};

int calculator :: sumrealcomplex(complex o1,complex o2){
    int result;
    result = o1.a+o2.a;

    return result;
}


int calculator :: sumcompcomplex(complex o1,complex o2){
    int result1;
    result1 = o1.b+o2.b;

    return result1;
}

void calculator ::display1(int k1){
    cout<<"The value of the sum of the real parts of c1 and c2 is :"<<k1<<endl;
}

void calculator ::display2(int k2){
    cout<<"The value of the sum of the real parts of c1 and c2 is :"<<k2<<endl;
}

void complex :: display(){

    cout<<"The complex number is : "<<a<<" + "<<b<<"i"<<endl;
}


int main(){
    complex c1,c2;
    calculator calc;
    int result;
    int result1;

    c1.getdata(2,3);
    c2.getdata(4,5);

    c1.display();
    c2.display();

    result = calc.sumrealcomplex(c1,c2);
    result1 = calc.sumcompcomplex(c1,c2);

    calc.display1(result);
    calc.display2(result1);

    
    return 0;
}
