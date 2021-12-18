#include<iostream>
#include<string.h>
// code with break instead of exit(0);
using namespace std;

class binary{
    private :
    string s;
    void chk_bin(void);

    public :
    void read(void);
    // void chk_bin(void);
    void reverse(void);
    void display(void);

};

void binary :: read(void){
    cout<<"Enter the value of the binary number : "<<endl;
    cin>>s;
}

void  binary :: chk_bin(void){
    int result;
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='1'&& s.at(i)!='0'){

            result = 1;
            break;
            // exit(0);
        }
   
    }

    if(result==1){
        cout<<"The number is not a binary number"<<endl;
    }

    else{
        cout<<"The number entered is a binary number"<<endl;
    }

    
}

void binary :: reverse(void){
    chk_bin();// important
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }

        else{
            if(s.at(i)=='1'){
            s.at(i)='0';
            }
        }
    }
}

void binary :: display(){
    int result=0;
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='1'&& s.at(i)!='0'){

            result = 1;
            break;
            // exit(0);
        }
   
    }

    if(result!=1){
        cout<<"The sorted string is : "<<s<<endl;
    }
}

int main(){
    cout<<"This code is the example of class and objects :"<<endl;

    binary num;

    num.read();
    // num.chk_bin();-> if declared as prvt then can be accessed only thru the class functions(doamin)
    num.reverse();
    num.display();
    
    
    return 0;
}

