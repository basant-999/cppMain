#include<iostream>
using namespace std;
int main (){
    for(int i=6;;i+=6){
        if(i%9==0){
            cout<<i;
            break;
        }
    }
}