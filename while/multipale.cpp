#include<iostream>
using namespace std;
int main(){

    int i=4;
    while(true){

        if(i%7==0){
            cout<<i;
            break;
        }
        i+=4;
    }
}