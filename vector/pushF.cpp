#include<iostream>
using namespace std;
#include<vector>
int main (){
    vector <int>vec;
    cout<<"size"<<vec.size()<<"\n";
    vec.push_back(56);
    cout<<"size after push"<<vec.size()<<"\n";

    for(int val:vec){
        cout<<val<<"\n";
    }

}