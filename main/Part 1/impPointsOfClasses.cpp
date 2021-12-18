#include<iostream>
using namespace std;

// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private


typedef struct employee{
    int salary;

}emp;

int main(){
    emp harsha;

    harsha.salary = 2000000;

    cout<<"Harsha salary is : "<<harsha.salary<<endl;
    
    return 0;
}

//we need to put typedef