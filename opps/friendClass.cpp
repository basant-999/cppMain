#include<iostream>
using namespace std;

class Axis
{
    int amount = 10000;
    friend class RBI;
};
class SBI
{
    
    int amount = 30000;
    friend class RBI;
};
class RBI{
    public:void balanceaxis(Axis a){
        cout<<"balance of axis=" <<a.amount<<"\n";
    }
    public:void balancesbi(SBI s){
        cout<<"balance of sbi=" <<s.amount<<"\n";
        
    }
};
int main(){
    Axis a;
    SBI s;
    RBI r;
    r.balanceaxis(a);
    r.balancesbi(s);
}