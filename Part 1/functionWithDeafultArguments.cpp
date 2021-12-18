#include<iostream>
using namespace std;
float money_recived(int money,float factor=1.04){
    float result;
    result = money*factor;
    return result;
}

int main(){
    int money;
    money =100000;
    float result;

    result = money_recived(money);
    cout<<"The total amt of money recieved is : "<<result<<endl;

    result = money_recived(money,1.1);
    cout<<"FOR VIP-->The total amt of money recieved is : "<<result<<endl;
    return 0;
}