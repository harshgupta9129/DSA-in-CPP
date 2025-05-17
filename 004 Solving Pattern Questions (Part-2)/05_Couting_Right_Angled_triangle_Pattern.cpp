#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cout<<"Enter The Height Of triangle : ";
    cin>>n;
    int loop = (n * (1 + n))/2;
    int i = 1;
    int count = 0;
    int enter = 1;
    while (i<=loop) {
        if (count == enter) {
            cout<<endl;
            count = 0;
            enter++;
        }
        else {
            cout<<i<<" ";
            count++;
            i++;
        }
    }
    return 0;
}