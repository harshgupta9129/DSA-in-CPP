// Substract The Product and SUm of Digits of an integer
#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cout<<"Enter A Number : ";
    cin>>n;
    int sum = 0;
    int product = 1;
    while (n!=0) {
        sum+=(n%10);
        product*=(n%10);
        n/=10;
    }
    cout<<"Answer is : "<<product-sum<<endl;
    return 0;
}