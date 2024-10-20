#include<iostream>
using  namespace std;
int main(){
    char ch;
    cout <<"inter a character"<<"\n";
    cin>>ch;
    if((ch>='a')&& (ch<='z')){
        cout<<"lower case";
    }
    else{
        cout<<"upper case";
    }
}