#include<iostream>
#include<string>
using namespace std;

class student{
    public:
        string name;
        int rollno;
};
class Teacher{
    public:
        string subject;
        double salary;
};
class ta : public student,public Teacher{

};

int main(){
    ta s1;
    s1.name = "radae";
    s1.subject = "math";
    s1.salary = 25000;
    cout<<"name"<<s1.name<<"\n";
    cout<<"slary"<<s1.salary<<"\n";

}
