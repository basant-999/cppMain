#include<iostream>
#include<string>
using namespace std;

class person{
public:
    string name;
    int age;

};

class student : public person{
    public:
         int rollno;

};   

class gradStudent : public student{
    public:
    string rearch;
};
int main(){
   gradStudent s1;
   s1.name= "pravin";
   s1.rearch = "pagal aasik";
   cout<<"name :"<<s1.name<<"\n";
   cout<<"rearch :"<<s1.rearch<<"\n";
}
 