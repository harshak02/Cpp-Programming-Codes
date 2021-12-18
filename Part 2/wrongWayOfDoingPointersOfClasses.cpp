#include<iostream>
using namespace std;

template <class T>
class vector{

    public :
    T result;
    T *ptr;// we should compulsorily mention like this while building an array in template
    int size;
    T dot = 0;

    vector(T x){
        size = x;
        // ptr = new T[size];
        ptr= new T[size];
    }

    // T dotproduct(vector v1,vector v2){

    //     for(int i =0;i<size;i++){

    //         dot+=(v1.ptr[i]*v2.ptr[i]);
    //     }

    //     result = dot;
    //     return result;
    // }

    T dotproduct(vector v){

        for(int i =0;i<size;i++){

            dot+= (this->ptr[i]*v.ptr[i]);
        }

        result = dot;
        return result;
    }

};

int main(){
    int result;// we cannot use template variable here we need to define directly

    vector <int> a(3);
    a.ptr[0] = 4;
    a.ptr[1] = 3;
    a.ptr[2] = 1;

    vector <int> b(3);
    b.ptr[0]= 1;
    b.ptr[1]= 0;
    b.ptr[2] = 1;

    // vector <int> c(3);
    // result = c.dotproduct(a,b);

    result = a.dotproduct(b);// this pointer is used for a.arr in above class

    cout<<"The dot product is : "<<result<<endl;

    return 0;
}

