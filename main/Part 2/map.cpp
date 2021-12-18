#include<iostream>
#include<map>
#include<cstring>

using namespace std;

int main(){

    map <string,int> marksmap;

    marksmap["Harrybhai"] = 98;
    marksmap["Anirudh"] = 76;
    marksmap["Rohan"] = 87;
    marksmap["Sree"] = 96;

    marksmap.insert({{"Karthik" , 45},{"Zuveriya", 67}});
    // above syntax is imp and it arranges in alphabatecial order in deafult;

    map <string,int> :: iterator iter;
    iter = marksmap.begin();

    map <string,int> :: iterator iter1;
    iter1 = marksmap.begin();

    for(int i =0;i<4;i++){
        iter1++;
    }

    iter1 = marksmap.end();

    for(iter;iter!=iter1;iter++){

        cout<<(*iter).first<<" "<<(*iter).second<<endl;// use (*iter) but not
        // *(iter);
        // here the first keyword is key and the second keyword is the value of the key
    }

    cout<<endl;

    iter = marksmap.begin();
    
    for(iter;iter!=marksmap.end();iter++){

        cout<<(*iter).first<<" "<<(*iter).second<<endl;// use (*iter) but not
        // *(iter);
        // here the first keyword is key and the second keyword is the value of the key
    }

    cout<<"The size is : "<<marksmap.size()<<endl;
    cout<<"The max_size is : "<<marksmap.max_size()<<endl;
    cout<<"whether the map is empty or not : "<<marksmap.empty()<<endl;
    
    return 0;
}
