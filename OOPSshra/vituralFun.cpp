#include<iostream>
#include<string>
using namespace std;

class parent{
    public:
        void getinfo(){
            cout<<"parent class\n";
        }
        virtual void hello(){
            cout<<"hello form parent\n";
        }
};
class child:public parent{
    public:
        void getinfo(){
            cout<<"child class\n";
        }
         void hello(){
            cout<<"hello form child\n";
        }

};
int main(){
    child c1;
    c1.hello();
}