#include <iostream>
using namespace std;
int main(){
    // print the first n factorial number?
    int n;
    cin>>n;
    int factorial = 1;
    for(int i=1; i<=n; i++){
     factorial  = factorial* i;
        cout<<factorial<<"\n";
    }
}