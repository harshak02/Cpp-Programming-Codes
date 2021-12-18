#include<iostream>
using namespace std;

class binary{

    private :
    string s;

    protected :
    int a = 0;

    public :
    binary(string str){
        s = str;
    }
    int chkbin(void);
    void reverse(void);
    void reverse2(void);
    void display(void);
};

int binary :: chkbin(void){
    
    int i = 0;
    int res = 0;
    while(s[i]!='\0'){
        if(s[i]!='1' && s[i]!= '0'){
            res = 1;
            break;
            
        }
        i++;
    }

    return res;
}

void binary :: display(void){

    int i = 0;
    while(s[i]!= '\0'){
        cout<<s[i];
        i++;
    }

    cout<<endl;

}

void binary :: reverse(void){

    char str2[s.length()+1];
    int i = 0;
    for(i;i<s.length();i++){
        str2[i] = s[s.length()-i-1];
    }

    str2[i] = '\0';
    cout<<"The reverse sorting string is "<<str2<<endl;
}

void binary :: reverse2(void){

    char str2[s.length()+1];
    int i = 0;
    for(i;i<s.length();i++){
        if(s.at(i)=='1'){
            str2[i] = '0';
        }

        else{
            str2[i] = '1';
        }
    }

    str2[i] = '\0';
    cout<<"The reverse2 sorting string is "<<str2<<endl;
}

int main(){
    string str;
    cout<<"This code is the example of class and objects :"<<endl;
    cout<<"Enter the string "<<endl;
    cin>>str;
    binary num(str);
    //cout<<num.a<<endl;//->womnt work
    int resl = 0;
    resl = num.chkbin();
    if(resl){
        cout<<"the number is not bianry"<<endl;
        exit(0);
    }

    else{
    num.display();
    num.reverse();
    num.reverse2();
    }

    return 0;
}
