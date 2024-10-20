#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "enter any char" << "\n";
    cin >> c;
    switch(c)
    
        case 'm';
        case 'M';
        {
            cout <<"male";
            break;
        }
        case 'F';
        {
            cout << "female";
            break;
        }
        default:
        {
            cout << "other";
            break
        }
    
    
}