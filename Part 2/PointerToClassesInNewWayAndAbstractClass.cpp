#include<iostream>
#include<cstring>

using namespace std;

class CWH{// an example for abstract base

    protected :
        string name;
        float rating;

    public :

        CWH(string x ,float y){

            name = x;// we should not use strcpy here if we use string
            rating = y;
        }

        virtual void display(){
            cout<<" hhahha"<<endl;
        };// this is pure virtual 
        // void display(){

        //}
};

class CWHvideo : public CWH{

    private :
        float videolen;

    public :

        CWHvideo(string x,float y,float z) : CWH(x,y){

            videolen = z;
        }

        // void display(){

        //     cout<<"The name of the chapter is : "<<name<<endl;
        //     cout<<"The rating of the chapter is : "<<rating<<endl;
        //     cout<<"The videolenght of the chapter is : "<<videolen<<endl;

        // }
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

        }// we cannot comment out this coz we used pure virtual func

};


int main(){

    // CWH django;

    CWHvideo djvideo("Django tutorial video",4.89,28.45);
    // djvideo.display();

    CWHtext djtext("Django tutorial text",4.19,433);
    // djtext.display();


    CWH *ptr[2];//  by using this way we can point to other classes from
    //one class but if we use new keyword in a single line its pointed to same
    // class

    // CWH *ptr = new CWH[2];->wont help;

    ptr[0] = &djvideo;
    ptr[1] = &djtext;// is different

    // *(ptr+0) = &djvideo;
    // *(ptr+1)= &djtext;

    // (**(ptr+0)).display();
    // (**(ptr+1)).display();

    (*ptr[0]).display();
    (*ptr[1]).display();

    return 0;

}

/* 
abstract cls is the cls which many cls will deirve from that and the 
condition for the abstract base class is that it should contain a 
pure virtual function
and virtual funxtion means logically it implies that the virtual fun
tiob will get overwrited by others 

*/

/* 
if we use pure virtual function then if suppose we dint find display
in the derived class then the virtual function wont helpover so 
code throws an error if complied
*/
