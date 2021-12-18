#include<iostream>
using namespace std;
int count =0;

// Destructor never takes an argument nor does it return any value 

class num{

    public :

    // static int count;

    num(){
        count++;
        cout<<"This the time entering the constructer for object number n"
        <<count<<endl;
    }

    ~num(){
        cout<<"This the time entering the destructeor for object number n"
        <<count<<endl;
        count--;

    }

};

// int num :: count; we can use this or that above declaration

int main(){

    cout<<"Entering the main function"<<endl;
    cout<<"Creating the num n1"<<endl;

    num n1;
    {
        cout<<"Entering the block"<<endl;

        cout<<"Creating another two num2 and num3"<<endl;
        num n2,n3;

        cout<<"Exiting the block"<<endl;

    }

    cout<<"Back to main function "<<endl;
    
    return 0;
}
