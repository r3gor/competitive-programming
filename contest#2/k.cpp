#include <bits/stdc++.h>
using namespace std;

#define LOG(x) cout<<"\""<<#x<<"\""<<" ::: "<<(x)<<endl;
int cmp (double a, double b){return fabs(a-b)<1e-9;}

void aux(string s, int i, int &max){
    if (i>max) max = i;
    int cont=0;
    for(int j=i+1; j<s.size(); j++){
        if (s[i]==s[j]){
            if (cont>max) max = cont;
            cont = 0;
        }
        if (j==s.size()-1 && s[j]!=s[i] && ++cont>max){
            max = cont;
        }
        cont++;
    }
}
// axabccbaj -> 8
// axabccbac -> 7
// asabssscbac -> 7
// asabsñññqqqqq -> 10
// ccnccannn -> 5
// abcbabac -> 4
// abcbaba -> 4

void solve(string s){
    set<char> dc;
    int max=0;
    for(int i=0; i<s.size()-1; i++){
        if (dc.find(s[i])==dc.end()){
            aux(s,i,max);
            dc.insert(s[i]);
        }
    }
    if (dc.find(s[s.size()-1])==dc.end())
        max = s.size() -1;
    cout<<max<<endl;
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    
    string s;
    cin>>s;
    solve(s);
}