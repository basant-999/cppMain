#include<iostream>
#include<string>
using namespace std;
class shape{  // abstract class
    virtual void draw() = 0;
};
class circle : public shape {
    public:
        void draw(){
            cout<<"dwawing a circle";
        }
};
int main (){
    circle c1;
    c1.draw();
}