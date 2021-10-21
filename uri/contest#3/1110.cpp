// #include <bits\stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
#define LOG(x) cout<<#x<<":\t"<<x<<endl
#define PV(v) cout<<#v<<" =\t"; for (auto i: v) cout<<i<<" "; cout<<"\n";
#define BE(v) v.begin(), v.end()
template<typename T> 
vector<T> sub_vec(vector<T>v, int idx_f, int idx_e){ return vector<T>(v.begin()+idx_f, v.begin()+idx_f+idx_e); } 

void fans(vector<int> disc, int reman){
    cout<<"Discarded cards:";
    if (disc.size()==0) cout<<endl;
    else {
        for (int i=0; i<disc.size()-1; i++) cout<<" "<<disc[i]<<",";
        cout<<" "<<disc[disc.size()-1]<<endl;
    }
    cout<<"Remaining card: "<<reman<<endl;
}

void solve(int n){
    // if (n==1) return fans({}, 1);
    // if (n==2) return fans({1}, 2);
    vector<bool> deck(n,true);
    vector<int> ans(n,0);
    int idx = 0;
    bool flag = true;
    while(idx != n){ // O(log(2,n)) worst: O(log(2,50))
        for (int i=0; i<n; i++){
            if (!deck[i]) {
                continue;
            }
            if (flag){
                deck[i]=false;
                ans[idx++] = i+1;
                flag = false;
            } else {
                flag = true;
            }
        }
    }
    return fans(sub_vec(ans, 0, n-1), ans[n-1]);
    // PV(ans);
}

int main(){
    int n;cin>>n;
    while(n!=0){
        solve(n);
        cin>>n;
    }
    // solve(7);
    // solve(19);
    // solve(10);
    // solve(6);
}