#include<iostream>
using namespace std;

class RBI
{
    public :void msg()
    {
        cout<<"\n rbi\n";
    }
};
class SBI: virtual public RBI{
    public:void S()
    {
        cout<<"SBI\n";
    }
};

class   Axis: virtual public RBI{
    public:void a()
    {
        cout<<"axix\n";
    }
};

class Cust:public SBI ,public Axis{
    public:void c()
    {
        cout<<"coustmer\n";
    }
};
int main (){
    Cust obj;
    obj.c();
    obj.S();
    obj.a();
    obj.msg();
}