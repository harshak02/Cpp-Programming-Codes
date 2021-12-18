#include<iostream>
using namespace std;

class point{

    private :
    int x;
    int y;

    public :

    point(int a, int b);

    void display(){
        cout<<"The point is ("<<x<<","<<y<<")"<<endl;
    }
};

point :: point(int a,int b){
    x=a;
    y=b;
}

int main(){

    point p(4,5);
    point q(6,7);

    p.display();
    q.display();

    return 0;
}