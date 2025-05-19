#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cout<<"Enter The Value of N : ";
    cin>>n;
    int a = 0;
    int b = 1;
    int sum = 0;
    for (int i=1; i<=n; i++) {
        cout<<sum<<" ";
        sum = a + b;
        b = a;
        a = sum;
    }
    return 0;
}