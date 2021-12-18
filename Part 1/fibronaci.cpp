#include<iostream>
using namespace std;
int fib(int n);

int main(){
    // fibronaci : fib(3) = fib(2)+fib(1); fib(1)=1 and fib(2)=2

    int n;
    cout<<"Enter the value of n\n";
    cin>>n;

    int result;
    result = fib(n);

    cout<<"The "<<n<<" term in the fibronaci series is : "
    <<result<<endl;

    return 0;
}

int fib(int n){
    int result;
    if(n<=2){
        result = 1;
    }

    else{
        result = fib(n-1)+fib(n-2);
    }

    return result;
}
