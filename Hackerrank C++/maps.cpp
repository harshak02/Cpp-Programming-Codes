#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include<string>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    map <string ,int>m;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int query_type;
        cin>>query_type;
        string name;
        cin>>name;
        
        if(query_type==1){
            map<string,int>::iterator itr=m.find(name);
            
            if(itr==m.end()){
            
                int marks;
                cin>>marks;
                m.insert(make_pair(name,marks));
            }
            
            else{ 
    
                int marks;
                cin>>marks;
                m[name] = m[name] + marks;
            }
        }
        
        else if(query_type==2){
            m.erase(name);
        }
        
        else if(query_type==3){
            map<string,int>::iterator itr=m.find(name);
            if(itr==m.end()){
                cout<<"0"<<endl;
            }
            
            else{
    
                int marks;
                cin>>marks;
                cout<<m[name]<<endl;
            }
        }  
    }
    
    return 0;
}
