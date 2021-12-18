#include<iostream>
#include<list>

using namespace std;

void display(list <int> lst){

    list <int> :: iterator it;
    it = lst.begin();

    for(it; it!=lst.end(); it++){//iterator is not integer;

        cout<<*(it)<<" ";
    }

}

int main(){

    int size;
    int element;

    cout<<"Enter the desired size of list : "<<endl;
    cin>>size;
    
    list <int> list1;// zero lenght list we can and we need to modify this;

    for(int i =0;i<size;i++){

        cout<<"Enter the value of "<<(i+1)<<" element in list :"<<endl;
        cin>>element;
        list1.push_back(element);
        // we cannot use the iter to set values and display
        //so use only once and that too strictly by iter++
        //not *(iter+i);

    }

    list <int> :: iterator iter;
    iter = list1.begin();

    display(list1);

    // iter is used and meant only for the displaying the data in list not in addind data
    // fo adding its strictly recommended to use push_back
    
    return 0;
}
