#include<iostream>
using namespace std;
int main (){
    // for(int i=1; i<=3; i++){
    //     for(int s=3; s>i; s--){
    //         cout<<" ";

    //     }
    //     for(int j=i; j>=1; j--){
    //         cout<<j;
    //     }
    //     cout<<"\n";
    // }
    // ======================================================
     for(int i=1; i<=3; i++){
        for(int s=3; s>i; s--){
            cout<<" ";

        }
        for(int j=i; j>=1; j--){
            cout<<char(j+64);
        }
        cout<<"\n";
    }
    
}