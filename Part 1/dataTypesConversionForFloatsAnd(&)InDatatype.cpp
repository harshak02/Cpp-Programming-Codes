#include<iostream>

using namespace std;
int main(){

    // float d = 34.4F;
    // long double k = 34.4l;

    float d =34.4;
    float & y = d;

    cout<<"The size of the 34.4 is : "<<sizeof(34.4)<<endl;
    cout<<"The size of the 34.4f is : "<<sizeof(34.4f)<<endl;
    cout<<"The size of the 34.4F is : "<<sizeof(34.4F)<<endl;
    cout<<"The size of the 34.4l is : "<<sizeof(34.4l)<<endl;
    cout<<"The size of the 34.4L is : "<<sizeof(34.4L)<<endl;

    cout<<"The value of the float d is : "<<d<<endl;

    // cout<<"The value of float d is "<<d<<endl
    // <<"The value of long double k is "<<k;

    //we can use the capital F and capital L in that
    return 0;

}
// the default one is unsigned int or float

