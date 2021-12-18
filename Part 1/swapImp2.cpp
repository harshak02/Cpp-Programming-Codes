#include<iostream>
using namespace std;

// we need to enter more detailed int he above function
//like void swap(int *ptr1,int *ptr2)
// but in the main function we can wntwr few details
//like swap(ptr1,ptr2)

void swap(int *ptr1,int *ptr2){
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main(){
    int a=4;
    int *ptr1 = &a;
    int b=5;
    int *ptr2 = &b;

    cout<<"The numbers a and b before swap are : "<<a<<" and "<<b
    <<endl;

    swap(ptr1,ptr2);

    cout<<"The numbers a and b before swap are : "<<a<<" and "<<b
    <<endl;
    return 0;
}

/*for normal datatpes we need to use pointers to change but for arrs 
and strings they can also manuplate directly coz they point to
address itself*/