#include <iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"enter number"<<"\n";
    cin >>n1>>n2>>n3;
    if(n1>n2)
    {
        if(n1>n3)
        {
            cout<<"max is"<< n1<<"\n";
        }
        else{
            cout <<"max is"<<n3<<"\n";
        }
    }
    else
    {
        if(n2>n3)
        {
            cout<<"max is"<<n2"\n";
        }
        else{
            cout<<"max is"<<n3<<"\n";
        }
    }
   
}