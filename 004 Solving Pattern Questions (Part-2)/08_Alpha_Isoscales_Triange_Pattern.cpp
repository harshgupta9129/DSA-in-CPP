#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cout<<"Enter The Height Of Triangle : ";
    cin>>n;
    int i = 1;
    while (i<=n) {
        int j = 1;
        while (j<=n-i) {
            cout<<"  ";
            j++;
        }
        j = 1;
        while (j<=2*i-1) {
            cout<<char(j+64)<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}