#include<iostream>
using namespace std;

class employee{

    public :

    int inpid;
    float salary;

    employee(int x){
        inpid = x;
        salary = 1000.50;
    }

    employee();// compulsory
    /*this should be created if we create a constructor in the base
    class and if constructor is not used in base class like the tut38 and tut39
    no nneed to crate a blank constructor in the BASE CLASS*/

    void display(){
        cout<<"This is the inpid :"<<inpid<<endl;
        cout<<"The salary is :"<<salary<<endl;
    }

};

// class programme : private employee{

//     public :

//     int language_code;

//     programme(int y){
//         inpid = y;
//         salary = 900.80;
//         language_code = 9;
//     }

//     void display1();

// };

class programme : public employee{

    public :

    int language_code;

    programme(int y){
        inpid = y;
        salary = 900.80;
        // if we comment out the above ones then we get garabage values
        // even in the public case of visibility mode for the inherited 
        //varaiables like the inpid and salary
        language_code = 9;
    }

};

employee :: employee(){

};


// use for private visibility view
// void programme :: display1(){

//     cout<<"The value of the inpid is : "<<inpid<<endl;
//     cout<<"The value of salary is : "<<salary<<endl;

// }

int main(){

    employee e1(4);
    programme p1(5);

    e1.display();

    cout<<"The language code is : "<<p1.language_code<<endl;
    cout<<"The inpid  is : "<<p1.inpid<<endl;
    cout<<"The salary is : "<<p1.salary<<endl;


    
    return 0;
}

