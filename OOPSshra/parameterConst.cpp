#include<iostream>
#include<string>
using namespace std;

class Teacher{

    private:
    double salary;

    public:
    //nonparameterconstructor
    Teacher(){
        dept = "computer sciennce";
    }
    // parameterConstructor
    Teacher(string n,string s,string sa)
    {
        name =n;
        subject=s;
        salary=sa;
    }
    string name;
    string subject;
    string dept;


    void changeDept(string newDept){
        dept = newDept;
    }

    void getSalary(double s){
        salary = s;
    }

    double getSalary(){
        return salary;
    }

    void genInfo(){
        cout<<name<<"\n";
        cout<<subject<<"\n";

    }
};

int main(){
   Teacher t1("basant","java","sdd");
   t1.genInfo();
   return 0;
}