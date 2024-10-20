#include <iostream>
using namespace std;
int main ()
// write a program to take input from user for cost price and selling price and calculate profit or loss

{
int cp, sp;
cout << "input  cp price" << "\n";
cin >> cp;
cout << "input sp price" << "\n";
cin >> sp;
if(cp>sp)
{
    cout <<"lose" << "\n";
}
else if (sp>cp)
{
    cout << "profit" << "\n";
}
else{
    cout << "equal";
}
}