#include <bits/stdc++.h>
using namespace std;

#define LOG(x) cout<<"\""<<#x<<"\""<<" ::: "<<(x)<<endl;
int cmp (double a, double b){return fabs(a-b)<1e-9;}

void aux(string s, int i, int &max){
    if (i>max) max = i;
    int cont=0;
    for(int j=i+1; j<s.size(); j++){
        if (s[i]==s[j]){
            if (cont>max) max = cont, cout<<max<<endl;
            cont = 0;
        }
        if (j==s.size()-1){
            if (s[j] == s[i])
                if (cont>max) max = cont, cout<<max<<endl;
            if (++cont>max) max = cont, cout<<max<<endl;
        }
        else cont++;
    }
}
// axabccbaj -> 8FAIL! ... CORRECT!
// axabccbac -> 7
// asabssscbac -> 7
// asabsñññqqqqq -> 10
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
    cout<<"MAX::"<<max<<endl;
}

int main(){
    string s;
    cin>>s;
    solve(s);
    
    // int max =0;
    // aux(s,1,max);
    // cout<<"MAX:::"<<max<<endl; 
}