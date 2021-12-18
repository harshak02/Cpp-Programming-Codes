#include<iostream>
using namespace std;

int main(){
    int num;
    int den;
    float result;

    cout<<"Enter the numerator :"<<endl;
    cin>>num;
    cout<<"Enter the denominator :"<<endl;
    cin>>den;

    try{

        if(den==0){
            throw den;
        }
       result = (float)num/den; 
    }
// this catch and throw should be side by side
    catch(int den){
        cout<<"The division is N.D"<<endl;
    }

    cout<<"The division is : "<<result;

    return 0;
}
