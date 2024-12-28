#include<iostream>
#include<string>
using namespace std;

        class Teacher{

            private:
            double salary;

            public:
            string name;
            string dept;
            string subject;
            Teacher(){
                dept = "computer sciennce";
            }
            Teacher(string name,string dept,string subject,double salary)
            {
            this->name =name;
            this->dept =dept;
            this->subject=subject;
            this->salary=salary;
            }
        
            void changeDept(string newDept){
                dept = newDept;
            }

            void genInfo(){
                cout<<"name : "<<name<<"\n";
                cout<<"subject :"<<subject<<"\n";

            }
        };

        int main(){
        Teacher t1("basant","math","c++",25000);
        t1.genInfo();
        return 0;
        }