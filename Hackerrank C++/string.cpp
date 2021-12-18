#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int test;
    
    
    cin>>test;
    string temp[test];
    
    for(int i =0;i<test;i++){
        cin>>temp[i];
        
        int num;
        num = temp[i].length();
        
        for (int j=0;j<num;j++){
            if(j%2!=0){
                cout<<temp[i][j];
            }
        }
        
        cout<<" ";
        
        for (int k=0;k<num;k++){
            if(k%2==0){
                cout<<temp[i][k];
            }
        }
        
        
        cout<<endl;
        
        
    }
    
       
    return 0;
}
