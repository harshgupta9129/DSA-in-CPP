#include<bits/stdc++.h>
using namespace std;

int main () {
    int a = 2;
    int b = 4;
    cout<<a<<" & "<<b<<" = "<<(a&b)<<endl;
    cout<<a<<" | "<<b<<" = "<<(a|b)<<endl;
    cout<<a<<" ^ "<<b<<" = "<<(a^b)<<endl;
    cout<<"~ "<<a<<" = "<<~a<<endl;
    int c = 16;
    cout<<c<<"<<"<<a<<" = "<<(c<<a)<<endl;
    cout<<c<<">>"<<a<<" = "<<(c>>a)<<endl;
    return 0;
}