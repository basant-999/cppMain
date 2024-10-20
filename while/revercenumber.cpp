#include <iostream>
using namespace std;
int main(){
    // wap to display the reverce number
    int a;
    int s=0;
    cout<<"enter any number";
    cin>>a;
    while(a>0){
        s = s*10+a%10;
        a=a/10;

    }
    cout<<s;
}