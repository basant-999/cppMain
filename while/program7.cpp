#include<iostream>
using namespace std ;
int main ()
{
int a, c=0;
cout<<"enter any nuber";
cin>>a;
while(a>0)
{
    if(a%10>=0)
    {
        c++;
    }
    a=a/10;
}
cout<<"total digit="<<c;


}