#include<iostream>
using namespace std;

class complex{

    private :
    int a;
    int b;

    public :

    void getdata(int x,int y){
        a=x;
        b=y;
    }

    void setdatabysum(complex o1,complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void display();
};

void complex :: display(){
    cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
}

int main(){

    complex c1,c2,c3;

    c1.getdata(2,3);
    c1.display();

    c2.getdata(4,5);
    c2.display();

    c3.setdatabysum(c1,c2);
    c3.display();

    
    return 0;
}
// here no need to use static values coz there is no repated datatype 
//it only seen max in the arrays cases;