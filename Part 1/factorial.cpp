#include<iostream>
using namespace std;
int fac(int n);

int main(){
    int n;

    cout<<"Enter the value of n\n";
    cin>>n;

    int result;
    result = fac(n);

    cout<<"The factorial of "<<n<<" is : "<<result<<endl;
    return 0;
}

int fac(int n){
    int result;
    if(n==1){
        result = 1;
    }

    else{
        result = n*fac(n-1);
    }

    return result;
}