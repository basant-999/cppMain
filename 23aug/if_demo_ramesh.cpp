#include <iostream>
using namespace std;
int main() 
{
    int pin_number = 0;
    int correct_pin_number = 4456;
    cout << "enter pin number" << "/n";
    cin >> pin_number;
    if(pin_number == correct_pin_number)
    {
        cout << "withdrawal successfull" << "/n";
    }
}