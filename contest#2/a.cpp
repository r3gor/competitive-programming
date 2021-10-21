#include <bits/stdc++.h>
using namespace std;

#define LOG(x) cout<<"\""<<#x<<"\""<<" ::: "<<(x)<<endl;
int cmp (double a, double b){return fabs(a-b)<1e-9;}

vector<double> precio = {2,1.8,1.6,1.4,0.5};

void print(int n, int c){
    cout<<"Plan #"<<n<<" - "<<"$"<<c*precio[n-1]<<endl;
}

void solve(int n){
    if (n>1){
        if (n<=500) {print(1, n);return;}
        else if(n<=1024) {print(2, n);return;}
        else if(n<=2048) {print(3, n);return;}
        else if(n<=4096) {print(4, n);return;}
        else if(n<=10240) {print(5, n);return;}
    }
}


int main(){
    int n;cin>>n;
    solve(n);
}