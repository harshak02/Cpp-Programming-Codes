#include<iostream>
#include<list>

using namespace std;

void display(list <int> lst){

    list <int> :: iterator it;
    it = lst.begin();

    for(it; it!=lst.end(); it++){

        cout<<*(it)<<" ";
    }

}

int main(){

    int size;
    int element;

    cout<<"Enter the desired size of list : "<<endl;
    cin>>size;
    
    list <int> list1(4);// here the first 4 elements will be zero and the data
    // will be added thereafter

    for(int i =0;i<size;i++){

        cout<<"Enter the value of "<<(i+1)<<" element in list :"<<endl;
        cin>>element;
        list1.push_back(element);


    }

    list <int> :: iterator iter;
    iter = list1.begin();

    display(list1);
    
    return 0;
}
