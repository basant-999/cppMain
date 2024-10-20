#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a;
    cout << "a";
    cin >> b;
    cout << "b";
    int c;
    c=b;
    b=a;
    a=c;
    cout <<"a"<<a<<"\n";
    cout <<"b"<<b<<"\n";
}