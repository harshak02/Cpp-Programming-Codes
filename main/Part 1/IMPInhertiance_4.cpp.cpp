#include <iostream>
using namespace std;

class base{

protected:
    int a = 8;

private:
    int b = 9;

public:
    int c = 10;

    int getb(){
        return b;
    }

};

/*
For a protected member:
                        Public derivation   Private Derivation   Protected Derivation
    1. Private members      Not Inherited   Not Inherited       Not Inherited
    2. Protected members    Protected       Private             Protected
    3. Public members       Public          Private             Protected
*/


class derived : protected base{

    public :

    int getc(){
        return c;
    }

    int geta(){
        return a;
    }

    int getbb(){
        return getb();// nesting of functions 
    }

    void display(){

        cout<<"The value of a is : "<<geta()<<endl;
        cout<<"The value of b is : "<<getbb()<<endl;
        cout<<"The value of c is : "<<getc()<<endl;
    }


};

int main(){

    derived d1;

    cout<<"The value of a is : "<<d1.geta()<<endl;
    cout<<"The value of b is : "<<d1.getbb()<<endl;
    cout<<"The value of c is : "<<d1.getc()<<endl;

    d1.display();

    return 0;
}

