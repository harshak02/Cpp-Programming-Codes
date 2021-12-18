#include<iostream>
// #include<string>
#include<iomanip>

using namespace std;

int main() 
{
    int i = 4;
    float d = 4.0;
    string s = "HackerRank ";

    int i2;
    float d2;
    string s2;

    cin>>i2;
    cin>>d2;
    cin.get();// also imp sometimes
    getline(cin, s2);
    // cin>>s2;

    cout<<i+i2<<endl;

    cout<<d+d2<<endl;

    cout << s + s2 << endl;

    return 0;
}
