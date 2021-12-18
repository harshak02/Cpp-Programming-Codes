#include<iostream>
using namespace std;

// this is only for specifing that a blanck comnstructor is 
//needed if we are inherting a class with a constructor 
// and if we are not intrrested in building a constructor spcefically
// derived class 

/* if we wanted to build a constructor in the derived cls then pls
first include all the inherited constructors and then u start buil
dinng the required constructor(nothing but use the syntax given 
by the harry bhai)*/

class a{
    protected :
    int x;

    public :
    a(int p){
        x = p;
    }

    a(){

    }

    void display1(){
        cout<<x<<endl;
    }

};

class b : public a{
    protected :
    int y;

    public :
    void setint(int q){
        y = q;
    }

    void display2(){
        cout<<y<<endl;
    }

};

int main(){
    a r(4);
    b s;

    s.setint(5);
    r.display1();
    s.display2();

    return 0;
}
