#include <bits/stdc++.h>
using namespace std;

#define LOG(x) cout<<"\""<<#x<<"\""<<" ::: "<<(x)<<endl;
int cmp (double a, double b){return fabs(a-b)<1e-9;}

void solve(string str){
    stack<char> s;
    for(char c: str)
        s.push(c);
    while(!s.empty()){
        cout<<s.top();
        s.pop();   
    }
}

int main(){

    string S;
    cin>>S;
    solve(S);

}