#include<iostream>
using namespace std;

int factorial(int n){
    int fact =1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    cout<<factorial(4)<<"\n";
    cout<<factorial(4);
    cout<<factorial(5);
    cout<<factorial(6);
    cout<<factorial(7);


}