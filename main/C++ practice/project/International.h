#ifndef __International
#define __International

#include <string>
using namespace std;

class international{
    protected:
    //string ifrom,ito,idodep,it1fro,it2to,iflname,iflno,cabi,seati;
    string ifrom,ito,idate,itime1,itime2,iflightname,iflightno,iclass,iseat;
    int iamount;

    public:
    
    void sche();
    void booki1();
    void time();
    void booki2(int a);
    void cabini(); 

};






#endif

