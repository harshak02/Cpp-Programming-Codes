#include<iostream>
#include<functional>
#include<algorithm>// used for sort

using namespace std;

int main(){

    int arr[] = {2,5,3,8,45,23,12};

    // sort(arr,arr+6);// till the end of 6th element gives the sorted order
    // //in this function members pls think very slightly not deeply so think 
    // //generally like arr+6 means upto 6Th element etc...

    sort(arr,arr+7,greater<int>());

    for(int i =0;i<7;i++){
        cout<<arr[i]<<endl;
    }
    
    return 0;
}

// function mey cls use kar dia ham log function objects bolte isko
//simply functors

//*********************THE END!!!****************************