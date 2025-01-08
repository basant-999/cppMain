#include<iostream>
using namespace std;

class RBI{
    public :void msg(){
        cout<<"rbi";
    }

    
};
class SBI: public RBI{
    public :void sbi()
    {
        cout<<"sbi\n";
    }
};
class AXIX:public RBI{
    public :void axix()
    {
        cout<<"axix";
    }
};
class PNB:public RBI{
    public  :void pnb()
    {
        cout <<"pnb";
    }
};
int main (){
    SBI r;
    r.msg();
    r.sbi();
    
}
