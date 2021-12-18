#include<iostream>
using namespace std;

// Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    //It is used to initialize the objects of its class
    //It is automatically invoked whenever an object is created


class complex{
    private :

    int a;
    int b;

    public :

    complex(void);//--> This is the deafult condtructor coz it wont take 
    // any arguments

    void display(void);
};

complex :: complex(void){
    a = 3;
    b = 4;
}

void complex :: display(void){
    cout<<"The complex number is : "<<a<<" + "<<b<<"i"<<endl;
    cout<<"Hello world"<<endl;
}

int main(){
    complex c1;

    c1.display();/*how many time you enter c1 that many times indirectly the complex 
    constructer runs */
    c1.display(); 
    return 0;
}

/*  Characteristics of Constructors

1. It should be declared in the public section of the class 
2. They are automatically invoked whenever the object is created 
3. They cannot return values and do not have return types
4. It can have default arguments 
5. We cannot refer to their address

*/

