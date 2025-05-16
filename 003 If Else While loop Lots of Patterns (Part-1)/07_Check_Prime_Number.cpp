#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cout<<"Enter A Natural Number : ";
    cin>>n;
    int i = 2;
    while (n<=0) {
        cout<<"Enter A Natural Number : ";
        cin>>n;
    }
    if (n == 1) {
        cout<<"Given Number is not Prime Number"<<endl;
    }
    else {
        int i = 2;
        while (i<n) {
            if (n%i == 0) {
                cout<<"Given Number is not Prime Number"<<endl;
                break;
            }
            i++;
        }
        if (i==n) cout<<"Given Number is Prime Number"<<endl;
    }
    return 0;
}