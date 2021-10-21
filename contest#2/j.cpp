#include <bits/stdc++.h>
using namespace std;

#define LOG(x) cout<<"\""<<#x<<"\""<<" ::: "<<(x)<<endl;
int cmp (double a, double b){return fabs(a-b)<1e-9;}

void solve(int n){
    if (n<3){
        if (n==0) cout<<""<<endl;
        if (n==1) cout<<"0"<<endl;
        if (n==2) cout<<"0 1"<<endl;
        return;
    }
    int count = 0;
    int a=0,b=1;
    cout<<"0 1 ";
    for(int i=0; i<n && count<n-2; i++){
        b = b+a;
        a = b-a;
        for (int ii=0; ii<b && count<n-2 ; ii++){
            cout<<b<<" ";
            count++;
        }
    }
}


int main(){

    int n;cin>>n;
    solve(n);
    
}