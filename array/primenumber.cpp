#include<iostream>
using namespace std;
int main(){
    int arr[] = {49,3,7,12,36};
    int s= sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"\n prime num";
    for(int i=0;i<s;i++){
        int n=arr[i];
        int r=n-1;
        bool b = true;
        for(r;r>1;r--){
            if(n%r==0){
                b=false;
                break;
            }
        }
        if(b==true){
            cout<<n<<"\t";
        }
    }
}