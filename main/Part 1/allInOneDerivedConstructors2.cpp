#include <iostream>

using namespace std;

class A{
    
    protected:
    int a = 7;
    
    public :
    A(int x){
        a = x;
    }
    
    A(){
        
    }
    
    void display(){
        cout<<a<<endl;
    }
};

class B{
    
    protected:
    int b = 8;
    
    public :
    B(int y){
        b = y;
    }
    
    B(){
        
    }
    
    void display(){
        cout<<b<<endl;
    }
};

class C : public A,public B{
    
    protected :
    int c;
    
    public :
    // C(int x,int y,int z) : A(x),B(y){
    //     c = z;
    // }
    
    C(int x){
        c = x;
    }
    
    void display(){
        cout<<c<<endl;
        cout<<b<<endl;
        cout<<a<<endl;
    }
};

int main(){
    
    A m(5);
    B n(6);
    C k(1);
    m.display();
    n.display();
    k.display();

    return 0;
}
