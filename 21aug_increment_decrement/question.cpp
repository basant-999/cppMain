#include <iostream>
using namespace std;
int main ()
{
    int a = 10;
    int b = 20;
    int c = a++ + b++ ; //11, 21
    cout << " c = " << c << "\n";
    cout << " b = " << a << " \n";
    cout << " b = " << b << " \n"; 

    int d = ++b + c++ ;
    cout << " a = " << a << " \n"; 
    cout << " b = " << b << " \n";
    cout << " d = " << d << " \n";
    cout << " c = " << c << " \n";
}