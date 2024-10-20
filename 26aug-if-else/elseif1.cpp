#include <iostream>
using namespace std;
int main ()
{
    int score;
    cout << "inter score" <<"\n";
    cin >> score;
    if(score>60)
    {
        cout <<"well done" <<"\n";
    }
    else if(score>40)
    {
        cout <<"can improve" <<"\n";
    }
    else 
    {
        cout << "poor performance";
    }
}