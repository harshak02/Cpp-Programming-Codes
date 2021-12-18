#ifndef __platform
#define __platform

#include<iostream>
#include<string>
#include<list>
#include "publisher.h"
#include "subscriber.h"

using namespace std;

class Platform : public Publisher , public Subscriber{

    public :

    Platform(){
        cout<<"Processing!!"<<endl;
    }

    void subDesire(int num2){//setting subscriber to publisher

        int k = num2;
        void getSubcribers(int k);
    }

    void userPublished(){

        subs <int> :: iterator iter;
        iter = subs.begin();

        for (iter,iter!=subs.end(),iter++){

            cout<<"To :"<<endl;
            cout<<"Subscriber no : "<<*iter<<endl;
            cout<<"Folks! A new video is Published please check it"
        }
        
    }

};

#endif