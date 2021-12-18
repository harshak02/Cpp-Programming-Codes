#include<iostream>
using namespace std;

// inline int product(int a,int b){
//     int result;
//     static int i=0;// This runs only first time 
//     i=i+1;// this will run if again the function runs and 
//     //retained i for example i =0 and then i=1 and seocnd time it will be i =2
//     result = a*b+i;
//     return result;
// }
int i = 0;
inline int product(int a,int b){
    int result;
    // int i = 0;// this is i =0; and it retains the value if function calls again
    i=i+1;
    result = a*b+i;
    return result;
}

//inline is used when function calls many  number of times;

int main(){
    int a,b;
    int result;

    cout<<"Enter the value of num1 : "<<endl;
    cin>>a;
    cout<<"Enter the value of num2 : "<<endl;
    cin>>b;

    result = product(a,b);
    cout<<"The product of numbers is : "<<result<<endl;
    result = product(a,b);
    cout<<"The product of numbers is : "<<result<<endl;
    result = product(a,b);
    cout<<"The product of numbers is : "<<result<<endl;
    result = product(a,b);
    cout<<"The product of numbers is : "<<result<<endl;
    result = product(a,b);
    cout<<"The product of numbers is : "<<result<<endl;
    result = product(a,b);
    cout<<"The product of numbers is : "<<result<<endl;
    result = product(a,b);
    cout<<"The product of numbers is : "<<result<<endl;
    result = product(a,b);
    cout<<"The product of numbers is : "<<result<<endl;
    result = product(a,b);
    cout<<"The product of numbers is : "<<result<<endl;


    
    return 0;
}


//inline is used when we call the functions n no. of times

// here int i =0; is declared globally then no need of usage of static
//if int i =0; is used inside the function then use static int i; or static int i =0;
// so that it will reatin the values; if we use i = i+1;