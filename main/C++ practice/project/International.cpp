#include<iostream>
#include<conio.h>
#include<string>
#include "International.h"

using namespace std;

    void international::sche(){
        cout<<"\t\t\t1.Canada    2.Portugal  3.Japan   4.Saudi_Arabia   5.Germany"<<endl;
        cout<<"\t\t\t6.Thailand  7.Morocco   8.Brazil  9.United_states  10.Australia"<<endl;
    } 
    void international::booki1(){
        int n;
        string arr[10]={"Canada","Portugal","Japan","Saudi_Arabia","Germany","Thailand","Morocco","Brazil","United_states","Australia"};
    
        cout<<"\t\t\tSelect the departure point : ";
        cin>>n;
        ifrom=arr[n-1];
        cout<<"\t\t\tSelect your destination    : ";
        cin>>n;
        ito=arr[n-1];
        if(ifrom==ito){
            cout<<"\t\t\tTRY AGAIN";
            booki1();
        }else{
            cout<<"\t\t\tEnter Vaild Date(DD/MM/YYYY) : ";
            cin>>idate;
        }
    }
    void international::time(){
        cout<<"\t\t\tFlight       time1    tim2    flightno  amount"<<endl;
        cout<<"\t\t\t1.IndiGo     09:00    11:00    FI23      4000"<<endl;
        cout<<"\t\t\t2.AirIndia   20:35    22:35    FA34      4120"<<endl;
        cout<<"\t\t\t3.Spicejet   03:45    05:55    FS41      4300"<<endl;
        cout<<"\t\t\t4.Vistata    15:00    17:10    FV12      4100"<<endl;
    }
    void international::booki2(int a){
        int x;
        string fli[4]={"IndiGo","Airline","Spicejet","Vistata"};
        string time[8]={"09:00","11:00","20:35","22:35","03:45","05:55","15:00","17:10"};
        string flno[4]={"FI23","FA34","FS41","FV12"};
        cout<<endl;
        cout<<"\t\t\t"<<ifrom<<"-->-->-->-->"<<ito<<endl;
        cout<<endl;
        if(a==5){
            cout<<"\t\t\tPRESS ANY KEY :"<<endl;   
        }
        else{
            cin>>x;
            iflightname=fli[x-1];
            iflightno=flno[x-1];
            itime1=time[2*(x-1)];
            itime2=time[2*x-1];
            iamount=x-1;
            //cout<<iflname<<" "<<iflno<<" "<<it1fro<<" "<<it2to;
            cout<<"\t\t\tPRESS ANY KEY :"<<endl;
        }
        getch();
    }
    void international::cabini(){
        string cla[3]={"First_class","Business_Class","Economy_Class"};
        int a1[4][3]={{7000,5100,4000},{7100,5200,4120},{7000,5400,4300},{7200,5300,4100}};
   
        string s;
        int n;
        system("cls");
        cout<<"\t\t\t   Class          Amount"<<endl;
        cout<<"\t\t\t1.First class     "<<a1[iamount][0]<<endl;
        cout<<"\t\t\t2.Business Class  "<<a1[iamount][1]<<endl;
        cout<<"\t\t\t3.Economy Class   "<<a1[iamount][2]<<endl;
        cout<<"\t\t\tSelect Any Class:";
        cin>>n;
        iclass=cla[n-1];
        iamount=a1[iamount][n-1];
        cout<<"\t\t\tPRESS ANY KEY"<<endl;
        getch();
        
    }