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
    ~student(){ // destructor====
        cout<<"merory delete\n";
        delete cgpaP;
    }
    void genInfo(){
        cout<<"name"<<name<<"\n";
        cout<<"cgpa"<<*cgpaP<<"\n";
    }

};
int main(){
    student s1("ravi kushwahha",9.3);
    s1.genInfo();
   
}