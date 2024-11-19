#include<iostream>
using namespace std;
int main (){
    int arr[2][3];
    cout<<"enter 6 value \n";
    for(int r=0; r<2;r++){
        for(int c=0; c<3;c++){
            cin>>arr[r][c];
        }
    }
    for(int r=0;r<2;r++){
        for(int c=0;c<3;c++){
            cout<<arr[r][c]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"\n After applying transpose concept";
    for(int c=0;c<3;c++){
        for(int r=0;r<2;r++){
            cout<<"arr[r][c]"<<"\t";
        }
        cout<<"\n";
    }
}




// transpose metrix shouild be in square format when we conver any metrix into transpose matrix the coloum get converted into row and & vicee versa