#include <iostream>
using namespace std;
int main(){
    int day;
    cout <<"enter a number";
    cin>>day;
    switch(day){
        case 1:
        cout<<"monday";
        break;
        case 2:
        cout<<"tuesday";
        break;
        case 3:
        cout<<"wenusday";
        break;
        case 4:
        cout<<"thusday";
        break;
        case 5:
        cout<<"friday";
        break;
        case 6:
        cout<<"saturday";
        break;
        case 7:
        cout<<"sunday";
        break;
       default:
       cout<<"invalid day";
    }
}