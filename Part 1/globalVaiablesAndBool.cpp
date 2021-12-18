#include<iostream>
using namespace std;

int glo = 6;
bool boo = false;
//bool boo = true;

void fun(){
    cout<<glo<<"\n";
}

int main(){
    int glo = 8;
    cout<<glo<<"\n";

    glo =78;
    cout<<glo<<"\n";

    fun();
    cout<<glo<<"\n";

    cout<<boo;

    return 0;

}
