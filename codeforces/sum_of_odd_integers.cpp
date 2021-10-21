#include <bits/stdc++.h>

using namespace std;
int main() {
    int n,a,b;
    cin>>n;
    while(n--) {
        cin>>a>>b;
        if (a%2!=b%2 or sqrt(a)<b)
            cout<<"NO"<<"\n";
        else 
            cout<<"YES"<<"\n";
    }
    return 0;
}