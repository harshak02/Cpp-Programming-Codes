#include<iostream>
using namespace std;
/* 
before using the virtual class first think for 2 min if ambiguos cases are 
occuring then only inherit virtually from the base class
like use virtual only for marks and score not for student and result

*/
class student{

    protected :
    int roll_number;

    public :
    void get_no(int x);
    void show_no();
};

void student :: get_no(int x){
    roll_number = x;
}

void student :: show_no(){

    cout<<"Your roll number is : "<<roll_number<<endl;
}


class marks : virtual public student{

    protected :
    float mat;
    float phy;
    float che;

    public :
    void get_marks(float a, float b, float c);
    void show_marks();

};

void marks :: get_marks(float a, float b, float c){

    mat = a;
    phy = b;
    che = c;

}

void marks ::show_marks(){

    cout<<"Your result is : "<<endl
    <<"Mathematics marks : "<<mat<<endl
    <<"Physics marks : "<<phy<<endl
    <<"Chemistry marks : "<<che<<endl;

}


class score : virtual public student{

    protected :
    int points;

    public :
    void get_points(int y);
    void show_points();


};

void score :: get_points(int y){
    points = y;
}

void score :: show_points(){

    cout<<"Your score in games is : "<<points<<endl;
}

class result : public marks , public score{

    // protected :
    // int roll_number;
    // int points;
    // float mat;
    // float phy;
    // float che;

    // public :
    // void get_no(int x);
    // void show_no();
    // void get_points(int y);
    // void show_points();
    // void get_marks(float a, float b, float c);
    // void show_marks();

    protected :
    float final_result;

    public :

    void set_result();
    void display();

};

void result :: set_result(){

    int k;
    k = (mat+phy+che+points);
    cout<<"Your annual exam total score is : "<<k<<"/315"<<endl;
}

void result :: display(){

    show_no();
    show_marks();
    show_points();
    set_result();
}


int main(){

    result harry;

    harry.get_no(25);
    harry.get_marks(98.05,98.78,99.98);
    harry.get_points(14);

    harry.display();
    
    return 0;
}
