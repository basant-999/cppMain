#include<iostream>
using namespace std;
int main(){
    int n ,c, s=0;
    cout<<"enter any three digit number(100-999)";
    cin>>n;
    int org = n;
    if(n>=100 && n<=999)
    {
        while(n>0)
        {
            c=n%10;
            s=s+(c*c*c);
            n=n/10;
        }
        if(s==org)
        {
            cout<<"it is armstrong no";
            cout<<"\nvalue of n="<<n;
        }
        else{
            cout<<"it is not armstrong no";
        }
    }
    else{
        cout<<"not valid number";
    }
}