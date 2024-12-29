#include<iostream>
#include<string>
using namespace std;

class person{
public:
    string name;
    int age;

    person(string name, int age){
        this-> name = name;
        this-> age = age;
    }
};

class student : public person{
    public:
         int rollno;

    //parent class
    student(string name, int age,int rollno) : person( name, age){ //explisit coll
        this-> rollno = rollno;
    }

    void genInfo(){
        cout<<"name:"<<name<<"\n";
        cout<<"age:"<<age<<"\n";
        cout<<"rollno.:"<<rollno<<"\n";
        
    }
};

int main(){
    student s1("majon",21,123);
    s1.genInfo();
}
 