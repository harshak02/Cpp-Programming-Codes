#ifndef __publisher
#define __publisher

#include<iostream>
#include<string>
#include<list>

using namespace std;

class Publisher{

    protected :
    string namePub;
    string videoName;
    int idPub;
    list <int> subs;

    public :
    Publisher();
    void getDetails();
    void getSubscirbers();
    //name,video name

};

void Publisher :: getDetails(){
    cout<<"Enter your name please :"<<endl;
    cin>>namePub;

    cout<<"Enter your name of video :"<<endl;
    cin>>videoName;
}

Publisher :: Publisher(){
    static int temp = 0;
    temp++;
    idPub = temp;
}

void Publisher :: getSubcribers(int num){
    subs.push_back(num);
    cout<<"Thanks for Subcribing dear Subscriber no :"<<num<<endl;
    
}

#endif