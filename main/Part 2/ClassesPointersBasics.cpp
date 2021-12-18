#include<iostream>
using namespace std;

class base{

    public :
        int a = 6;

        // base(int x){
        //     a = x;
        // }

        // base(){

        // }


};

class derived : public base{

    public :
        void display(){
            cout<<a<<endl;

        }

};

int main(){

    derived *ptr = new derived[2];

    (*(ptr)).display();
    (*(ptr+1)).display();
    
    return 0;
}


