#include<iostream>
#include<cmath>

using namespace std;

class simple_calculator{

    protected :

    int num1;
    int num2;

    public :

    int sum;
    int minus;
    int product;
    int division;

    void setdata(int x,int y);
    void setsum(int num1,int num2);
    void setminus(int num1,int num2);
    void setproduct(int num1,int num2);
    void setdivision(int num1,int num2);
    void display();
};

void simple_calculator :: setdata(int x,int y){

    num1 = x;
    num2 = y;    
}

void simple_calculator :: setsum(int num1,int num2){
    sum = num1+num2;
}

void simple_calculator :: setminus(int num1,int num2){
    minus = num1-num2;
}

void simple_calculator :: setproduct(int num1,int num2){
    product = num1*num2;
}

void simple_calculator :: setdivision(int num1,int num2){
    division = num1/num2;
}

void simple_calculator :: display(){

    cout<<"The sum of the two numbers is : "<<sum<<endl;
    cout<<"The minus of the two numbers is : "<<minus<<endl;
    cout<<"The product of the two numbers is : "<<product<<endl;
    cout<<"The division of the two numbers is : "<<division<<endl;
}


class scientific_calculator{

    protected :

    float num3;
    int num4;

    public :

    float sin1;
    float cos1;
    float tan1;
    float log1;
    float exp1;

    void setdata1(float a, int b);
    void setsin(float num3);
    void setcos(float num3);
    void settan(float num3);
    void setlog(float num3);
    void setexp(float num3,int num4);
    void display1();
};

void scientific_calculator ::setdata1(float a, int b){
    num3 = a;
    num4 = b;
}

void scientific_calculator :: setsin(float num3){
    sin1 = sin(num3);
}

void scientific_calculator :: setcos(float num3){
    cos1 = cos(num3);
}

void scientific_calculator :: settan(float num3){
    tan1 = tan(num3);
}

void scientific_calculator :: setlog(float num3){
    log1 = log(num3);
}

void scientific_calculator :: setexp(float num3,int num4){
    exp1 = pow(num3,num4);
}

void scientific_calculator :: display1(){

    cout<<"The sin of the number is : "<<sin1<<endl;
    cout<<"The cos of the number is : "<<cos1<<endl;
    cout<<"The tan of the number is : "<<tan1<<endl;
    cout<<"The log of the number is : "<<log1<<endl;
    cout<<"The exp of the two numbers is : "<<exp1<<endl;
}

class hybrid_calculator : public simple_calculator , public scientific_calculator{

    // protected :
    // int num1;
    // int num2;
    // float num3;
    // int num4;

    // public :

    // int sum;
    // int minus;
    // int product;
    // int division;
    // float sin1;
    // float cos1;
    // float tan1;
    // float log1;
    // float exp1;

    // void setdata(int x,int y);
    // void setsum(int num1,int num2);
    // void setminus(int num1,int num2);
    // void setproduct(int num1,int num2);
    // void setdivision(int num1,int num2);
    // void display();
    // void setdata1(float a, int b);
    // void setsin(float num3);
    // void setcos(float num3);
    // void settan(float num3);
    // void setlog(float num3);
    // void setexp(float num3,int num4);
    // void display1();

    public :
    int m;
    int n;
    float o;
    int p;

    void result(int m,int n,float o,int p);

};

void hybrid_calculator :: result(int m,int n,float o,int p){

    setdata(m,n);
    setsum(m,n);
    setminus(m,n);
    setproduct(m,n);
    setdivision(m,n);
    setdata1(o,p);
    setsin(o);
    setcos(o);
    settan(o);
    setlog(o);
    setexp(o,p);
    display();
    display1();
}

int main(){

    int m;
    int n;
    float o;
    int p;

    cout<<"Enter the first integer used in simple arithmatic operations"<<endl;
    cin>>m;

    cout<<"Enter the first integer used in simple arithmatic operations"<<endl;
    cin>>n;

    cout<<"Enter the value used in scientific operations"<<endl;
    cin>>o;

    cout<<"Enter the integer used as exponent"<<endl;
    cin>>p;

    hybrid_calculator h1;

    // h1.setdata(m,n);
    // h1.setsum(m,n);
    // h1.setminus(m,n);
    // h1.setproduct(m,n);
    // h1.setdivision(m,n);
    // h1.setdata1(o,p);
    // h1.setsin(o);
    // h1.setcos(o);
    // h1.settan(o);
    // h1.setlog(o);
    // h1.setexp(o,p);

    h1.result(m,n,o,p);

    return 0;
}
