#include<iostream>
#include<vector>
using namespace std;
int main(){
      vector <int>vec ;
      cout<<"size="<<vec.size()<<"\n";
      vec.pop_back(45);
      cout<<"size after pop back="<<vec.size()<<"\n";

    for (char val : vec){
        cout << val <<"\n";
    }
    return 0;
}