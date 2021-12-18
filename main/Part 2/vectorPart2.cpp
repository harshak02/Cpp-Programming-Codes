#include<iostream>
#include<vector>

using namespace std;

template <class T>
void display(vector <T> v){

    cout<<"Display function executed "<<endl;

    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;
}

int main(){
    int element;
    
    // vector <int> vec1;// zero lenght vector so display's null
    // display(vec1);

    vector <int> vec2(4);// it will print 4 zeros and other changes will 
    // // add next
    // // for(int j =0;j<4;j++){
    // //     cout<<"Enter the value of "<<(j+1)<<" element"<<endl;
    // //     cin>>element;
    // //     vec2.push_back(element);
    // // }
    // // the above one practically wont work;
    // display(vec2);

    // vector <char> vec2(4);
    // vec2.push_back('a');// adds at last
    // // display(vec2);

    // vector <char> vec3(vec2);
    // display(vec3);// ntng but just initilazies the vec2;

    // vector <int> vec3(vec2);
    // display(vec2);// ntng but just initilazies the vec2;


    vector <int> vec4(6,5);//(x,y)-> y printed x times
    display(vec4);

    vector <int> :: iterator iter1;
    iter1 = vec4.begin();

    for(int i = 0;i<4;i++){

        *(iter1) = i+1;
        iter1++;
    }

    display(vec4);

    vector <int> :: iterator iter = vec4.begin();

    vec4.insert(iter+3,10);

    display(vec4);
    cout<<vec4.size()<<endl;

    return 0;
}
