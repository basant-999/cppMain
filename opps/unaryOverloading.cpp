
#include<iostream>
using namespace std;
class top
{
    int a =10;
    public: operator ++()
    {
        a++;
        cout<<a<<"\n";
    }
    public: operator --()
    {
        a--;
        cout<<a<<"\n";
    }
};
int main (){
    top p;
    ++p;
    --p;
    // int a=90;
    // cout<<"\n";
    // cout<<++a;
}