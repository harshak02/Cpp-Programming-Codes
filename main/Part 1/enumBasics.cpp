#include<iostream>
using namespace std;

enum meal {
    breakfast,lunch,dinner
};

int main(){

    meal m1,m2;
    m1 = breakfast;
    m2 = dinner;

    cout<<m1<<endl;
    cout<<(m2==1)<<endl;
    cout<<(m2==2)<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

    return 0;
}

// somwhhat similar to bool datatype