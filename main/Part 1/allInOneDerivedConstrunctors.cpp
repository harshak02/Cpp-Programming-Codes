// #include<iostream>
// using namespace std;

// class A{

//     protected :
//         int a;

//     public :
//         A(int x){
//             a = x;
//         }

//         A(){
//             // imp;
//         }

//         void display(){
//             cout<<a<<endl;
//         }
// };

// class B : public A{

//     protected :
//         int b;

//     public :
//         B(int x){
//             b = x;
//         }

//         void display(){
//             cout<<b<<endl;
//         }
// };

// int main(){

//     A m(4);
//     B n(5);
//     m.display();
//     n.display();
    
//     return 0;
// }


#include<iostream>
using namespace std;

class A{

    protected :
        int a;

    public :
        A(int x){
            a = x;
        }

        void display(){
            cout<<a<<endl;
        }
};

class B{

    protected :
        int b;

    public :
        B(int x){
            b = x;
        }

        void display(){
            cout<<b<<endl;
        }
};

class C : public A ,public B{

    protected :
        int c;

    public :
        C(int i,int j,int k) : A(i),B(j){
            c = k;
        }
        

        void display(){
            cout<<a<<endl;
            cout<<b<<endl;
            cout<<c<<endl;
        }

};

int main(){

    A m(4);
    B n(5);
    C k(4,5,6);
    //C k(1,2,6);
    m.display();
    n.display();
    k.display();
    
    return 0;
}
