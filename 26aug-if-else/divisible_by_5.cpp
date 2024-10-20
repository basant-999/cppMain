/*wap to accept a number from user if the number is divisible by print its is divisible by 5 otherwise print not divisible by 5.*/

#include <iostream>
using namespace std;
int main ()
{
    int number = 0;
    cout << "enter a nuber " << "/n";
    cin >> number;
    if(number % 5 == 0){
        cout << "number is divisible by 5" << "/n";

    } 
    else{
        cout << "number is not divisible by 5" << "/n";
    }
    return 0;
}