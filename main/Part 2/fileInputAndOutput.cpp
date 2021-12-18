#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

/*File I/O in C++: Reading and Writing Files
These are some useful classes for working with files in C++

fstreambase
ifstream --> derived from fstreambase
ofstream --> derived from fstreambase
*/

int main(){

    string str = "Harry";
    string strb = "Bhai";
    string str2,str3,str4;// here we can use string str4 or num;
    int num;

    ofstream out("text60.txt");// Opening files using constructor and writing it
    out<<str<<endl;
    out<<strb;// Write operation

    // ifstream in("text60.txt");// Opening files using constructor and reading it
    // in>>str2;// read operation

    ifstream in("text60.1.txt");
    getline(in,str2);
    getline(in,str3);
    in>>num;//gets in c++; gets whole line;

    cout<<str2<<endl;
    cout<<str3<<endl;
    // cout<<str4<<endl;
    cout<<num<<endl;

    return 0;
}

/* here the ifstream and ofstream are the constructors and out and in are the functions supp
orting the constructors in file i/o operations*/
