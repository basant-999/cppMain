#include<iostream>
using namespace std;
class dp
{
    public:dp()
    {
        cout<<"memory allocated\n";
    }
    ~dp(){
        cout<<"memory relassed";
    }
    void show()
    {
        cout<<"\nwelcome\n";
    }
};
int main(){
    dp d1;
    d1.show();
}