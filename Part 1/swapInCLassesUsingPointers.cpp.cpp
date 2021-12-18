#include<iostream>
using namespace std;

class Y;

class X{

    private :
        int num1;
        // friend class Y;
        friend void swap(X *ptr1,Y *ptr2);

    public :
        void setdata(int a){
            num1 = a;
        }

        void displayx(){
            cout<<"The value of num1 is : "<<num1<<endl;
        }

};

class Y{

    private :
        int num2;
        // friend class X;
        friend void swap(X *ptr1,Y *ptr2);

    public :
        void setdata(int b){
            num2 = b;
        }

        void displayy(){
            cout<<"The value of num2 is : "<<num2<<endl;
        }

};

void swap(X *ptr1,Y *ptr2){
    int temp;
    temp = (*ptr1).num1;
    (*ptr1).num1 = (*ptr2).num2;
    (*ptr2).num2 = temp;
}

int main(){
    X x;
    X *ptr1;
    ptr1 = &x;
    Y y;
    Y *ptr2;
    ptr2 = &y;
    x.setdata(4);
    y.setdata(5);

    swap(ptr1,ptr2);

    x.displayx();
    y.displayy();

    
    return 0;
}

