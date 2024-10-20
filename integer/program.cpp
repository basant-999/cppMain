#include <iostream>
using namespace std;
int main()
{
    // integer data type
    int banana = 6;
    cout << banana <<"\n";
    cout << "size of int" <<"\n" << sizeof(banana) << "\n";

    char sign ='&';
    cout << sign << "\n";
    cout << "size of char" << sizeof(sign) << "\n";

    bool flag = true;
    cout << flag << "\n";
    cout << "size of bool" << sizeof(flag) << "\n";

    float score = 4.56;
    cout << score << "\n";
    cout << "size of float" << sizeof(score) << "\n";
}