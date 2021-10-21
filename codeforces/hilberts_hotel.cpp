/**
 * A. Hilbert's Hotel
 * https://codeforces.com/contest/1344/problem/A
*/
#include <bits/stdc++.h>
using namespace std;

int mod(int x, int n){ 
    if (x<0) return mod(x+(int)(-x/n+1)*n, n);
    return x%n;
}

bool f(const vector<int> s, const int n) {
    vector<bool> v(n,0);
    for (int i=0; i<n; i++) {
        int a = mod(i+s[i], n);
        if (v[a]) return false;
        v[a] = 1;
    }
    return true;
}

int main() {
    int nc, n;
    cin>>nc;
    while(nc--) {
        cin>>n;
        vector<int> s(n);
        for (int i=0; i<n; i++) {
            cin>>s[i];
        }
        cout<<(f(s,n)? "YES":"NO")<<"\n";
    }
}