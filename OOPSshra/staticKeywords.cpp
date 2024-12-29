#include<iostream>
#include<string>
using namespace std;

class abc{
    public:
        abc(){
            cout<<"i am const\n";
        }
        ~abc(){
            cout<<"i ma distructor\n";
        }
};
int main(){
    if(true){
        static abc obj;
        cout<<"end of main functoin\n";
    }
}