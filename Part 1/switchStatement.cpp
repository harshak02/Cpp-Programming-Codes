#include<iostream>

using namespace std;
int main(){
    //switch case example;
    int age;

    cout<<"Enter the value of age :"<<endl;
    cin>>age;

    switch(age){
        case 13 :
        cout<<"You have entered teenage"<<endl;
        break;

        case 18 :
        cout<<"You have completed your teenage"<<endl;
        break;

        case 90 :
        cout<<"You are old"<<endl;
        break;

        default :
        cout<<"Your age spec is not defined and your age is : "<<age<<endl;
    }

    return 0;
}