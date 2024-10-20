#include <iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout <<" enter two  number"<<"\n";
    cin >>n1>>n2;

    cout<<"opterator(-,+,*,/,%)"<<"\n";
    char opterator;
    cin>>opterator;

    switch(opterator){
        case '-':
        cout<<"deffirence"<<n1-n2<<"\n";
        break;
        case '+':
        cout<<"addition"<<n1+n2<<"\n";
        break;
        case '*':
        cout<<"multipication"<<n1*n2<<"\n";
        break;
        case '/':
        cout<<"division"<<n1/n2<<"\n";
        case '%':
        cout<<"remender"<<n1%n2<<"\n";
        break;
        default:
        cout<<"invalid";
    }
}