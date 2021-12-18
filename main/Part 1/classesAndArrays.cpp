#include<iostream>
using namespace std;

class shop{
    private :

    int item_id[100];
    int item_price[100];
    // int counter=0; we can even so this
    int counter;

    public :

    void initcounter(void){
        counter = 0;
    }

    void getdata(void);
    void display(void);
};

void shop :: getdata(void){

    cout<<"Enter the id number of the item "<<(counter+1)<<" :"<<endl;
    cin>>item_id[counter];

    cout<<"Enter the price of the item "<<(counter+1)<<" :"<<endl;
    cin>>item_price[counter];

    counter++;
}

void shop :: display(void){
    for(int i=0;i<counter;i++){
        cout<<"The id of the item "<<i+1<<" is "<<item_id[i]<<endl;
        cout<<"The price of the item "<<i+1<<" is "<<item_price[i]<<endl;
    }
}

int main(){
    shop uni;
    int n;
    cout<<"Enter the number of items : "<<endl;
    cin>>n;

    uni.initcounter();
    for(int j=0;j<n;j++){
        uni.getdata();
    }
    uni.display();
    
    return 0;
}

