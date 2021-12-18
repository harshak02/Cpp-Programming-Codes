#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

int main(){
    
    ofstream out;
    out.open("textimp2.txt");
    out<<"The name is harsha"<<endl;
    out<<"The department is CSE"<<endl;
    out<<"The age is 18 crossed"<<endl;
    out.close();

    // ofstream out("textimp2.txt");
    // out<<"Harsha"<<endl;
    // out.close();// we can even do like this;

    ifstream in;
    in.open("textimp2.txt");

    // ifstream in("textimp2.txt");
    // in>>str;
    // getline(in,str);

    while(in.eof()==0){
        string str;
        getline(in,str);
        cout<<str<<endl;
    }

    in.close();

    return 0;
}
