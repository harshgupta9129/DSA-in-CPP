#include<bits/stdc++.h>
using namespace std;

int main () {
    int a,b;
    cout<<"Enter First Number : ";
    cin>>a;
    cout<<"Enter Second Number : ";
    cin>>b;
    if (a>b) {
        cout<<"First Number is Greater Than Second Number"<<endl;
    }
    else if (a<b) {
        cout<<"Second Number is Greater Than First Number"<<endl;
    }
    else {
        cout<<"Both Number are Equal"<<endl;
    }
    return 0;
}