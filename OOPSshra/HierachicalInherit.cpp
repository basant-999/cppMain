#include<iostream>
#include<string>
using namespace std;

class person{
    public:
        string name;
        int  age;
};
class student : public person{
    public:
        int rollno;
};
class Teacher : public person{
    public:
        string subject;
};
class ta : public student,public Teacher{

};

int main(){
    ta s1;
    s1.name = "radae";
    s1.subject = "math";
    cout<<"name"<<s1.name<<"\n";

}
