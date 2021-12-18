#include<iostream>
using namespace std;

class complex{
    private :
    int a;
    int b;

    public :

    void get_data(int x,int y){
        a = x;
        b = y;
    }

    void display();
};

void complex :: display(){
    cout<<"The complex number is : "<<a<<" + "<<b<<"i"<<endl;
}

class calculator{
    public :
    int a;
    int b;

    void getdata(int c, int d){
        a=c;
        b=d;
    }

    int add(){
        int result;
        result = a+b;
        return result;
    }

    int display1(int k);
};

int calculator :: display1(int k){
    cout<<"The sum of the 2 numbers is : "<<k<<endl;

    return 0;
}

int main(){
    // complex c1;
    int result;
    calculator k1;

    // c1.get_data(4,5);
    // c1.display();

    k1.getdata(3,5);
    result = k1.add();

    k1.display1(result);

    
    return 0;
}
