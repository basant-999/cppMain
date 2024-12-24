#include<iostream>
using namespace std;
class top1{
    int a=10, b=90;
    public:void sum()
    {
        cout<<a+b<<"\n";
    }
    void sum(int k, int p, int l){
        cout<<k+p+1<<"\n";
    }
};
int main (){
    top1 f;
    f.sum();
    f.sum(2,3,4);
}