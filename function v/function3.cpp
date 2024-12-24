#include<iostream>
using namespace std;

    int roi(){
        return 4 ;
    }
    int balance(int pwd){
        if(pwd==203){
            return 10000;
        }else{
            return -1;
        }
    }
int main(){
cout<<balance(200);
}