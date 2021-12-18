#include<iostream>
#include<conio.h>
#include <string>
#include "Domestic.h"
#include "International.h"
#include "Personal.h"
#include<fstream>
using namespace std;


    void personal::person(){
        system("cls");
        cout<<"\t\t\t** PERSONAL DETAILS **"<<endl;
        cout<<endl;
        cout<<"\t\t\tEnter Full name   :";
        cin>>name;
        cout<<"\t\t\tEnter Age         :";
        cin>>age;
        cout<<"\t\t\tSelect Gender(M/F):";
        cin>>gender;
        cout<<"\t\t\tEnter Gmail       :";
        cin>>gmail;
        cout<<"\t\t\tEnter Contact     :";
        cin>>contact;
        getch();
    }
    
    void personal::seat(int a){ 
        string s;
        system("cls");
        cout<<"\t\t\t    [11A]  [12A]  [13A]  [14A]  [15A]  [16A]  [17A]  [18A]  [19A]  [20A]  [21A]  [22A]  [23A]  [24A]  [25A]"<<endl;  
        cout<<"\t\t\t    [11B]  [12B]  [13B]  [14B]  [15B]  [16B]  [17B]  [18B]  [19B]  [20B]  [21B]  [22B]  [23B]  [24B]  [25B]"<<endl;  
        cout<<"\t\t\t    [11C]  [12C]  [13C]  [14C]  [15C]  [16C]  [17C]  [18C]  [19C]  [20C]  [21C]  [22C]  [23C]  [24C]  [25C]"<<endl;  
        cout<<"                                                                                                       "<<endl;
        cout<<"\t\t\t    [11D]  [12D]  [13D]  [14D]  [15D]  [16D]  [17D]  [18D]  [19D]  [20D]  [21D]  [22D]  [23D]  [24D]  [25D]"<<endl;  
        cout<<"\t\t\t    [11E]  [12E]  [13E]  [14E]  [15E]  [16E]  [17E]  [18E]  [19E]  [20E]  [21E]  [22E]  [23E]  [24E]  [25E]"<<endl;  
        cout<<"                                                                                                        "<<endl;
        cout<<"\t\t\t    [11F]  [12F]  [13F]  [14F]  [15F]  [16F]  [17F]  [18F]  [19F]  [20F]  [21F]  [22F]  [23F]  [24F]  [25F]"<<endl;  
        cout<<"\t\t\t    [11G]  [12G]  [13G]  [14G]  [15G]  [16G]  [17G]  [18G]  [19G]  [20G]  [21G]  [22G]  [23G]  [24G]  [25G]"<<endl;  
        cout<<"\t\t\t    [11H]  [12H]  [13H]  [14H]  [15H]  [16H]  [17H]  [18H]  [19H]  [20H]  [21H]  [22H]  [23H]  [24H]  [25H]"<<endl; 
    
        cout<<"\t\t\tSelect Your Seat:";
        cin>>s;
        int c=int(s[1]);
        int b=int(s[2]);
        if( (c>=48 && c<=57) && (s[0]=='1'||s[0]=='2') && (b>=65 && b<=72)){}
        else{
            cout<<" try again ";
            getch();
            seat(a);
        } 
        if(a==1){
            dseat=s;
        }else{
            iseat=s;
        }
    }    
    void personal::meal(int a){
        string s;
        int n;
        cout<<"Do you want to Add Meals?  Y/N :";
        cin>>s;
        int i=0;
        string mel[6]={"Chicken Tikka Sandwich","Masala Twist Cuppa Noodles","Sugar Free Cookies","Alphonso Aamras Juice","Paneer Butter Masala Rice","Budweiser Non-alcoholic Beer"};
        int amm[6]={400,350,150,250,500,200};
        
        if(s=="y" || s=="Y"){
            while(i!=1){
                system("cls");
                cout<<"\t\t\t1.Chicken Tikka Sandwich       - 400"<<endl;
                cout<<"\t\t\t2.Masala Twist Cuppa Noodles   - 350"<<endl;
                cout<<"\t\t\t3.Sugar Free Cookies           - 150"<<endl;
                cout<<"\t\t\t4.Alphonso Aamras Juice        - 250"<<endl;
                cout<<"\t\t\t5.Paneer Butter Masala Rice    - 500"<<endl;
                cout<<"\t\t\t6.Budweiser Non-alcoholic Beer - 200"<<endl;
                cout<<endl;
                cout<<"\t\t\tHow many food items do you want to add:";
                cin>>n;
                int t=n;
                while(n--){
                    cout<<"\t\t\tSelect your "<<t-n<<" food item : ";
                    cin>>i;
                    if(i==1||i==2||i==3||i==4||i==5||i==6){
                        if(a==1){
                            damount=damount+amm[i-1]; 
                        }
                        else{
                            iamount=iamount+amm[i-1];
                        }
                        i=0;i++;
                    }else{
                        n++;
                    }
                }
            }
        }
    }
    void personal::ticketd(int a){
        system("cls");
        if(a==1){
        
            cout<<"\t\t\tDeparture      :"<<dfrom<<endl;
            cout<<"\t\t\tArrival        :"<<dto<<endl;
            cout<<"\t\t\tDeparture date :"<<ddate<<endl;
            cout<<"\t\t\tArrival date   :"<<ddate<<endl;
            cout<<"\t\t\tDeparture time :"<<dtime1<<endl;
            cout<<"\t\t\tArrival time   :"<<dtime2<<endl;
            cout<<"\t\t\tFlight Name    :"<<dflightname<<endl;
            cout<<"\t\t\tFlight Number  :"<<dflightno<<endl;
            cout<<"\t\t\tClass          :"<<dclass<<endl;
            cout<<"\t\t\tSeat Number    :"<<dseat<<endl;
            cout<<"\t\t\tName:          :"<<name<<endl;
            cout<<"\t\t\tAmount         :"<<damount<<endl;
        }else{
             cout<<"\t\t\tDeparture     :"<<ifrom<<endl;
            cout<<"\t\t\tArrival        :"<<ito<<endl;
            cout<<"\t\t\tDeparture date :"<<idate<<endl;
            cout<<"\t\t\tArrival date   :"<<idate<<endl;
            cout<<"\t\t\tDeparture time :"<<itime1<<endl;
            cout<<"\t\t\tArrival time   :"<<itime2<<endl;
            cout<<"\t\t\tFlight Name    :"<<iflightname<<endl;
            cout<<"\t\t\tFlight Number  :"<<iflightno<<endl;
            cout<<"\t\t\tclass          :"<<iclass<<endl;
            cout<<"\t\t\tSeat Number    :"<<iseat<<endl;
            cout<<"\t\t\tName:          :"<<name<<endl;
            cout<<"\t\t\tAmount         :"<<iamount<<endl;
        }
        getch();
    }
    
    void personal::storedata(int a){
        fstream file;
        if(a==1){
            file.open("domes.txt", ios::app | ios::out);
            file<<" "<<name<<" "<<dfrom<<" "<<dto<<" "<<ddate<<" "<<dtime1<<" "<<dtime2<<" "<<dflightname<<" "<<dflightno<<" "<<dclass<<" "<<dseat<<" "<<damount<<"\n";
        }
        else{
            file.open("inter.txt", ios::app | ios::out);
            file<<" "<<name<<" "<<ifrom<<" "<<ito<<" "<<idate<<" "<<itime1<<" "<<itime2<<" "<<iflightname<<" "<<iflightno<<" "<<iclass<<" "<<iseat<<" "<<iamount<<"\n";
        }
        file.close();
    }
    void personal::searchdata(int a){
        system("cls");
        fstream file;
        int found = 0;
        if(a==1){
            file.open("domes.txt", ios::in);
        }
        else{
            file.open("inter.txt", ios::in);
        }
        if (!file){
            cout<<"\t\t\t No Data Is Present...";
        }
        else{
            string na2;
            cout << "\t\t\tEnter Full Name : ";        //<<" "<<dclass<<" "<<seat<<" "<<amountd
            cin>>na2;
            file >>name>>dfrom>>dto>>ddate>>dtime1>>dtime2>>dflightname>>dflightno>>dclass>>dseat>>damount;

            while (!file.eof()){
                if (name == na2){
                    ticketd(1);
                    found++;
                }
                file >>name>>dfrom>>dto>>ddate>>dtime1>>dtime2>>dflightname>>dflightno>>dclass>>dseat>>damount;  
            }
            if (found == 0){
            cout << "\t\t\tStudent Roll No. Not Found...";
            }
            file.close();
        }
        getch();
    }
    void personal::canceldata(int a){
        system("cls");
        fstream file, file1;
        int found = 0;
        string naaa;
        if(a==1){
            file.open("domes.txt", ios::in);
        }
        else{
            file.open("inter.txt", ios::in);
        }

        if (!file){
            cout << "\t\t\tNo Data is Present..";
            file.close();
        }
        else{
            cout <<"\t\t\tEnter Full Name: ";
            cin >> naaa;
            file1.open("domes1.txt", ios::app | ios::out);
            file >>name>>dfrom>>dto>>ddate>>dtime1>>dtime2>>dflightname>>dflightno>>dclass>>dseat>>damount;
            while (!file.eof()){
                if (naaa != name){
                    file1<<" "<<name<<" "<<dfrom<<" "<<dto<<" "<<ddate<<" "<<dtime1<<" "<<dtime2<<" "<<dflightname<<" "<<dflightno<<" "<<dclass<<" "<<dseat<<" "<<damount<<"\n";
                }
                else{
                    found++;
                    cout << "\t\t\tSuccessfully Delete Data";
                }
                file >>name>>dfrom>>dto>>ddate>>dtime1>>dtime2>>dflightname>>dflightno>>dclass>>dseat>>damount ;
            }
            if (found == 0){
                cout << "\n\t\t\t Student Roll NO. Not Found....";
            }
            file1.close();
            file.close();
            if(a==1){
                remove("domes.txt");
                rename("domes1.txt", "domes.txt");
            }
            else{
                remove("inter.txt");
                rename("domes1.txt", "inter.txt");
            }
            getch();
        }
    }
    void personal::change(int a){
       int m;
        system("cls");
        cout<<"1.destination"<<endl;
        cout<<"2.date"<<endl;
        cout<<"3.dclasin"<<endl;
        cout<<"4.seat"<<endl;
        cin>>m;
        system("cls");
        fstream file, file1;
        string rollno;
        int found = 0;
        if(a==1){
            file.open("domes.txt", ios::in);
        }
        else{
            file.open("inter.txt", ios::in);
        }
        if (!file){
            cout << "\n\t\t\tNo Data is Present..";
        }
        else{
            cout << "\nname : ";
            cin >> rollno;
            file1.open("rec.txt", ios::app | ios::out);
            file >>name>>dfrom>>dto>>ddate>>ddate>>dtime2>>dflightname>>dflightno>>dclass>>dseat>>damount;
            while (!file.eof()){
                if (rollno != name){

                file1 <<" "<<name<<" "<<dfrom<<" "<<dto<<" "<<ddate<<" "<<ddate<<" "<<dtime2<<" "<<dflightname<<" "<<dflightno<<" "<<dclass<<" "<<dseat<<" "<<damount<<"\n";
                }
                else{   
                    if(m==1){
                        if(a==1){
                            flight();
                        }
                        else{
                            flighti();
                        }
                    }
                    else if(m==2){
                        cout << "\t\t\tEnter date.: ";
                        cin >> ddate;
                    }
                    else if(m==3){
                        string cla[3]={"First_class","Business_Class","Economy_Class"};
                        int am[3]={3000,2000,1000};
                        string s;
                        int n;
                        system("cls");
                        cout<<"   Class          "<<endl;
                        cout<<"1.First class     "<<endl;
                        cout<<"2.Business Class  "<<endl;
                        cout<<"3.Economy Class   "<<endl;
                        cout<<"select class :";
                        cin>>n;
                        dclass=cla[n-1];
                        damount=damount+am[n-1];
                    }
                    else{
                        seat(1);
                    }   
                    file1 <<" "<<name<<" "<<dfrom<<" "<<dto<<" "<<ddate<<" "<<ddate<<" "<<dtime2<<" "<<dflightname<<" "<<dflightno<<" "<<dclass<<" "<<dseat<<" "<<damount<<"\n";
                    found++;
                }
                file>>name>>dfrom>>dto>>ddate>>ddate>>dtime2>>dflightname>>dflightno>>dclass>>dseat>>damount;
            }
            if (found == 0){
                cout << "\n\n\t\t\t Student Roll No. Not Found....";
            }
            file1.close();
            file.close();
            if(a==1){
                remove("domes.txt");
                rename("rec.txt", "domes.txt");
            }
            else{
                remove("inter.txt");
                rename("rec.txt", "inter.txt");
            }
        }
        getch();
    }
    void personal::flight(){
        int n;
        string arr[10]={"Delhi","Mumbai","Bengaluru","Hyderabad","Vizag","Chennai","Ahmedabad","Kolkata","Lucknow","Patna"};
        cout<<"1.Delhi    2.Mumbai     3.Bengaluru  4.Hyderabad  5.Vizag"<<endl;
        cout<<"6.Chennai  7.Ahmedabad  8.Kolkata    9.Lucknow    10.patna"<<endl;
        cout << "\t\t\tchoose: ";
        cin>>n;
        dto=arr[n-1];
    } 
    void personal::flighti(){
        int n;
        string arr[10]={"Canada","Portugal","Japan","Saudi_Arabia","Germany","Thailand","Morocco","Brazil","United_states","Australia"};
        cout<<"1.Canada    2.Portugal  3.Japan   4.Saudi_Arabia   5.Germany"<<endl;
        cout<<"6.Thailand  7.Morocco   8.Brazil  9.United_states  10.Australia"<<endl;
        cout << "\t\t\tchoose: ";
        cin>>n;
        dto=arr[n-1];
    }    

