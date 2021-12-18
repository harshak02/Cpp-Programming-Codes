#include<iostream>
using namespace std;

class student{

    protected :
    int roll_number;

    public :

    void set_roll_number(int x);
    void get_roll_number();
};

void student :: set_roll_number(int x){
    roll_number = x;
}

void student :: get_roll_number(){
    cout<<"The roll number is : "<<roll_number<<endl;
}

class exam : public student{

    protected :

    // int roll_number;
    float mat;
    float phy;
    float che;

    public :
    // void set_roll_number(int x);
    // void get_roll_number();

    void get_mat(float a);
    void get_phy(float b);
    void get_che(float c);
    void display_marks();

};

void exam :: get_mat(float a){
    mat = a;
}

void exam :: get_phy(float b){
    phy = b;
}

void exam :: get_che(float c){
    che = c;
}

void exam :: display_marks(){
    cout<<"The marks in maths is : "<<mat<<endl;
    cout<<"The marks in physics is : "<<phy<<endl;
    cout<<"The marks in chemistry is : "<<che<<endl;
}

class result : public exam{

    protected :

    // int roll_number;
    // float mat;
    // float phy;
    // float che;
    float percentage;

    public :

    // // void set_roll_number(int x);
    // // void get_roll_number();

    // void get_mat(float a);
    // void get_phy(float b);
    // void get_che(float c);
    // void display_marks();

    void set_percentage(){
        percentage = ((mat+phy+che)/3);// here we need to assign direct values
        // to avoid garbage values like use directly maths phy and chem variables
    }

    void display_result(){

        cout<<"The percentage of the student is : "<<percentage<<"%"<<endl;
    }


};

int main(){
    result harry;
    /* if we want to print the values in the main function directly
    with out the help of the functions then instead of void use the 
    int or float functions and transfer into inherited public sector
    and you can print directly in the main function*/

    /*
    Notes: 
        If we are inheriting B from A and C from B:[ A--->B--->C ]
        1. A is the base class for B and B is the base class for C
        2. A-->B-->C is called Inheritance Path
    */

    harry.set_roll_number(120);
    harry.get_mat(85.5);
    harry.get_phy(90.5);
    harry.get_che(95.5);
    harry.set_percentage();

    harry.get_roll_number();
    harry.display_marks();
    harry.display_result();
    return 0;
}
