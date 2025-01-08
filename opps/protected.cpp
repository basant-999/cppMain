
#include<iostream>
using namespace std;

class collage{
    protected:void show()
    {
        cout<<"\n collage\n";
    }
};
class student :public collage
{
    public:void msg()
    {
        cout<<"\nstudent\n";
        show();
    }
};
int main()
{
    student s;
    s.msg();
}