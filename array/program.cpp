
// write a programe to display the sum of the value of array
#include<iostream>
using namespace std;
int main(){
    int arr[] = {19, 8,5,6};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<"lenght of array="<<len<<"\n";
    int s=0;
    for(int i=0; i<len; i++)
    {
        s=s+arr[i];
    }
    cout<<"sum"<<s;
}