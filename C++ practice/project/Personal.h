#ifndef __personal
#define __personal


using namespace std; 

class personal:public domestic,public international{
private:
    string name,gender,gmail,contact,age;
public:
    void person();
    
    void seat(int a); 
    void meal(int a);
    void ticketd(int a);
    
    void storedata(int a);
    void searchdata(int a);
    void canceldata(int a);
    void change(int a);
    void flight();
    void flighti();   

};




#endif