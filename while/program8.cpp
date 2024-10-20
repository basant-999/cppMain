#include <iostream>
using namespace std;
int main(){
    // wap to display the sum of of a given digit 
    int d;
    int s=0;
    cout<<"enter any number";
    cin>>d;
    while(d>0){
        s=s+d%10;
        d=d/10;

    }
    cout<<s;
}