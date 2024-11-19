#include<iostream>
using namespace std;
int main(){
    int arr[] = {19, 8,5,6};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<"lenght of array="<<len<<"\n";
    int chotu=INT_MIN;
    for(int i=0; i<len; i++)
   if(chotu<arr[i])
   {
    chotu=arr[i];
   }
   cout<<chotu;
}