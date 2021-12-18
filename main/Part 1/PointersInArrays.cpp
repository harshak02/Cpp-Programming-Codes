#include<iostream>
using namespace std;

int main(){
    int marks[] = {34,56,78,98};
    int *ptr = marks;

    for(int i =0;i<4;i++){
        cout<<"The value of "<<(i+1)<<" array element "<<*(ptr+i)<<endl;
    }

    cout<<*(ptr++)<<endl;
    cout<<*(++ptr)<<endl;
    
    return 0;
}
