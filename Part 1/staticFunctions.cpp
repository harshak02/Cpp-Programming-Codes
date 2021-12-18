#include<iostream>
// this is advanced code by harsha
using namespace std;

class employee{
    private :
    int id;
    int salary;
    // int count;
    // int count1;
    static int count;
    static int objs;
    static int count2;// the deafult value is zero 0

    public :

    //--> we shold not use like this coz there are diff objects
    // void initcount(){
    //     count = 0;
    //     count1 =0;
    // }

    void getdata(){
        cout<<"Enter the value of the "<<(count+1)<<" employee id : "<<endl;
        cin>>id;

        cout<<"Enter the value of the "<<(count+1)<<" employee salary: "<<endl;
        cin>>salary;

        count++;
    }

    void display();

    // this static function means which contain only static variables
    static void getcount(){
        cout<<"The value of the count upto here is : "<<(objs+1)<<endl;

        objs++;
    }
};

int employee :: count;
// int employee :: count1;
int employee :: objs;
// int employee :: count=1000;// we  can use this if we want any other in the place of zero

// void employee :: initcount(){
//     count = 0;
// }

void employee :: display(){

    cout<<"The value of the "<<(count1+1)<<" employee id : "<<id<<endl;

    cout<<"The value of the "<<(count1+1)<<" employee salary: "<<salary<<endl;

    count1++;
}


int main(){
    employee harry,rohan,lovish;


    harry.getdata();
    rohan.getdata();
    lovish.getdata();



    harry.display(); 
    employee :: getcount();
    rohan.display();
    employee :: getcount();
    lovish.display();
    employee :: getcount();
    

    return 0;
}
