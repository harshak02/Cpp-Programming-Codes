#include<iostream>
using namespace std;

class employee{

    public :

    int inpid;
    float salary = 1000.50;

    employee(int x){
        inpid = x;
        // salary = 1000.50;
    }

    employee();// this is imp when we created the inherited class if constructor is created

    void display(){
        cout<<"This is the inpid :"<<inpid<<endl;
        cout<<"The salary is :"<<salary<<endl;
    }

};

class programme : private employee{

    public :

    int language_code;

    programme(){

        /* here we can only inherit the variabales but not their values as of derived
        in the respective base classes*/
        // inpid = y;
        // salary = 900.80;
        language_code = 9;
    }

    void display1();

};

employee :: employee(){

};

void programme :: display1(){

    cout<<"The value of the inpid is : "<<inpid<<endl;
    cout<<"The value of salary is : "<<salary<<endl;

}

int main(){

    employee e1(4);
    programme p1;

    cout<<"The language code is : "<<p1.language_code<<endl;

    e1.display();
    p1.display1();
    
    return 0;
}

// whenever u use the the constructor in base class pls create a void
//base constructor if derived cls is derived how ever it may be derived




