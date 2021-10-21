#include <bits/stdc++.h>
using namespace std;

#define LOG(x) cout<<"\""<<#x<<"\""<<" ::: "<<(x)<<endl;
int cmp (double a, double b){return fabs(a-b)<1e-9;}

void solve(){
    
}

int main(){

    int n;cin>>n;
    stack<int> s;
    while (n--){
        int op;
        cin>>op;
        if (op==1){
            int v; cin>>v;
            s.push(v);
        }
        if (op==2 && !s.empty()){
            s.pop();
        }
        if (op==3){
            if (s.empty()){
                cout<<"Empty!"<<endl;
                continue;
            }
            else{
                cout<<s.top()<<endl;
            }
            
        }
    }
}