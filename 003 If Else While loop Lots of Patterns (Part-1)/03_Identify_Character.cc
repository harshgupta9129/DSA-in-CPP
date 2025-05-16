#include<bits/stdc++.h>
using namespace std;

int main () {
    char ch;
    cout<<"Enter A Character : ";
    cin>>ch;
    if (ch>='0' && ch<='9') {
        cout<<"Given Character is Numeric"<<endl;
    }
    else if (ch>='a' && ch<='z') {
        cout<<"Given Character is Lower Case Letter"<<endl;
    }
    else if (ch>='A' && ch<='Z') {
        cout<<"Given Character is Upper Case Letter"<<endl;
    }
    else {
        cout<<"Given Character is Special Character"<<endl;
    }
    return 0;
}