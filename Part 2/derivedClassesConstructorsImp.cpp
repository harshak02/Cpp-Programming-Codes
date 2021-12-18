#include<iostream>
#include<cstring>

using namespace std;

class CWH{

    protected :
        string name;
        float rating;

    public :

        CWH(string x ,float y){

            name = x;// we should not use strcpy here if we use string
            rating = y;
        }

        virtual void display(){
        // void display(){

        }
};

class CWHvideo : public CWH{

    private :
        float videolen;

    public :

        CWHvideo(string x,float y,float z) : CWH(x,y){

            videolen = z;
        }

        void display(){

            cout<<"The name of the chapter is : "<<name<<endl;
            cout<<"The rating of the chapter is : "<<rating<<endl;
            cout<<"The videolenght of the chapter is : "<<videolen<<endl;

        }
};


class CWHtext : public CWH{

    private :
        int words;

    public :

        CWHtext(string x,float y,int k) : CWH(x,y){

            words = k;
        }

        void display(){

            cout<<"The name of the chapter is : "<<name<<endl;
            cout<<"The rating of the chapter is : "<<rating<<endl;
            cout<<"The words of the chapter is : "<<words<<endl;

        }
};


int main(){

    // CWH django;

    CWHvideo djvideo("Django tutorial video",4.89,28.45);
    djvideo.display();

    CWHtext djtext("Django tutorial text",4.19,433);
    djtext.display();

    CWH *ptrv;
    ptrv = &djvideo;
    (*ptrv).display(); 
    /*here the plot twist starts actually if we are using the base class
    pointer then even if its points to the derived class here we will get only access of the
    base members so if we use the display function it will take base class ones so to avoid this
    we are using the word virtual in the base cls so that the display will go to derived 
    cls display function()*/

    // CWH *ptrt;
    // ptrt = &djtext;
    // ptrt->display();

    // CWH *ptr = new CWH [2]// this is wrong coz  we dont use constructor in the pointer
    // ptr[0]= &djvideo;
    // ptr[1] = &djtext;


    // (*(ptr+0)).display();
    // (*(ptr+1)).display();

    return 0;

}

/* 
Rules for virtual functions:-
*)They cannot be static
*)They are accessed by object pointers
*)Virtual functions can be a friend of another class
*)A virtual function in the base class might not be used.
*)If a virtual function is defined in a base class, 
there is no necessity of redefining it in the derived class
*/

/*
if there is no display functon in the any derived class then automa
tivcally the cirtual named display in the base class will run */

// example if you comment out the code from 60th line then the display
//function of text is runned from the virtual function in base cls.
