#include<bits/stdc++.h>
using namespace std;

int reverse (int x) {
    long long y = 0;
    while (x!=0) {
        y = y*10 + (x%10);
        if (y > INT32_MAX || y < INT32_MIN) return 0;
        x/=10;
    }
    return int(y);
}

int main () {
    int x;
    cout<<"Enter A Number : ";
    cin>>x;
    cout<<reverse(x)<<endl;
    return 0;
}