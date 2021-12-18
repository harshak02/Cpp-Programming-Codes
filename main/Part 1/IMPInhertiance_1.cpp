#include<iostream>
using namespace std;

class base{

    protected :// these data are private but inherited
    int a;

    private :
    int b;

    public :
    int c=10;

    base(int x){
        b = x;
    }

    void setInt(int y){
        a = y;
    }
    
    int getb(){

        return b;
    }

    int geta(){

        return a;
    }

    void display1(){
        cout<<"The value of a is : "<<a<<endl;
        cout<<"The value of b is : "<<b<<endl;
        cout<<"The value of c is : "<<c<<endl;
    }

};


int main(){

    base b1(90);
    b1.setInt(10);

    //alternative (1):-
    cout<<"The value of a is : "<<b1.geta()<<endl;
    cout<<"The value of b is : "<<b1.getb()<<endl;
    cout<<"The value of c is : "<<b1.c<<endl;    

    //alternative (2):-
    b1.display1();
    
    return 0;
}
