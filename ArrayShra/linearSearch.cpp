#include<iostream>
using namespace std;
void changeArr(int arr[],int size){
    cout<<"in function"<<"\n";
    for(int i=0;i<size;i++){
        arr[i] = 2*arr[i];
    }
}
int linearSearch (int arr[],int sz){
    for(int i=0;i<sz;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return-1;
}
int main(){
int arr[] = {4,5,3,8,7,8,1};
int sz=7;
int target = 50;
cout<<linearSearch(arr,sz,target)<<"\n";
return 0;
}