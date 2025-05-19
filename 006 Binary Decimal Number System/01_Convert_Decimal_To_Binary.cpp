#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cout<<"Enter A Number : ";
    cin>>n;
    vector <int> a;
    while (n!=0) {
        a.push_back(n&1);
        n = n>>1;
    }
    n = a.size();
    for (int i = n-1; i>=0; i--) {
        cout<<a[i];
    }
    cout<<endl;
    return 0;
}