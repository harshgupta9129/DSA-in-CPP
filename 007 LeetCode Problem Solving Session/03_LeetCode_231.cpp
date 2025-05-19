// Power of 2
#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n) {
    int count = 0;
    while (n!=0) {
        if (n&1) count++;
        if (count>1) return 0;
        n = n>>1;
    }
    return count;
}

int main () {
    int n;
    cout<<"Enter A Number : ";
    cin>>n;
    if (isPowerOfTwo(n)) cout<<"Given Number is Power of Two\n";
    else cout<<"Given Number is not Power of Two\n";   
    return 0;
}