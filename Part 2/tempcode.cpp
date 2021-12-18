#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> vec1(4);//this is crct iteris used only when we have the values and indexs
    //only one way is use push_back and pop_back for adding and deleting the elements

    vector <int> :: iterator iter;
    iter = vec1.begin();

    for(int i = 0;i<4;i++){
        *iter = i+1;
        iter++;
    }

    for(int i = 0;i<vec1.size();i++){
        cout<<vec1[i]<<" ";
    }

    return 0;
}
