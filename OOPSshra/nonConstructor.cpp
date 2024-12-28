#include<iostream>
#include<string>
using namespace std;

class Teacher{

    private:
    double salary;

    public:
    string namme;
    string dept;
    string subject;

    void changeDept(string newDept){
        dept = newDept;
    }

    void getSalary(double s){
        salary = s;
    }

    double getSalary(){
        return salary;
    }
};

int main(){
    Teacher t1;   // constructor
    t1.namme="basant";
    t1.subject = "c++";
    t1.getSalary(25000);
    cout<<t1.namme;
}