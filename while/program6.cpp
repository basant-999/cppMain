
#include <iostream>
using namespace std;
int main (){
// write a program to fine the fectors of any number 
int a, c=0, k;
cout<<"enter any number";
cin>>a;
k=a-1;
while(k>=1)
{
    if(a%k==0)
    {
        c=c+k;
    }
    k--;
}
if(c==a)
{
    cout<<"perfect no";
}
else{
    cout<<"not perfect";
}
}