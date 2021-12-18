#include<iostream>
using namespace std;
// example for deafult arguments in constructors
class simple{

    private :

    int a;
    int b;
    int c;

    public :

    simple(int x,int y,int z);
// very very imp is here we shold not write like this--> simple(int x,int y=10,int z=12);
    void display(){
    
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
    }
};

simple :: simple(int x,int y=10,int z=12){// here we can write like this 
    a = x;
    b = y;
    c = z;
}

int main(){
    simple s1(4,5,6);
    simple s2(2,4);
    simple s3(2);

    s1.display();
    s2.display();
    s3.display();

    return 0;
}

