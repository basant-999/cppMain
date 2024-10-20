#include<iostream>
using namespace std;
int main (){

    // write a program to given a facter
    int a,c=0,k;
    cout<<"enter number";
    cin>>a;
    k=a-1;
    while(k>=1){
        if(a%k==0){
            c=c+k;
        }
        k--;
    }
    cout<<"factor"<<c;

}
