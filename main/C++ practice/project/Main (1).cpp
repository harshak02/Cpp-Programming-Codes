#include<iostream>
#include<string>
#include "Domestic.h"
#include "International.h"
#include "Personal.h"
#include "Payment.h"
#include<fstream>
using namespace std;


int main(){
    domestic d;
    personal p;
    international i;
    payment pa;
    int n,a;
    system("cls");
    cout << "\t\t\t-----------------------------" << endl;
    cout << "\t\t\t| AIRLINE RESERVATION SYSTEM |" << endl;
    cout << "\t\t\t-----------------------------" << endl;
    cout << "\t\t\t 1. Book flight" << endl;
    cout << "\t\t\t 2. Change Destination/date/seat" << endl;
    cout << "\t\t\t 3. Cancel flight" << endl;
    cout << "\t\t\t 4. view details" << endl;
    cout << "\t\t\t 5. search flights " << endl;
    cout << "\t\t\t 6. Exit" << endl;
    cout<<endl;
    cout << "Enter Your Choose: ";
    cin>>n;
        
    switch (n){
        case 1:
        system("cls");
        cout<<"\t\t\t1.domestic"<<endl;
        cout<<"\t\t\t2.intenational"<<endl;
        cin>>a;
            if(a==1){
                system("cls");
                d.sche();
                p.bookd1();
                system("cls");
                d.time();
                p.bookd2(a);
                p.cabin();
            }else{
                system("cls");
                i.sche();
                p.booki1();
                system("cls");
                i.time();
                p.booki2(a);
                p.cabini();
            }
            p.seat(a);
            p.meal(a);
            p.person();
            pa.pay_detail();
            p.storedata(a);
            p.ticketd(a);
           
            main();

        case 2:
            system("cls");
            cout<<"\t\t\t1.domestic"<<endl;
            cout<<"\t\t\t2.intenational"<<endl;
            cin>>a;
            p.change(a);
            main();

        case 3:
            system("cls");
            cout<<"\t\t\t1.Domestic"<<endl;
            cout<<"\t\t\t2.Intenational"<<endl;
            cin>>a;
            p.canceldata(a);
            main();

        case 4:
            system("cls");
            cout<<"\t\t\t1.domestic"<<endl;
            cout<<"\t\t\t2.intenational"<<endl;
            cin>>a;
            p.searchdata(a);
            main();

        case 5:
            system("cls");
            cout<<"\t\t\t1.domestic"<<endl;
            cout<<"\t\t\t2.intenational"<<endl;
            cin>>a;
            if(a==1){
                system("cls");
                d.sche();
                p.bookd1();
                system("cls");
                d.time();
                p.bookd2(5);
            }else{
                system("cls");
                i.sche();
                p.booki1();
                system("cls");
                i.time();
                p.booki2(5);
            }
            main();
            break; 

        case 6:
            exit(0);
            break;
        default:
            main();
    }   
}