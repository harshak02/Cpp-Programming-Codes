#include<iostream>
using namespace std;

int main(){
    for(int i=0;i<=20;i++){

        cout<<"The nummer is : "<<i<<endl;
        if(i==2){
            break;
        }

    }

    for(int i=0;i<=20;i++){

        if(i==2){
            continue;
        }

        cout<<"The nummer is : "<<i<<endl;

    }
    return 0;
}
