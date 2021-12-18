#include<iostream>
#include<vector>

using namespace std;

template <class T>// we can use this for custom datatype
void display(vector <T> v){ //vector <int> --> this is used as a datatype;
// this one is created as a function template not the class template "v imp";
// so no need to derive in the main function

    for(int i =0;i<v.size();i++){

        cout<<"The "<<(i+1)<<" element of vector is : "<<v[i]<<endl;

    }

    cout<<endl;

    for(int i =0;i<v.size();i++){

        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" ";// we can use this syntax also

    }

}

int main(){
    
    int size;
    int element;
    cout<<"Enter the size of the vector : "<<endl;
    cin>>size;

    vector <int> vec1;// zero lenght vector

    for(int i = 0;i<size;i++){

        cout<<"Enter the value of "<<(i+1)<<" element in the vector"<<endl;
        cin>>element;
        vec1.push_back(element);

    }

    // here we cannot use template
    vector <int> :: iterator iter = vec1.begin();//should be remembered syntax
    // vec1.insert(iter,42);
    // vec1.insert(iter,2,42);//that 2 gives the repeated to be printed
    vec1.insert(iter+2,36);//here it adds at 3rd position


    // vec1.pop_back();// removes last element;
    display(vec1);

    // cout<<"go "<<*iter;//this iter is not meant for vector in displaying or adding data
    //her in displaying data we can use the vec1.at(i) or v[i](simply);

    vector <int> vec2(vec1);
    display(vec2); //ntng but display of vec1 runs

    return 0;
}

