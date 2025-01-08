#include<iostream>
using namespace std;
class animal 
{
    public:virtual void sound()=0;
};
class cat:public animal 
{
    public:void sound ()
    {
        cout<<"\n meow meow \n";
    }
};
class dog:public animal
{
    public:void sound()
    {
        cout<<"\n barking\n";
    }
};
class lion:public animal
{
    public:void sound()
    {
        cout<<"\n roaringg\n";
    }
};
int main(){
    animal *p;
    cat c;
    dog d;
    lion i;
    p=&i;
    p->sound();
}