#include<iostream>
using namespace std;
class bhopal
{
    int mile;
    public:bhopal(int m)
    {
        mile=m;
    }
    operator -(bhopal & obj){
        mile=obj.mile-mile;
        cout<<"total km ="<<mile;
    }
};



int main(){
    bhopal start (12400);
    bhopal end(12580);
    start-end;
}