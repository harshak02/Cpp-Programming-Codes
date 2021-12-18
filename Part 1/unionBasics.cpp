#include<iostream>
using namespace std;

union money{
    int rice;
    char car;
    float pounds;
};

int main(){
    union money m1;
    union money *ptr=&m1;

    ptr->rice = 34;
    ptr->car = 'c';

    cout<<ptr->rice<<endl;
    cout<<ptr->car<<endl;
    cout<<ptr->pounds<<endl;
    
    return 0;
}
