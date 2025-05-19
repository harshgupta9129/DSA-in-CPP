#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cout<<"Enter A Natural Number : ";
    cin>>n;
    if (n<=1) cout<<"It is Not a Prime Number\n";
    else {
        int i = 2;
        for (; i<n; i++) {
            if (n%i==0) {
                cout<<"It is Not Prime Number\n";
                break;
            }
        }
        if (i==n) cout<<"It is Prime Number\n";
    }
    return 0;
}