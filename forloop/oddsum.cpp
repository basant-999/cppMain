#include<iostream>
using namespace std;
int main(){
    int n=150;
    int oddSum=0;

    for(int i=1;i<=n;i++){
        if(i%2!=0){
            oddSum += i;
        }
    }
    cout<<"oddSum"<<oddSum<<"\n";
}