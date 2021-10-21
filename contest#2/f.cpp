#include <bits/stdc++.h>
using namespace std;

#define LOG(x) cout<<"\""<<#x<<"\""<<" ::: "<<(x)<<endl;
int cmp (double a, double b){return fabs(a-b)<1e-9;}

void solve(int op, vector<int> v){
    if (op==1){
        for (int i=v.size()-1; i>0; i--)
            cout<<v[i]<<" ";
        cout<<v[0]<<endl;
    }

    else if(op==2){
        for (int i=0; i<v.size()-1; i++)
            cout<<v[i]<<" ";
        cout<<v[v.size()-1];
    }

    else if(op==3){
        sort(v.begin(),v.end());
        for (int i=v.size()-1; i>0; i--)
            cout<<v[i]<<" ";
        cout<<v[0]<<endl;
    }
}

int main(){

    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int op;cin>>op;
    solve(op, v);
    
}