#include<iostream>
#include<string>
using namespace std;

class student{
    public:
    string name;
    double *cgpaP;

    student(string name,double cgpa){
        this-> name = name;
        cgpaP = new double;
        *cgpaP = cgpa;
    }
    student(student &obj){
        this-> name = obj.name;
        this-> cgpaP = obj.cgpaP;
    }
    void genInfo(){
        cout<<"name"<<name<<"\n";
        cout<<"cgpa"<<*cgpaP<<"\n";
    }

};
int main(){
    student s1("ravi kushwahha",9.3);
    student s2(s1);
    s1.genInfo();
    *(s2.cgpaP)=3.8;
    s1.genInfo();
}