#include<iostream>
using namespace std;
int main(){
    int arr[] = {19,8,5,6,4};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<"lenght of array="<<len<<"\n";
    int chotu=INT_MIN;
    for(int i=0; i<len; i++){
  
   if(arr[i]%2==0)
   {
    cout<<arr[i]<<"\t";
   }
    }
}