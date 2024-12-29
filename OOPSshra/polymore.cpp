#include<iostream>
#include<string>
using namespace std;

// // compile time polymorphisms(function overllading)

class print{
    public:
        void show(int x){
            cout<<"int : "<<x<<"\n";
        }

        void show(char ch){
            cout<<"char : "<<ch<<"\n";

        }
};
int main(){
    print p1;
    p1.show('abc');
}

// ==========operator overloading(h.w)
