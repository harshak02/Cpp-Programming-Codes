#include<iostream>
using namespace std;

class c2;

class c1{
    private :
    int a;
    friend class c2;

    friend void swap(c1 &har,c2 &sha);

    public :
    void getdata(int x){
        a = x;
    }

    void display();
};

class c2{
    private :
    int b;
    friend class c1;

    friend void swap(c1 &har,c2 &sha);

    public :
    void getdata(int y){
        b = y;
    }

    void display1();
};

void c1 :: display(){
    cout<<"The value of the a is : "<<a<<endl;
}

void c2 :: display1(){
    cout<<"The value of the b is : "<<b<<endl;
}

void swap(c1 &har,c2 &sha){// here we need to use only normal & to swap in classes
// in c we need to use pointers
    int temp;
    temp =har.a;
    har.a =sha.b;
    sha.b = temp;

}


int main(){

    c1 o1;
    c2 o2;
    int m = 4;
    int n = 5;

    o1.getdata(m);
    o2.getdata(n);

    swap(o1,o2);
    o1.display();
    o2.display1();
    
    return 0;
}


/*
1) if we are gonna access a function of one class from other class then we need to 
write the "friend class XXXXX"
2) if we are gonna access a normal function and a aclass than no need to write 
"friend class XXXXX" 
3) if we are in the point no. 1 stage then we need to write in the function prototype
just the data type( like (complex,complex))
4)if in the point no 1 case we need to specify the function protoype in the class
and write all other complte function defination down after class
5)if its gonna rturen some result then we need to write in the fomat like
result = "function"
*/
