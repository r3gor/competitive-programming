#include <bits/stdc++.h>

using namespace std;
int main() {
    int n, a1, b1, a2, b2;
    cin>>n;
    while(n--) {
        cin>>a1>>b1>>a2>>b2;
        int m = max(a1,b1); 
        cout<< (m == max(a2,b2) && m == min(a1,b1) + min(a2,b2)? "Yes":"No")<<"\n";
    } 
}