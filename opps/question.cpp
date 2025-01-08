#include<iostream>
using namespace std;
class cybrom
{
    public:cybrom (int a)
    {
        for(int i;i<=10;i++){
            cout<<a*i<<"\t";
        }
    }
};
int main (){
    cybrom obj(4);
}