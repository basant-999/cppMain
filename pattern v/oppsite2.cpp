#include<iostream>
using namespace std;
int main (){
    char f= 'A';
    for( int r=1; r<=3; r++){
        for(int s=3; s>r; s--){
            cout<<" ";
        }
        for(int c=1; c<=r; c++){
            cout<<f;
            f++;
        }
        cout<<"\n";
    }
}