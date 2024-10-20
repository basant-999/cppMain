#include<iostream>
using namespace std;
int main(){
    // int s=90;
    // while(s--)
    // {
    //     cout<<s;
    // }
    // =============================
    // int s= 45;
    // int &f =s;
    // cout<<f--;

    int a=3;
    int b=45;
    int c=--a;
    b=c++;
    cout<<b+c;
}