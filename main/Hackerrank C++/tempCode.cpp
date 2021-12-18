#include<iostream>
using namespace std;

class base{

    private :
    int num;

    public :

    base(int x){
        num = x;
    }
    
    void compare(base b){
        if(b.num>this->num){
            cout<<"The own variable is less"<<endl;
        }
    }
};
//this is doubt referal to the boxit
int main(){

    base b1(4);
    base b2(32);
    b1.compare(b2);
    
    return 0;
}
