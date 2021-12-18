#include<iostream>
using namespace std;

class bankdeposit{

    private :

    int principal;
    int years;
    int rate;
    float intrestrate;
    float returnvalue;

    public :

    bankdeposit(){
        
    }
    
    bankdeposit(int p,int y,float r);
    bankdeposit(int p,int y,int R);

    void display();

    
};

bankdeposit :: bankdeposit(int p,int y,float r){
    principal = p;
    years = y;
    intrestrate = r;
    returnvalue = principal;

    for(int i=0;i<y;i++){

        returnvalue*=(1+r);
    }
    
}

bankdeposit :: bankdeposit(int p,int y,int R){
    principal = p;
    years = y;
    rate = R;
    float factor =(float)R/100;
    returnvalue = principal;

    for(int i=0;i<y;i++){

        returnvalue*=(1+factor);
    }
    
}

void bankdeposit :: display(){

    cout<<"The value of the money deposited is : "<<principal<<endl;
    cout<<"The value of the years is : "<<years<<endl;
    cout<<"The value of the money returned with intrest is : "
    <<returnvalue<<endl;
}

int main(){

    bankdeposit b3;// blank constructor needed
    int p1,p2;
    int y1,y2;
    int R1;
    float r1;

    cout<<"The value of the principal p1 is :"<<endl;
    cin>>p1;
    cout<<"The value of the principal p2 is :"<<endl;
    cin>>p2;
    cout<<"The value of the year y1 is :"<<endl;
    cin>>y1;
    cout<<"The value of the year y2 is :"<<endl;
    cin>>y2;

    cout<<"The value of the rate in decimal r1 is :"<<endl;
    cin>>r1;

    cout<<"The value of the rate in percent R1 is :"<<endl;
    cin>>R1;

    bankdeposit b1(p1,y1,r1);
    bankdeposit b2(p2,y2,R1);

    b1.display();
    b2.display();

    return 0;
}
