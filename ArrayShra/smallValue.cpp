#include<iostream>
using namespace std;
int main(){
    int nums[] = {5,8,3,1,7,6,0} ;
    int size = 7;
    int smallest = INT_MAX;
    for (int i=0;i<size;i++){
        smallest = min(nums[i],smallest);
    }
    cout<<"smallest="<<smallest<<"\n";
}