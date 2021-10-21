#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a>>b;
        if (a%b==0) cout<<0;
        else cout<<(b-(a%b));
        cout<<"\n";
    }
    return 0;
}
