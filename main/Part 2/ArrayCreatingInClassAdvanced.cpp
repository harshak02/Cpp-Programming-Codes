#include<iostream>
using namespace std;

template <class T>
class vector{

    public :
    T result;
    T *arr;// we should compulsorily mention like this while building an array in template
    T size;
    T dot = 0;

    vector(T x){
        size = x;
        // arr = new T[size];
        arr= new T[size];
    }

    // T dotproduct(vector v1,vector v2){

    //     for(int i =0;i<size;i++){

    //         dot+=(v1.arr[i]*v2.arr[i]);
    //     }

    //     result = dot;
    //     return result;
    // }

    T dotproduct(vector v){

        for(int i =0;i<size;i++){

            dot+= (this->arr[i]*v.arr[i]);
        }

        result = dot;
        return result;
    }

};

int main(){
    int result;// we cannot use template variable here we need to define directly

    vector <int> a(3);
    a.arr[0] = 4;
    a.arr[1] = 3;
    a.arr[2] = 1;

    vector <int> b(3);
    b.arr[0] = 1;
    b.arr[1] = 0;
    b.arr[2] = 1;

    // vector <int> c(3);
    // result = c.dotproduct(a,b);

    result = a.dotproduct(b);// this pointer is used for a.arr in above class

    cout<<"The dot product is : "<<result<<endl;

    return 0;
}
