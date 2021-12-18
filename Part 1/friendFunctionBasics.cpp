#include<iostream>
using namespace std;

class complex{

    private :
        int x;
        int y;
        friend complex setcomplex(complex o1,complex o2);

    public :

        // friend complex setcomplex(complex o1,complex o2);

        void setdata(int a ,int b){
            x = a;
            y = b;
        }

        void display();
};

void complex :: display(){
    cout<<"The complex number is : "<<x<<" + "<<y<<"i"<<endl;
}

complex setcomplex(complex o1,complex o2){
    complex result;

    result.x = o1.x + o2.x;
    result.y = o1.y + o2.y;

    return result;
}

int main(){

    complex c1,c2,result;

    c1.setdata(2,3);
    c1.display();

    c2.setdata(5,6);
    c2.display();

    result = setcomplex(c1,c2);
    result.display();
    
    return 0;
}


/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/


