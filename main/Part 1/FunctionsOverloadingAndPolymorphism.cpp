#include<iostream>
using namespace std;
float volume(double r, int h){
    return (3.14f*r*r*h);
}

int volume(int a){
    return (a*a*a);
}

int volume(int l,int b,int w){
    return (l*b*w);
}

int main(){
    double r;
    int h,a,l,b,w;

    cout<<"The volume of cube with side 3 is : "<<volume(3)<<endl;
    cout<<"The volume of cubiod with l=3 b=4 and w=5 is : "<<volume(3,4,5)<<endl;
    cout<<"The volume of cylinder with r =4.56 h =4 is : "<<volume(4.56f,4)<<endl;

    return 0;
}