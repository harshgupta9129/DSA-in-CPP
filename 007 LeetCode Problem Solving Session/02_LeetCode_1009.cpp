#include<bits/stdc++.h>
using namespace std;

int bitwiseComplement(int n) {
    if (n==0) return 1;
    int a[32] = {0};
    int i = 0;
    while (n!=0) {
        if (n&1) a[i++] = 0;
        else a[i++] = 1;
        n = n>>1;
    }
    int ans = 0;
    int mul = 1;
    for (int j = 0; j<i; j++) {
        ans = ans + mul * a[j];
        mul*=2;
    }
    return ans;
}

int main () {
    int n;
    cout<<"Enter A Number : ";
    cin>>n;
    cout<<bitwiseComplement(n)<<endl;
    return 0;
}