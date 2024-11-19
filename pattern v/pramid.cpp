#include<iostream>
using namespace std; 
int main(){
    for(int i=1; i<=5; i++){
        for(int s=5; s>i; s--){
            cout<<" ";
        }
        for(int j=i; j>=1; j--){
            cout<<"* ";
        }
        cout<<"\n";
    }
    // ========================================
    for(int i=1; i<=5; i++){
        for(int s=5; s>i; s--){
            cout<<" ";
        }
        for(int j=i; j>=1; j--){
            cout<<s<<" ";
        }
        cout<<"\n";
    }
}