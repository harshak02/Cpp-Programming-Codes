#include<iostream>
#include<string.h>

using namespace std;

class student{
    private :
    int marks;
    string name;

    public :
    int roll;
    float salary;
    void setdata(int x,string y);
    void getdata();
    
}harsha,rohandas;

void student :: setdata(int x,string y){
    marks = x;
    name = y;
}

void student :: getdata(){
    cout<<"The name of the student is : "<<name<<endl;
    cout<<"The marks of the student is : "<<marks<<endl;
    cout<<"The salary of the student is : "<<salary<<endl;
    cout<<"The roll no. of the student is : "<<roll<<endl;
}

int main(){

    harsha.roll = 19;
    harsha.salary = 1278787.22;

    harsha.setdata(98,"Harsha");
    harsha.getdata();

    return 0;
}
