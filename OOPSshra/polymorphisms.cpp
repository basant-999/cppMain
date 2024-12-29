#include<iostream>
#include<string>
using namespace std;

class student{
    public:
        string name;
        student(){
            cout<<"non parameter constructor\n";

        }
        student(string name){
            this-> name = name;
            cout<<" parameter constructor\n";

        }
};
int main(){
        student s1("vk");
}