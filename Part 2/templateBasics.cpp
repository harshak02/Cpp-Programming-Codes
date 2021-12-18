#include<iostream>
using namespace std;

template <class T>
class vector{

    private :
    int size;
    T dotprod;
    T *ptr;

    public :
    vector(T temp){
        size = temp;
        ptr = new T[size];
        dotprod = 0;
    }

    void setData(){

        for(int i = 0;i<size;i++){
            cout<<"Enter the "<<i+1<<" element"<<endl;
            cin>>*(ptr+i);
        }
    }

    T dotProduct(vector v){
        for(int i =0;i<size;i++){
            dotprod+= (this->ptr[i]*v.ptr[i]);
        }
    
        return dotprod;
    }

    void printData(){
        
        char arr[] = {'i','j','k'};
    
        cout<<"The vector is ";
        int i = 0;
        for(i;i<size-1;i++){
            cout<<this->ptr[i]<<arr[i]<<" + ";
        }
    
        cout<<this->ptr[i]<<arr[i];
    
        cout<<endl;
            
        }

};


int main(){

    vector <int> v1(3);
    vector <int> v2(3);
    v1.setData();
    v2.setData();
    v1.printData();
    v2.printData();
    int temp1;
    temp1 = v1.dotProduct(v2);
    int temp2;
    temp2 = v2.dotProduct(v1);
    cout<<"the dot product in the first case is "<<temp1<<endl;
    cout<<"the dot product in the second case is "<<temp2<<endl;
    
    return 0;
}
