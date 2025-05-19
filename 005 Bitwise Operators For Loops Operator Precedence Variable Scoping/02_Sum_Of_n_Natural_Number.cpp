#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cout<<"Enter The Value Of N : ";
    cin>>n;
    int sum = 0;
    for (int i=1; i<=n; i++) {
        sum+=i;
    }
    cout<<"The Sum of First "<<n<<" Natural Number is "<<sum<<endl;
    return 0;
}