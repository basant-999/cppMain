#include<iostream>
using namespace std;
int main(){
    int large [] = {7,8,9,10,45,};
    int size = 5;
    int largest = INT_MIN;
    for( int i=0;i<size;i++){
        largest = max(large[i],largest);
    }
    cout<<"largest="<<largest<<"\n";
}