#include<iostream>
using namespace std;

class employee{

    private :

    int id;
    int salary;
    static int counter;
    static int counter1;
 
    public :

    void set_id(){

        salary = 122;
        cout<<"Enter the value of id of employee "<<(counter+1)<< " is "<<endl;
        cin>>id;

        counter++;
    }

    void get_id();
};

void employee :: get_id(){

    cout<<"The value of id of employee "<<(counter1+1)<<" is "<<id<<endl;
    cout<<counter1<<endl;
    counter1++;
}

int employee :: counter;
int employee :: counter1;

int main(){

    employee fb[4];

    for(int i=0;i<4;i++){
        fb[i].set_id();//whenever this function calls the counter resets
        //to the the original value that is provided in the private
        //section of classes so to avoid this we use static i 
    }

    for(int i=0;i<4;i++){
        fb[i].get_id();
    }
    
    return 0;
}
