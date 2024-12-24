#include<iostream>
using namespace std;
#include<string.h>
int main(){
    char paradom[20];
    cout<<"enter"<<"\n";
    cin>>paradom;
    if(strrev(paradom)==paradom)
    {
        cout<<"yes";

    }
    else{
        cout<<"no";
    }
}