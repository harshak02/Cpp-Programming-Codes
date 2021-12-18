#include<iostream>
using namespace std;

class base{

    protected :
        int a;

    public :
        void getdata(int x){
            a = x;
        }


        void display(){
            cout<<"The value of a is : "<<a<<endl;
        }

};


class base1 : virtual public base{

    protected :
        int b;

    public :

        void display1(){

            cout<<"The value of a in the base1 class is : "<<a<<endl;
        }

        void display(){
            cout<<"Boguscode"<<endl;// here this only runs not that function
            //came from base class
        }

};


class base2 : virtual public base{

    protected :
        int a = 6;// compulsorily we need to write the int a even if it is inherited

    public :
        void display(){
            cout<<"The value of a in the base2 class is : "<<a<<endl;
        }

};


class derived : public base1 , public base2 {

    public :

        void display3(){
            cout<<"The value of a in the derived class is : "<<a<<endl;
        }
};


int main(){

    base b;
    base1 b1;
    base2 b2;
    derived d;

    b.getdata(4);
    b.display();
    b1.display();
    b1.display1();
    b2.display();
    d.display3();

    return 0;
}

// so the obsevation is it will take the new a value entered eevn if if we derive virtually


/*
1) Like if we inherit the int a from base class to the derived class,the to change that
in the derived cls we agian need to use int a = 'x';
2) in case of above case to the functions then no need to specify again void for void 
functions and int for int functions if they are put inside some derived cls member
function or otherwise we need to use void or int if we use it outside the derived class
member function
3) if we directly use like int a = 4;
then the a get inherited to the derived classes with value 
4) but if a is given a value by some getdata function then the only the int a is inherited 
but not the value given by that
5) whenever if any value changed in inhertinh by virtual process the derived will take
the new values into derived cls by inheritance
6) suppose if we use the same named function in derived class in which aldery that
function derived then new function that built in the deived function will run
*/

