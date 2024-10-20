#include<iostream>
using namespace std;
int main(){
    int h,m;
    cout<<"enter hour(0-23)"<<"\n";
    cin>>h;
    cout<<"enter minite(0-59)"<<"\n";
    cin>>m;
    switch(h/12)
    {
        case 0:
        {
            cout<< "hour:"<<h-12<<":"<<m<<"am";
            break;
        }
        case 1:
        {
          int k =(h-12) ==0?0:h;
          if(k==0)
          {
            cout<<"00:00"<<"a.m";
          }
          else
          {
            cout<<k-12<<":"<<m<<"p.m.";
          }
          break;
        }
    default:
    {
        cout<<"invalid time";
        break;
    }
    }
}