#include <bits/stdc++.h>
using namespace std;
 
long long f(long long n) {
    for (long long h=sqrt(n); h>0; h--) {
        long long _n = h*(3*h+1)/2;
        if (_n<=n)
            return 1 + f(n - _n);
    }
    return 0;
}
 
int main() {
    int ne;
    long long n;
    cin>>ne;
    while(ne--) {
        cin>>n;
        cout<<f(n)<<"\n";
    } 
}

// #include <bits/stdc++.h>
// using namespace std;

// int f(int n) {
//     for (int h=n/2; h>0; h--) {
//         int _n = h*(3*h+1)/2;
//         if (_n<=n)
//             return 1 + f(n - _n);
//     }
//     return 0;
// }

// int main() {
//     int ne;
//     unsigned int n;
//     cin>>ne;
//     while(ne--) {
//         cin>>n;
//         cout<<f(n)<<"\n";
//     } 
// }