#include<iostream>
using namespace std;
#include<string.h>


class student
{
    char *c;
    public:student(char *s)
    {
        c=new char [20]; 
        strcpy(c,s);
    
    }
    void show()
    {
        cout<<"\nName="<<c<<"\n";
    }
    void surname (char * s){
        strcat(c,s);
    }
    ~student(){   //  delete memory
        delete c ;
        cout<<"memory relase";
    }
};
int main(){
    student s1("basant");
    s1.show();
    student s2 (s1);
    s2.show();
    s2.surname("kushwaha");
    s1.show();
    s2.show();
}