#include<iostream>
using namespace std;

class sbi
{
    public:void sbiacnt()
    {
        cout<<"sbi\n";
    }
};
class axis
{
    public:void axisacnt()
    {
        cout<<"axis\n";
    }
};
class customer:public sbi,public axix
{
    public:void msg()
    {
        cout<<"welcome\n";
    }
};
int main(){
    customer ct;
    ct.msg();
    ct.axisacnt();
    ct.sbiacnt ();

}