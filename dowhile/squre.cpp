#include <iostream>
using namespace std;
int main()
{
    // whrit a program to dispay the suqare of valid number 
   int n, i=1,c=0;
   bool f=false;
    cout<<"enter a no."<<"\n";
    cin>>n;
  do{
    if(i*i==n){
        f=true;
        break;
    }
    c++;
    i++;
  }while(i<=n/2);
 if(f==true)
 {
    cout<<"valid square"<<i;
 }
 else
 {
    cout<<"invalid";
 }
}
