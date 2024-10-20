#include <iostream>
using namespace std;
int main ()
{
    int n1, n2, n3;
    cout << "enter n1" << "\n";
    cin >> n1;
    cout << "enter n2" <<"\n";
    cin >> n2;
    cout << "enter n3" << "\n";
    cin >> n3;

    if(n1>n2 && n1>n3)
    {
        cout <<"n1 is max" ;
    }
    else if(n2>n1 && n2>n3)
    {
        cout << "n2 is max";
    }
    else
    {
        cout << "n3 is max";
    }
    
}