#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cout<<"Enter The Height of Triangle : ";
    cin>>n;
    int i=1;
    while (i<=n) {
        int j = 1;
        while (j<=i) {
            cout<<j<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}