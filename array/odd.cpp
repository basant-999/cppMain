#include<iostream>
using namespace std;
int main(){
    int arr[] = {19, 8,5,6};
    int len = sizeof(arr)/sizeof(arr[0]);
    int s = 0;
    for(int i=0; i<len; i++){
        if(arr[i]%2!=0)
        {
            // cout<<arr[i];
            s=s+arr[i];
        }
    }
    cout<<endl;
    cout<<s;
}