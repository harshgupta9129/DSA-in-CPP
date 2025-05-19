// Number of 1 Bits
#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cout<<"Enter A Number : ";
    cin>>n;
    int count = 0;
    while (n!=0) {
        if (n%2!=0) count++;
        n/=2; 
    }
    cout<<count<<endl;
    return 0;
}