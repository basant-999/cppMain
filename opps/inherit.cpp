#include<iostream>
using namespace std;
class RBI
{
    int t;
    public:RBI()
    {
        cout<<"\n rbi memory\n";
    }
     ~RBI()
    {
        cout<<"\n rbi memory realse\n";
    }
    public:
    void show(){
        cout<<"rbi class\n";
    }
   

};
class SBI:public RBI
{
    int a;
    public:SBI()
    {
        cout<<"\n sbi memory\n";
    }
    ~SBI()
    {
        cout<<"\n sbi memory realse\n";
    }
    public:
    void msg(){
        cout<<"sbi class\n";
    }

};
int main(){
    SBI s1;
    s1.show();
    cout<<"size of sbi="<<sizeof(s1);
}