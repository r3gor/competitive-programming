#include <iostream>
#include <vector>
#include <utility>
using namespace std;

#define vpi vector<pair<int,int>>
#define F first
#define S second
#define FOR(i,n) for(size_t i=0;i<n;i++)

int find(vpi &x, int a){
    if(x[a].F!=a)
        x[a].F = find(x,x[a].F);
    return x[a].F;
} 

void u(vpi &x, int a, int b){
    int pa = find(x,a);
    int pb = find(x,b);

    if(x[pa].S > x[pb].S)
        x[pb].F = x[pa].F;
    else if (x[pa].S < x[pb].S)
        x[pa].F = x[pb].F;
    else{
        x[pa].F = x[pb].F;
        x[pb].S++;
    }
}

bool p(vpi &x, int a, int b){
    return find(x,a) == find(x,b);
}

int main() {
    ios::sync_with_stdio(0);cin.tie(0);

    int n,m;
    cin>>n>>m;
    vpi x(n);
    FOR(i,n) x[i]={i,0};
    while(m--){
        char op;
        int a,b;
        cin>>op>>a>>b;
        if(op=='P')
            cout<<p(x,a,b)<<endl;
        if(op=='U')
            u(x,a,b);
        
        // FOR(i,n) cout<<x[i].F<<" ";
        // cout<<endl;
    }
    return 0;
}