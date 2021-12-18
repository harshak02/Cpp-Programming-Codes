#include<iostream>
using namespace std;

int main(){
    
    /*              A
         B                     C
                    D

    1)IF A HAS AN INT "a" VARIABLE THEN IT WILL TRANSFORM TO B AND C
    2)THEN HERE AGAIN a CLASS D IS DERIVED MULTIPLLY FROM B AND C 
    3)THE INT A WHICH IS THERE WILL HAVE TWO COPIES IN D SO THIS IS AN AMBIGUITY
    4)SO TO AVOID THIS WE ARE USING *VIRTUAL BASE* FOR A,B AND C AND THEN DERIVE
      A CLASS D SO THAT AMBUIGUITY RESOLVES
    5) THE SYNTAX IS :--
                class B : virtual public A{

                };

                class C : virtual public A{

                };


    */

    return 0;
}
