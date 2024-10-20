#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number";
    cin>>num;
    if(num>=60){
        cout<<"grad a";
    }
    else if(num>=50){
        cout<<"grad b";
    }
    else if (num>=40){
        cout<<"grad c";
    }
    else{
        cout<<"improve";
    }
}