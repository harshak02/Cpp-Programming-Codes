#include<iostream>
#include<list>

using namespace std;

template <class T>
void display(list <T> lst){

    list <int> :: iterator it;// template wont work in deriving the itrator
    //step;
    it = lst.begin();

    for(it; it!=lst.end(); it++){

        cout<<*(it)<<" ";
    }

    cout<<endl;

}

int main(){

    int element;
    int pos;
    int ele;
    
    list <int> list2(4);//main step for template the datatype is decided here
    /*so here if we use like list2(x) then we use itertaor for getdata and
    even display */

    list <int> :: iterator iter;
    iter = list2.begin();

    for(int i =0; i<4; i++){

        cout<<"Enter the value of  "<<(i+1)<<" element in the list"<<endl;
        cin>>element;

        *(iter) = element;
        iter++;
    }

    list <int> list3;

    list3.push_back(64);
    list3.push_back(66);
    list3.push_back(68);
    list3.push_back(62);

    display(list3);
    display(list2);

    // cout<<list2.size()<<endl;// gives size of list

    cout<<"Enter the position where to insert an element in list : "<<endl;
    cin>>pos;

    cout<<"Enter the number to insert an element in list : "<<endl;
    cin>>ele;

    for(int k =0; k<pos; k++){
        iter++;
    }

    list2.insert(iter,1,ele);
    display(list2);

    list2.sort();
    display(list2);

    list2.pop_back();
    display(list2);

    list2.pop_front();
    display(list2);

    list2.remove(2);// it removes the element mentioned given that it prsent
    // any number of times
    display(list2);

    list2.swap(list3);
    cout<<"The swapped list 2 is : ";
    display(list2);
    cout<<"The swapped list 3 is : ";
    display(list3);

    list3.swap(list2);// it will swap both;
    cout<<"The swapped list 2 is : ";
    display(list2);
    cout<<"The swapped list 3 is : ";
    display(list3);

    list2.merge(list3);
    cout<<"The list2 after merging is : ";
    display(list2);

    list2.sort();
    display(list2);

    list2.reverse();
    display(list2);

   
    return 0;
}

