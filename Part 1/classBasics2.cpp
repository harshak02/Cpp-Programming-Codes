#include<iostream>
#include<string.h>

using namespace std;

class student{
    private : 
    float percent, roll_no;
    string name;

    public :
    
    int section;
    string remark;

    void setdata(string z,float x,int y);
    void getdata(){
        cout<<"The name of the student is : "<<name<<endl;
        cout<<"The percent of the student is : "<<percent<<endl;
        cout<<"The roll no. of the student is : "<<roll_no<<endl;
        cout<<"The section of the student is : "<<section<<endl;
        cout<<"The remark of the student is : "<<remark<<endl;
    }
};

void student :: setdata(string z,float x,int y){
    percent = x;
    roll_no = y;
    name = z;
}

int main(){
    student harsha;
    // harsha.name="harshak"->not correct

    harsha.section=1;
    harsha.remark = "Excellent!";
    harsha.setdata("harshak",99.56,19);
    harsha.getdata();
    
    return 0;
}

//strcpy is not used in c ++ and char arr[100] can be written as string arr;
