#include<iostream>
using namespace std;
int c;
void sum(int a,int b){
    c=a+b;
}
void show(){
    cout<<c;
}
int main(){
    int w,p;
    cout<<"enter 2 no\n";
    cin>>w>>p;
    sum(w,p);
    show();

}