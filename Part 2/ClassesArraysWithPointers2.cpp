#include<iostream>
using namespace std;

class shopItem{

    private :
    int id;
    float price;

    public :

    void set_data(int x,float y){
        id = x;
        price = y;
    }

    void display(){

        cout<<"The id of the item is : "<<id<<endl;
        cout<<"The price of the item is : "<<price<<endl;
    }
};

int main(){

    int size = 3;
    int a;
    float b;
    // shopItem s;
    // s.set_data(4,5.6);
    // s.display();

    shopItem *ptr = new shopItem [size];// here we formed 3 classes
    // they are *(ptr +0); *(ptr+1); *(ptr+2);
    
    for(int i= 0;i<size;i++){

        cout<<"Enter the value of id for item "<<(i+1)<<endl;
        cin>>a;
        cout<<"Enter the value of price for item "<<(i+1)<<endl;
        cin>>b;

        // ptr[i].set_data(a,b);//or
        (*(ptr+i)).set_data(a,b);
    }

    for(int j =0;j<size;j++){

        // ptr[j].display();//or
        (*(ptr+j)).display();

    }

    for(int k =0;k<size;k++){

        // ptr[k].display();//or
        (ptr+k)->display();

    }

    return 0;
}

