#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

int main(){

    string name;
    string st1,st2,st3;
    string str = "Harsha is good boy";
    string str2 = "My name is :";// here we can take any number of words
    //but coming to user input we are allowed to take only single word default;like sreeharsha
    // means it only takes sree;

    cout<<"Enter the name of the student"<<endl;
    getline(cin,name);// will take whole line input as alternative of cin

    ofstream out("imptext.txt");
    out<<str2<<endl;
    out<<name<<endl;
    out<<str + " Yeah its true!"<<endl;
    out.close();

    ifstream in("imptext.txt");
    getline(in,st1);
    getline(in,st2);
    getline(in,st3);
    in.close();

    cout<<"The first line in text is : "<<st1<<endl;
    cout<<"The second line in text is : "<<st2<<endl;
    cout<<"The third line in text is : "<<st3<<endl;

    return 0;
}

