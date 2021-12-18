#include<iostream>
using namespace std;

int main(){
    int marks[] = {75,98,76,87};
    int mathmarks[4];

    mathmarks[0]=56;
    mathmarks[1]=55;
    mathmarks[2]=54;
    mathmarks[3]=53;

    //change the array element
    marks[3]=78;

    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;


    // for(int i=0;i<4;i++){
    //     cout<<marks[i]<<endl;
    // }

    cout<<endl;
    int i=0;
    while(i<4){
        cout<<marks[i]<<endl;
        i++;
    }

    //pointer arithmatic = address(new) = address(old)+ i*(sizeofdatatype)
    //example = add(new)=32+1*4==36
    return 0;
}