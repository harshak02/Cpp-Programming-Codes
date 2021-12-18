#include<iostream>
using namespace std;

class number{

    private :
    int num;

    public:

    number(int x);
    number(){

    }

    // here the down function is may or may not coz 
    // the complier have that inbuilt
    // use the & if we use the copy functions
    // number(number &k){

    //     cout<<"By using the manmade copy constructor"<<endl;
    //     num = k.num;

    // }

    void display();
};

number :: number(int x){
    num = x;
}

void number :: display(){

    cout<<"The number is : "<<num<<endl;
}

int main(){

    number n1(4);
    number n2(5);
    // number n3();// dont write this likr this write as -->
    number n3;

    n1.display();
    n2.display();
    n3.display();// will give some garbage value
    number n4(n1);
    n4.display(); 
    
    return 0;
}

