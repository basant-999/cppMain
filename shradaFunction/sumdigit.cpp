#include<iostream>
using namespace std;

int sumOfDigit(int num){
    int digitsum=0;
    while(num>0){
        int lastdigit=num%10;
        num = num/10;
        digitsum =digitsum+lastdigit;
    }
    return digitsum;

}
int main(){
    cout<<"sum"<<sumOfDigit(456);
}