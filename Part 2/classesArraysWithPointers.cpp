#include<iostream>
using namespace std;

class complex{

    private :
    int real;
    int imaginary;

    public :

    void get_data(int x,int y){

        real = x;
        imaginary = y;
    }

    void display(){

        cout<<"The real part of the complex no. is : "<<real<<endl;
        cout<<"The imaginary part of the complex no. is : "<<imaginary<<endl;

    }
};

int main(){

    complex c1;
    // c1.get_data(4,5);
    // c1.display();

    // complex *ptr = &c1; // here ptr is used as pointer and
    //c1 is used as complex class object
    // (*ptr).get_data(1,2);
    // (*ptr).display();

    // complex *ptr = new complex; // only we can use as pointer 
    // (*ptr).get_data(6,7);
    // ptr->get_data(6,7);
    // (*ptr).display();
    // ptr->display();


// in c for structures and  malloc concepts use the &(*(ptr+i)).a etc;
    complex *ptr = new complex[3];

    ptr[0].get_data(1,2);
    ptr[0].display();
    //or

    (*(ptr+0)).get_data(1,2);
    (*(ptr+0)).display();
    //or
    
    (ptr+0)->get_data(1,2);
    (ptr+0)->display();

    return 0;
}
