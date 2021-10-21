#include <bits/stdc++.h>
using namespace std;

#define forto(var,ini,end) for(int var=(ini);var<(end);var++)
#define printv(x) cout<<"array: "<<#x<<endl;\
for(int i=0; i<x.size(); i++) {\
cout<<x[i]<<" ";if ((i+1)%10==0) cout<<"\n";}\
cout<<"\n";

int main(){

    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    vector<int> count(n,0);

    forto(i,0,n)
        cin>>v[i];

    sort(v.begin(),v.end());
    forto(_,0,m){
        int i,l; cin>>i>>l;
        forto(r,i-1,l)
            count[r]++;
    }
    sort(count.begin(), count.end());
    int msum=0;
    forto(i,0,n)
        msum += v[i]*count[i];
    cout<<msum<<endl;

    return 0;
}