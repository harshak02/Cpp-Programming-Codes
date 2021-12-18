#include<iostream>
#include<fstream>

using namespace std;

int main(){
    cout<<"Just a few words about templates :"<<endl;
    cout<<"how is object related to class in the same way";
    cout<<" the class is related to template"<<endl;
    cout<<"Prior to the concept explained by harry in 63rd video its like";
    cout<<" in one shot we create the int char float and etc classes"<<endl;
    cout<<"it has different syntax and pointers is invloved"<<endl;

    // ofstream out;
    // out.open("impoftemplate.txt");
    // out.close();

    ofstream out("impoftemplate.txt");
    out<<"Just a few words about templates :"<<endl;
    out<<"how is object related to class in the same way";
    out<<" the class is related to template"<<endl;
    out<<"Prior to the concept explained by harry in 63rd video its like";
    out<<" in one shot we create the int char float and etc classes"<<endl;
    out<<"it has different syntax and pointers is invloved"<<endl;

    out.close();

    return 0;
}
