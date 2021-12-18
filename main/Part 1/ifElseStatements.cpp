#include<iostream>

using namespace std;
int main(){
    // cout<<"This is tutorial 9 in C++";
    int age;

    cout<<"Enter the value of age :"<<endl;
    cin>>age;

    if(age>18){
        cout<<"You can come to the party"<<endl;
    }

    else if(age==18){
        cout<<"You can enter the party with the pass"<<endl;
    }


    else{
        cout<<"You cannot come to the party"<<endl;
    }
    return 0;
}

