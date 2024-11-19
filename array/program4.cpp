// write a programe to display array to disending array
#include<iostream>
using namespace std;
int main(){

    int arr[]={3,1,4,2,5};
    int s=sizeof(arr)/ sizeof(arr[0]);
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";

    }
    cout<<"\nAfter\n";
    for(int i=0;i<s;i++){
        for(int j=0;j<s-1;j++){
            int tmp;
            if(arr[j]<arr[j+1]){
                tmp=arr[j+1];
                arr[j+1] = arr[j];
                arr[j]=tmp;
            }
        }
    }
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }

}