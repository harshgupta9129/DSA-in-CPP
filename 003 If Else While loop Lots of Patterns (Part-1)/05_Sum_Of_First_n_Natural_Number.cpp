#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cout<<"Enter A Natural Number : ";
    cin>>n;
    int sum = 0;
    int i = 1;
    while (i<=n) {
        sum+=i;
        i++;
    }
    cout<<"The Sum of First "<<n<<" Natural Number is "<<sum<<endl;
    return 0;
}