#include<iostream>
using namespace std;

class Y;

class X{

    private :
    int data;

    friend class Y;//may or ay not useful;
    friend void add(X o1, Y o2);

    public :  
    void getinf(int value){
        data = value;
    }
};

class Y{

    private :
    int num;

    friend class X;
    friend void add(X o1, Y o2);

    public :  
    void getinf1(int value1){
        num = value1;
    }
};

void add(X o1, Y o2){
    int k;
    k = o1.data+o2.num;

    cout<<"The sum of the data of X and Y objects is : "<<k<<endl;
}

int main(){

    X x1;
    Y y2;

    x1.getinf(4);
    y2.getinf1(5);

    add(x1,y2);

    return 0;
}


