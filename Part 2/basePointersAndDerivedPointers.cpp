#include<iostream>
using namespace std;

class base{

    public :

      int base_int = 100;// this also runs in which we define the pointer

    //   void display1(){
      void display(){

        cout<<"The value of integer in base is : "<<base_int<<endl;
      } 

};


class derived : public base{

    public :

      int derived_int;
      int base_int = 1000;

      void display(){

        cout<<"The value of integer in derived is : "<<derived_int<<endl;
        cout<<"The value of integer in base is : "<<base_int<<endl;
      } 

};


int main(){

    // base b;
    base *ptrb;
    derived d;
    derived *ptrd;


    ptrb = &d;// ptrB this b is imp in reservation rule;
    ptrd = &d;// this is crct// normal case

    // (*ptrb).base_int = 5;
    //ptrd = &b// wrong thing only pointres from base to point of derived

    //(*ptrb).derived_int = 4;// not accepted coz ptrb is pointed to
    //base class so it only access the members from only base class

    (*ptrb).display();
    ptrb->display();

    // ptrd->base_int = 94;
    ptrd->derived_int = 98;
    ptrd->display(); // this is from the derived display will run
    // if both are same then derived display will run
    //coz the pointer is from derived class

    // (*ptrd).base_int = 6;
    (*ptrd).display();// this is wrong according to c++ only base pointer 
    //can point to derived but not vice versa
    
    return 0;
}

//look the pointers in the base class and derived classes will act like
// they provide resrvation only to the class and its memebers from whwer
//the poiinter is diveded like exmaple if pointer is derived from base 
//class then even if its point to the derived class.... if suppose there
//aretwo same named functions in derived and based then reservation is
// given to the base membered function and

/* 
we can only point the base class pointer to the derived but not vice-
versa ansd we can point the derived pointer to derived cls and here same the
resevaration rule works;
*/
