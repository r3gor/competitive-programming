#include <bits/stdc++.h>
using namespace std;

#define LOG(x) cout<<"\""<<#x<<"\""<<" ::: "<<(x)<<endl;
int cmp (double a, double b){return fabs(a-b)<1e-9;}


int EFF = 0;

void solve2(string s){
    int max=0;
    for (int i=0; i<s.size(); i++){
        for(int j=i; j<s.size(); j++){
            if(s[i]==s[j] && j-i-1>max){
                // cout<<s[i]<<endl;
                max = j-i-1;
                break;
            }
            if (j==s.size()-1 && j-i>max) {
                max = j-i;
            }
            EFF++;
        }
    }
    cout<<max<<endl;
}



void aux(string s, int i, int &max){
    int cont=0;
    for(int j=i+1; j<s.size(); j++){
        if (s[i]==s[j]) cont = 0;
        else cont++;
        if (cont>max) max = cont;
        EFF++;
    }
}
void solve(string s){
    set<char> dc;
    int max=0;
    for(int i=0; i<s.size(); i++){
        if (dc.find(s[i])==dc.end()){
            aux(s,i,max);
            dc.insert(s[i]);
        }
    }
    cout<<max<<endl;
}

int main(){
// "a@aaaaa!aaaaa@a"
    string s;
    cin>>s;
    solve(s);
    cout<<"EFF::"<<EFF<<endl;
    EFF = 0;
    solve2(s);
    cout<<"EFF::"<<EFF<<endl;

    // int max=0;  
    // aux(s, 0, max);
    // cout<<max<<endl;  
}