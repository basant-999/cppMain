#include<iostream>
using namespace std;
int main(){
    int arr[] = {64,3,81,9,25};
    int s = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<s; i++){
        int j = arr[i];
        for(int x=1; x<=j;x++){
            if(x*x==j){
                cout<<j<<"/t";
                break;
            }
        }
    }
}