#include<iostream>
using namespace std;
int main(){
// wrete a program to find a primary number
int n,k=1,c=0;
bool f =false;
cout<<"inter number"<<"\n";
cin>>n;
do{
    if(n%2==0){
        f=true;
        break;
    }
    k--;

}while(k>1);
if(f==true){
    cout<<"not prime"<<"\n";
}else
{
    cout<<"prime";
}
}
