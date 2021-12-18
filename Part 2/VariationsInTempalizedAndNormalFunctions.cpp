#include<iostream>
#include<cstring>

using namespace std;

void function(int x){// this will be given priority
    cout<<"The main normal function() is executed\n";
    cout<<"The data is : "<<x<<endl;
}

template <class T>//it will be executed automatically according
// to the custom data type so no need to mention in anything in
// the main function
void function(T x){
    cout<<"The tempalized function() is executed\n";
    cout<<"The data is : "<<x<<endl;
}

int main(){

    function(4.6);// templatized
    function(4);//nomralized
    function('a');//templatized
    function("stringu");//templatized
    return 0;
}
