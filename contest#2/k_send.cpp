#include <bits/stdc++.h>
using namespace std;

#define LOG(x) cout<<"\""<<#x<<"\""<<" ::: "<<(x)<<endl;
int cmp (double a, double b){return fabs(a-b)<1e-9;}

void solve(string s){
    vector<int> occ(256, 0);
    vector<int> c_pos(256, -1);
    for(int i=0; i<s.size(); i++){
        if (c_pos[int(s[i])] == -1){
            occ[int(s[i])] = i - occ[int(s[i])];
        } else{
            int cand = i - c_pos[int(s[i])] -1;
            if (cand>occ[int(s[i])]){
                occ[int(s[i])] = cand;
            }
        }
        c_pos[int(s[i])] = i;
    }

    for (int i=0; i<256; i++){
        if(s[s.size()-1]!=char(i) && c_pos[i]>=0){
            if (s.size() - c_pos[i] -1 > occ[i]){
                occ[i] = s.size() - c_pos[i] - 1;
            }
        }
    }

    int max = 0;
    for(int i=0; i<256; i++){
        if (occ[i]>max) max = occ[i];
    }
    cout<<max<<endl;
}

//ececaca -> 4
//ececacaca -> 6

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    
    string s;
    cin>>s;
    solve(s);
}