#include <iostream>
using namespace std;
int main(){
    // 1,-2,3,-4,n
    int n;
    cin>>n;
    int count =0;
    for(int i=1; i<=n; i++){
        if(i%2==0){
            count-=i;
        }
        else{
            count+=i;
        }
    }
    cout<<count;

}