#include<iostream>
#include<cmath>

using namespace std;

class point{

    private :

    int x;
    int y;
    // friend void distance(point p, point q);->not used here
    
    public :

    point(int a,int b);

    void distance(point p, point q){
    float result;

    result = sqrt(pow(p.x-q.x,2)+pow(p.y-q.y,2));

    cout<<"The distance between p and q is : "<<result<<endl;
    cout<<" harrr"<<endl;
    }

    // float distance(point p, point q){
    // float result;

    // result = sqrt(pow(p.x-q.x,2)+pow(p.y-q.y,2));

    // return result;

    // }
};

point :: point(int a,int b){
    x=a;
    y=b;
}

int main(){
    int x1,y1;
    int x2,y2;
    float result;

    cout<<"Enter the value of the x coordinate of 1st point : "<<endl;
    cin>>x1;

    cout<<"Enter the value of the x coordinate of 2nd point : "<<endl;
    cin>>x2;

    cout<<"Enter the value of the y coordinate of 1st point : "<<endl;
    cin>>y1;

    cout<<"Enter the value of the y coordinate of 2nd point : "<<endl;
    cin>>y2;

    point i(x1,y1);
    point j(x2,y2);
    point k(0,0);

    // result = k.distance(i,j);
    k.distance(i,j);

    // cout<<"The distnace b/w p and q is : "<<result<<endl;

    return 0;
}

