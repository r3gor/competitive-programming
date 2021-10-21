#include <iostream>
using namespace std;

int main() {
    int n, i=1;

    while(cin>>n){
        if (!n) break;
        cout<<"Case "<<i++<<": ";
        int p=0, r=0, v;
        for (int i=0; i<n; i++){
            cin>>v;
            if (!v) p++;
            else r++; 
        }
        cout<<r-p<<"\n";
    }
}