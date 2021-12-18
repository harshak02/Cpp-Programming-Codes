#include<iostream>
using namespace std;

class base{

    protected :// these data are private but inherited
    int a;

    private :
    int b=9;

    public :
    int c=10;
    /*if we assign the data directly in the base class then the
    values and the  variables everthing will be inhertited;

    but if we assign the value of the base class thru some functions like
    then only the variable is inherited;*/

    void setData(int num){
        a = num;
    }

    int getb(){

        return b;
    }

    int geta(){
        
        return a;
    }

    //base();//here no need to use this coz 
    //no constructor in base class is built;

};

class derived : public base{

    public :

    void display1(){
        cout<<"The value of a is : "<<geta()<<endl;
        cout<<"The value of b is : "<<getb()<<endl;
        cout<<"The value of c is : "<<c<<endl;
    }
    

};

int main(){

// these down are for printing from publically inherited class
    base b1;
    // b1.wont work over here
    derived d1;

    //alternative (1):-
    cout<<"The value of a is : "<<d1.geta()<<endl;
    cout<<"The value of b is : "<<d1.getb()<<endl;
    cout<<"The value of c is : "<<d1.c<<endl;    

    //alternative (2):-
    d1.display1();
    
    return 0;
}
