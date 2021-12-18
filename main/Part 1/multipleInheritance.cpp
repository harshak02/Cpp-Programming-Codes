#include<iostream>
using namespace std;

/* we can even build multi inheritance by 3 classes we can even 
add the base3 class and put in the derived cls syntax*/
class base1{

    protected :
    int base1int;

    public :

    void set_base1int(int x){
        base1int = x;
    }

    int set_base1int1(int x){
        return x;
    }

};

class base2{

    protected :
    int base2int;

    public :

    void set_base2int(int y){
        base2int = y;
    }

    int set_base2int1(int y){
        return y;
    }
    
};

class derived : public base1 , public base2{

    // protected :
    // int base1int;
    // int base2int;

    public:

    // void set_base2int(int y){
    //     base2int = y;
    // }

    // void set_base1int(int x){
    //     base1int = x;
    // }

    // int set_base2int1(int y){
    //     return y;
    // }

    // int set_base1int1(int x){
    //     return x;
    // }

    int sum(int x, int y){

        return (x+y);
    }

    void display(){

        cout<<"The value of the int in base 1 is : "<<base1int<<endl;
        cout<<"The value of the int in base 2 is : "<<base2int<<endl;
        cout<<"The sum of the two numbers is : "<<sum(base1int,base2int)<<endl;
    }

};

int main(){

    derived d1;

    // this down is for printing the values in the class thru display function
    d1.set_base1int(4);
    d1.set_base2int(5);
    
    d1.display();

    // this down is to print the values in the main function

    cout<<"The value of the int in base 1 is : "<<d1.set_base1int1(4)<<endl;
    cout<<"The value of the int in base 2 is : "<<d1.set_base2int1(5)<<endl;
    cout<<"The value of the sum of 2 integers is : "<<d1.sum(d1.set_base1int1(4),d1.set_base1int1(5))<<endl;



    return 0;
}
