#include<iostream>
using namespace std;

class base1{

    public :

    void greet(){
        cout<<"Hello harrybhai"<<endl;
    }
};

class base2{

    public :

    void greet(){
        cout<<"Kaiso ho harrybhai"<<endl;
    }
};

// virtual concept will come only when (once refer to the virtualInhert
//code)
class base3 : public base1 , public base2{

    // public :

    // void greet(); from base b1
    // void greet(); from base b2

    public :

    void greet(){

        base1 :: greet();

    }

};

class base{

    public :
    void say(){
        cout<<"This is car"<<endl;
    }
};

class derived : public base{
    // public :
    // void say();

    public :

    void say();
};

void derived :: say(){
    cout<<"This is cartoon"<<endl;// it will overwrite the values and take fresh
    // values as we aldready observed this with the variables values cases in the
    // tut37 case
}

int main(){
    
    base1 b1;
    base2 b2;
    base3 b3;
    base b;
    derived d;

    b1.greet();
    b2.greet();
    b3.greet();
    b.say();
    d.say();

    return 0;
}
