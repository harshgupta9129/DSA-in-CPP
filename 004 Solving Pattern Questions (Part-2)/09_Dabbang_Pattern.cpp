#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cout<<"Enter The Depth of Dabbang Pattern : ";
    cin>>n;
    int i = 1;
    int k = 0;
    while (i<=n) {
        int j = 1;
        while (j<=n-i+1) {
            cout<<j<<" ";
            j++;
        }
        j = 1;
        while (j<=2*i-3) {
            cout<<"* ";
            j++;
        }
        j = n-i+k;
        while (j>=1) {
            cout<<j<<" ";
            j--;
        }
        i++;
        k = 1;
        cout<<endl;
    }
    return 0;
}