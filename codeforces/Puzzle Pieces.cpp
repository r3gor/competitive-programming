#include <bits/stdc++.h>

using namespace std;
int main() {
    int ne;
    unsigned int n, m;
    cin>>ne;
    while(ne--) {
        cin>>n>>m;
        cout<< (n<=(n+m)/m? "YES":"NO")<<"\n";
    } 
}