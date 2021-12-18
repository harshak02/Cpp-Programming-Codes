#include<iostream>
using namespace std;

class harsha{

    protected :
        int num;

    public :
        harsha(int x){
            num = x;
        }

        harsha(harsha &k){
            num = k.num;
            cout<<"Man made constructor is used"<<endl;
        }//->man made constructor

        void display(){
            cout<<"The value of num is : "<<num<<endl;
        }
};

int main(){
    
    harsha h1(4);
    h1.display();

    harsha h2(h1);
    h2.display();

    return 0;
}
