#include<iostream>
using namespace std;
class virus
{
    public:void affect(){
        cout<<"ur system got hacked";

    }
};
class Reward
{
    virus v;
    public:void price()
    {
        cout<<"u won $200000\n";
        v.affect();

    }
};
int main(){
    Reward r;
    r.price();
}