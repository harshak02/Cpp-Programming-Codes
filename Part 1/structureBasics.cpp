#include<iostream>
using namespace std;

// struct employee{
//     int id;
//     float salary;
//     char favchar;
// };

typedef struct employee{
    int id;
    float salary;
    char favchar;
}emp;

int main(){

    // struct employee harsha;
    // struct employee shubam;
    // struct employee rohandas;

    emp harsha;
    emp shubam;
    emp rohandas;

    harsha.id = 100;
    harsha.salary = 120000000;
    harsha.favchar ='k';

    cout<<"The value is "<<harsha.id<<endl;
    cout<<"The value is "<<harsha.salary<<endl;
    cout<<"The value is "<<harsha.favchar<<endl;

    
    return 0;
}