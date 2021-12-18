#include<iostream>
using namespace std;
// this code is my version of tut 49
class test{

    protected :
    int a;
    int b;

    public :

    // test(int x,int y) : a(x), b(y) {
    // test(int x,int y) : a(y), b(x) {
    // test(int x,int y) : a(x), b(x+y) { 
    // test(int x,int y) : a(x), b(a+y) {
    // test(int x,int y) : b(x), a(y) { // it will work   
    // test(int x,int y) : b(a+x),a(y){
    test(int x,int y) : b(x), a(y+b) {// this one will give garbage value coz
    // we defined in class first int a and then int b

        cout<<"The initialization has executed"<<endl;
        cout<<"The value of a is : "<<a<<endl;
        cout<<"The value of b is : "<<b<<endl;
    }
};

int main(){

    test t(4,5);

    return 0;
}
