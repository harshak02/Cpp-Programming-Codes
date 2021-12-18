#include<iostream>
using namespace std;

class employee{

    private :
    int a,b,c;

    public :
    int d,e;
    void setdata(int x,int y,int z);
    void getdata(){
        cout<<"The value of a is : "<<a<<endl;
        cout<<"The value of b is : "<<b<<endl;
        cout<<"The value of c is : "<<c<<endl;
        cout<<"The value of d is : "<<d<<endl;
        cout<<"The value of e is : "<<e<<endl;
    }

};

void employee :: setdata(int x,int y,int z){
    a=x;
    b=y;
    c=z;
}

int main(){
    employee harry;
    harry.d = 4;
    harry.e = 5;

    harry.setdata(1,2,3);
    harry.getdata();

    
    return 0;
}
