#ifndef __subscriber
#define __subscriber

#include<iostream>
#include<string>
using namespace std;

class Subscriber {
    protected :
    string name;
    int idSub;

    public :
    Subscriber();
    void getDetails();
};

Subscriber :: Subscriber(){
    static int temp = 0;
    temp++;
    idSub = temp;
}

void Subscriber :: getDetails(){

    cout<<"Enter your name :"<<endl;
    cin>>name;

}

#endif