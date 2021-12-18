#include <sstream>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector <int> vec1;
    stringstream ss(str);
    
    for(int i=0;i<str.length();i++){
        fflush(stdin);
        int temp;
        char a;
        if(ss>>temp){
            vec1.push_back(temp);
            ss>>a;
        }
    }
    
    return vec1;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
